#include"MyHeader.h"

//Accepts number and displays it binary equivalent format.
void DisplayBinary(UINT iNo)
{
    while(iNo!=0)
    {
        printf("%d",(iNo%2));
        iNo=iNo/2;
    }
}

//Accepts number and displays its binary equivalent format by using bitwise operators.
void DisplayBinaryX(UINT iNo)
{
    UINT iMask = 0x80000000;
    
    printf("%u\n",iMask);
    
    while(iMask > 0)
    {
        if(((iNo) & (iMask))!=0)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }

        iMask=iMask>>1;
    }
}

//Accept number and check wether its 4th bit from binary representation is ON or OFF.
BOOL ChkBit(UINT iNo)
{
    UINT iMask=0x00000008;
    if((iNo & iMask)==0)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

//Accept number and check wether its 4th and 7th bit from binary representation is ON or OFF.
BOOL ChkBitX(UINT iNo)
{
    UINT iMask=0x00000048;
    if((iNo & iMask)==iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

//Accepts number and returns the count of ON bits from it equivalent binary code.
int BitCount(UINT iNo)
{
    UINT iMask = 0x80000000;
    int iCnt=0;       
    while(iMask > 0)
    {
        if(((iNo) & (iMask))!=0)
        {
            printf("1");
            iCnt++;
        }
        else
        {
            printf("0");
        }

        iMask=iMask>>1;
    }
    return iCnt;    
}