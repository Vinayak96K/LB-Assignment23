#include"MyHeader.h"

int main(int argc, char const *argv[])
{

    int iValue=0;
    BOOL bRet=FALSE;
    
    printf("Enter a positive integer number:");
    scanf("%d",&iValue);
    if(iValue<0)
    {
        iValue=-iValue;
    }
    printf("%d\n",iValue);

    printf("Question 1:\n");
    DisplayBinary(iValue);
    printf("\n");

    printf("Question 2:\n");
    DisplayBinaryX(iValue);
    printf("\n");

    printf("Question 3:\n");
    bRet=ChkBit(iValue);
    if(bRet)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    printf("Question 4:\n");
    bRet=ChkBitX(iValue);
    if(bRet)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    printf("\nQuestion 5:\n");
    printf("\nNumber of ON bits are:%d\n",BitCount(iValue));
    return 0;
}
