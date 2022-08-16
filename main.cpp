// Author: Fransiskus Agapa
// 8/16/22
// Practices make improvement - Have Fun !

// ==============================
// user input number and the program returns two number that if added would result in the number that user input
// ==============================

#include <iostream>
#include "string"
#include "SumNum.h"
#include "FindNumPos.h"

using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int randNumber[] = {-5, -4, -3,-2,-1,0, 1,2,3,4,5,};
    string choice;

    cout << "\n== Numbers in Array ==" << endl;
    cout << "1. Display number" << endl;
    cout << "2. Find a number" << endl;
    cout << "3. Two numbers if added result to N(User Input)" << endl;
    cout << "e. Exit" << endl;
    cout << "choice: ";
    cin >> choice;

    while(choice != "e" and choice != "E")
    {
        int sizeArr = sizeof (randNumber)/sizeof (randNumber[0]);                // size of array
        int index = 0;
        if(choice == "1")
        {
            cout << "\n= Display Number in array =" << endl;
            cout << "[ ";
            while(index != sizeArr)
            {
              cout << randNumber[index] << ' ';
              index++;
            }
            cout << " ]" << endl;
        }

        else if(choice == "2")
        {
            int userNum;
            int numIndex;
            int sizeArr = sizeof (randNumber)/sizeof (randNumber[0]);
            cout << "\n= Find a number " << endl;
            cout << "Input a number to find: ";
            cin >> userNum;
            numIndex = find(randNumber, sizeArr,userNum);
            if(numIndex == 404)                                         // indicate failed to find userNum
            {
                cout << "\n[ " << userNum << " cannot be found in the array ]" << endl;
            }
            else
            {
                cout << "\n[ " << userNum << " is found at index " << numIndex + 1 << " ]" << endl;     // plus one because look from user stand point that might do not know index starts from zero
            }
        }

        else if(choice == "3")
        {
            int sizeArr = sizeof (randNumber)/sizeof (randNumber[0]);
            int userNum;
            cout << "\n= Two numbers if added result to N(User Input)" << endl;
            cout << "Input a number: ";
            cin >> userNum;
            findSumOf(randNumber, sizeArr, userNum);
        }

        else
        {
            cout << "\n[ Invalid choice ]" << endl;
        }

        cout << "\n== Numbers in Array ==" << endl;
        cout << "1. Display number" << endl;
        cout << "2. Find a number" << endl;
        cout << "3. Two numbers if added result to N(User Input)" << endl;
        cout << "e. Exit" << endl;
        cout << "choice: ";
        cin >> choice;
    }

    if(choice == "e" or choice == "E")
    {
        cout << "\n== Exit Program ==" << endl;
    }
//    cout << "\nInput a result number: ";
//    cin >> userNum;
//
//    findNumber(randNumber, sizeArr,userNum);

    return 0;
}
