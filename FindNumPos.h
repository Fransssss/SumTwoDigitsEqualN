//
// Created by XaveF on 8/16/2022.
//

#ifndef SUMTWODIGITSEQUALN_FINDNUMPOS_H
#define SUMTWODIGITSEQUALN_FINDNUMPOS_H


int find(const int numArr[], const int& sizeArr,const int& numToFind)
{
    int numIndex = 404;                      // default value
    for(size_t i = 0; i < sizeArr; ++i)
    {
        if(numArr[i] == numToFind)
        {
            numIndex = i;
        }
    }
    return numIndex;
}


#endif //SUMTWODIGITSEQUALN_FINDNUMPOS_H
