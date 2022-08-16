//
// Created by Fransiskus Agapa on 8/16/2022.
//

#ifndef SUMTWODIGITSEQUALN_SUMNUM_H
#define SUMTWODIGITSEQUALN_SUMNUM_H

#include <iostream>

using std::cout;
using std::endl;

void findSumOf(const int arrNum[], const int& sizeArr , const int& numToFind)
{
    int firstNum = 0;
    int secondNum = 0;
    int possibleMath[sizeArr + 1];                     // put all possible numbers if added would result in
    for(size_t i = 0; i < sizeArr; ++i)
    {
        for(size_t j = 0; j < sizeArr; ++j)
        {
            if((arrNum[i] + arrNum[j]) == numToFind)
            {
                firstNum = arrNum[i];
                secondNum = arrNum[j];
            }
        }
    }

    if(firstNum == 0 and secondNum == 0)
    {
        cout << "\n[ Number cannot be found / not listed in array / to big ]" << endl;
    }
    else
    {
        cout << '\n' << numToFind << " is addition result of " << firstNum << " and " << secondNum << endl;
    }
}


#endif //SUMTWODIGITSEQUALN_SUMNUM_H
