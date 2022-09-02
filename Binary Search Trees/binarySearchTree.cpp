#include <iostream>
#include <conio.h>

using namespace std;

// Tree Node Function.
struct treeNode
{
    int element;
    treeNode *left;
    treeNode *right;
};

// function that returns a pointer to the node containing the value to be found.
treeNode *find(int x, treeNode *T)
{
    if (T == NULL)
        return NULL;
    if (x < T->element)
        return (find(x, T->left));
    else
    {

        if (x > T->element)
            return (find(x, T->right));
        else
            return T;
    }
}

// Function that deletes the entire binary tree.
treeNode *MakeEmpty(treeNode *T)
{
    if (T != NULL)
    {
        MakeEmpty(T->left);
        MakeEmpty(T->right);
        delete (T);
    }
    return NULL;
}

// function that returns pointer to the minimum value in the tree. it is recursive.
treeNode *find_min(treeNode *T)
{
    // if (T == NULL)
    //     return NULL;
    // else
    // {

    //     if (T->left == NULL)
    //         return (T);
    //     else
    //         return (find_min(T->left));
    // }

    if (T != NULL)
        while (T->left != NULL)
            T = T->left;
    return T;
}

// function that returns pointer to the max value in the tree. it is non recursive.
treeNode *find_max(treeNode *T)
{
    // if (T != NULL)
    //     while (T->right != NULL)
    //         T = T->right;
    // return T;

    if (T == NULL)
        return NULL;
    else
    {

        if (T->right == NULL)
            return (T);
        else
            return (find_min(T->right));
    }
}

treeNode *insert(int x, treeNode *T)
{
    if (T == NULL)
    { /* Create and return a one-node tree */
        T = new treeNode;
        if (T == NULL)
            cout << "Out of space!!!";
        else
        {
            T->element = x;
            T->left = T->right = NULL;
        }
    }
    else
    {
        if (x < T->element)
            T->left = insert(x, T->left);
        else
        {
            if (x > T->element)
                T->right = insert(x, T->right);
            /* else x is in the tree already. We'll do nothing */
        }
    }
    return T; /* Don't forget this line!! */
}

// Deletion Function
treeNode *Delete(int x, treeNode *T)
{
    treeNode *tmp_cell, *child;
    if (T == NULL)
        cout << "Element not found";
    else if (x < T->element) /* Go left */
        T->left = Delete(x, T->left);
    else if (x > T->element) /* Go right */
        T->right = Delete(x, T->right);
    else /* Found element to be deleted */
        if (T->left && T->right)
        { /* Two children : Replace with smallest in right subtree */
            tmp_cell = find_min(T->right);
            T->element = tmp_cell->element;
            T->right = Delete(T->element, T->right);
        }
        else
        { /* One child */
            tmp_cell = T;
            if (T->left == NULL) /* Right Child */
                child = T->right;
            if (T->right == NULL) /* Left Child */
                child = T->left;
            delete (tmp_cell);
            return child;
        }
    return T;
}
// InOrder Traversal Of Tree
void inOrder(treeNode *T)
{
    if (T == NULL)
        return;

    inOrder(T->left);
    cout << "\t" << T->element;
    inOrder(T->right);
}

// preorder traversal
void preorder(treeNode *T)
{
    if (T == NULL)
        return;
    cout << "\t" << T->element;
    preorder(T->left);
    preorder(T->right);
}

// postorder traversal
void postorder(treeNode *T)
{
    if (T == NULL)
        return;
    postorder(T->left);
    postorder(T->right);
    cout << "\t" << T->element;
}

int main()
{
    treeNode *TREE = NULL;

    // Adding some values to the tree
    TREE = insert(100, TREE);
    TREE = insert(45, TREE);
    TREE = insert(20, TREE);
    TREE = insert(30, TREE);
    TREE = insert(40, TREE);
    TREE = insert(70, TREE);
    TREE = insert(123, TREE);

    cout << endl
         << endl;
    cout << "In-order traversal :" << endl;
    inOrder(TREE);

    cout << endl
         << endl;
    cout << "Pre-order traversal :" << endl;
    preorder(TREE);

    cout << endl
         << endl;
    cout << "Post-order traversal :" << endl;
    postorder(TREE);

    cout << endl
         << endl;
    cout << "Deleting :" << 5 << endl;
    Delete(45, TREE);

    cout << endl
         << endl;
    cout << "Pre-order traversal :" << endl;
    preorder(TREE);
    treeNode *x;
    x = find_max(TREE);

    cout << endl
         << "Max element: " << x->element << endl;

    return 0;
}