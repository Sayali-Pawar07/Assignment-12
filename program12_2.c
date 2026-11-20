#include<stdio.h>



int CheckZero(int iNo)
{
    int iDigit = 0;
     
    while(iNo!= 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return 1;
        }
        iNo = iNo / 10;
    
    }
    return 0;
}


int main()
{
    int iValue = 0, bRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

     if(bRet == 1)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;
}