#include <iostream>
using namespace std;

int N = 4;              // GIVING INITIAL SIZE TO DYNAMIC ARRAY.
int c = 4;              // INCREMENTING THE SIZE.
int *list = new int[N]; // DYNAMIC ARRAY OF SIZE N = 4.
int index = 0;          // INDEX FOR THE LAST ELEMENT IN THE LIST.

void printList();
void addElementAtEnd(int NewElement);
void addElementAtStart(int NewElement);
void addElementAtIndexJ(int NewElement, int j);
void deleteElementFromEnd();
void deleteElementFromStart();
void deleteElementFromIndexJ(int j);
int search(int SearchElement);
void addElementAfterValue(int NewElement, int AfterValue);
void increaseArraySize();

int main()
{
    char charChoice = 'y';
    int intChoice;
    int NewElement;
    {
        cout << "\nWhat do you want? Enter you choice." << endl;
        cout << "TO ADD VALUE AT THE END OF THE LIST: PRESS 1" << endl;
        cout << "TO DELETE VALUE AT THE MIDDLE OF THE LIST: PRESS 6" << endl;
        cout << "TO ADD VALUE AT THE START THE LIST: PRESS 2" << endl;
        cout << "TO ADD VALUE AT THE MIDDLE OF THE LIST: PRESS 3" << endl;
        cout << "TO DELETE VALUE AT THE END OF THE LIST: PRESS 4" << endl;
        cout << "TO DELETE VALUE AT THE START OF THE LIST: PRESS 5" << endl;
        cout << "\n\nSELECT YOUR CHOICE: ";
        cin >> intChoice;

        if (intChoice == 1 || intChoice == 2 || intChoice == 3)
        {
            cout << "\nENTER THE VALUE TO ADD: ";
            cin >> NewElement;
        }
        switch (intChoice)
        {
        case 1:
        {
            addElementAtEnd(NewElement);
            break;
        }
        case 2:
        {
            addElementAtStart(NewElement);
            break;
        }
        case 3:
        {
            int j;
            cout << "ENTER INDEX FOR THE VALUE TO BE ADDED IN THE RANGE (0 - " << index - 1 << ") : ";
            cin >> j;
            addElementAtIndexJ(NewElement, j);
            break;
        }
        case 4:
        {
            deleteElementFromEnd();
            break;
        }
        case 5:
        {
            deleteElementFromStart();
            break;
        }
        case 6:
        {
            int j;
            cout << "ENTER INDEX FOR THE VALUE TO BE ADDED IN THE RANGE (0 - " << index - 1 << ") : ";
            cin >> j;
            deleteElementFromIndexJ(j);
            break;
        }
        }
        printList();
        cout << "DO YOU WANT TO CONTINUE? (Y/N) : ";
        cin >> charChoice;
    }
    while (charChoice == 'Y' || charChoice == 'y')
        ;

    system("PAUSE");
    return 0;
} // END OF THE MAIN BODY

void printList()
{
    cout << "\n\nELEMENTS OF THE LISTS: ";
    for (int i = 0; i < index; i++)
        cout << "\t" << list[i];
    cout << "\n\n";
}
void addElementAtEnd(int NewElement)
{
    if (index == N)
    {
        cout << "\nDYNAMIC ARRAY IS FULL" << endl;
        increaseArraySize();
    }
    list[index] = NewElement;
    index++;
    cout << "\nADDED " << NewElement << " AT THE END OF THE LIST" << endl;
}
void addElementAtStart(int NewElement)
{
    if (index == N)
    {
        cout << "\nDYNAMIC ARRAY IS FULL" << endl;
        increaseArraySize();
    }
    for (int i = index; i > 0; i--)
        list[i] = list[i - 1];
    list[0] = NewElement;
    index++;
    cout << "\nADDED " << NewElement << " AT THE END OF THE LIST" << endl;
}
void addElementAtIndexJ(int NewElement, int j)
{                                                          // TWO PARAMETERS FUNCTION
    cout << " addElementAtIndexJ(int NewElement, int j) "; // USER MESSAGE
    if (index == N)
    { // CONDITION TO CHECK IF THE ARRAY IS FULL
        cout << "the dynamic array is full" << endl;
        increaseArraySize(); // INCREMENTING THE ARRAY SIZE
    }
    for (int i = index; i > j; i--) // LOOP FOR SHIFTING RIGHT ARRAY
    {
        list[i] = list[i - 1]; // SHIFTING OCCURS OVER HERE
        list[j] = NewElement;  // AT REQUIRED PLACE ELEMENT IS ADDED.
    }
    index++; // INCREMENTING THE ARRAY SIZE
}
void deleteElementFromEnd()
{
    cout << "\nDELETING " << list[index] << " FROM THE END OF THE LIST" << endl;
    index--;
}
void deleteElementFromStart()
{
    cout << "\nDELETING " << list[0] << " FROM THE END OF THE LIST" << endl;
    for (int i = 0; i < index - 1; i++)
        list[i] = list[i + 1];
    index--;
}
void deleteElementFromIndexJ(int j)
{
    cout << "DELETING " << list[j] << " FROM INDEX " << j << " OF THE END OF THE LIST" << endl;
    for (int i = j; i < index - 1; i++)
        list[i] = list[i + 1];
    index--;
}
void increaseArraySize()
{
    N = N + c;              // iINCREMENTING THE SIZE OF DYNAMIC ARRAY
    int *temp = new int[N]; // ALLOCATING MEMORY FOR NEW LARGE DYNAMIC ARRAY.

    // COPYING OF DATA FROM OLD ARRAY TO THE NEW ARRAY
    for (int i = 0; i < N - c; i++)
    {
        temp[i] = list[i];
    }
    delete[] list; // DELETING THE OLD ARRAY MEMORY.
    list = temp;   // RENAMING THE NEW ARRAY
    cout << "\nINCREASED DYNAMIC ARRAY SIZE FROM " << (N - c) << " TO " << N << endl;
}

// CODE FOR IMPLEMENTING LISTS USING DYNAMIC ARRAYS.