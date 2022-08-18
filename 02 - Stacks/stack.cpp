#include <iostream>
#include <stack> // In order to use stack we have to include the stack header.
using namespace std;

// Top Function. First we will write a function to print out the elements of the stack.
void printStackElements(stack<int> stack)
{
    while (!stack.empty())
    {
        cout << stack.top() << endl;
        stack.pop();
    }
}

int main()
{
    // Five important functions in stacks are; Empty, Size, Top, Push and Pop.
    // empty, size, push, pop, top.

    stack<int> numStack;

    // Push Function. In order to add elements in out stacks, we use push.
    numStack.push(1);
    numStack.push(2);
    numStack.push(3);
    numStack.push(4);

    // Pop Function. In order to remove elements in out stacks, we use pop.
    numStack.pop();
    numStack.pop();

    printStackElements(numStack);

    // Empty Function. In order to check if the stack is empty or not, we use empty.
    if (numStack.empty())
    {
        cout << "Stack is empty!" << endl;
    }
    else
    {
        cout << "Stack is not Empty!" << endl;
    }

    // Size Function. In order to get the size of the stack, we use size.
    cout << "Stack size is: " << numStack.size() << endl;

    return 0;
}