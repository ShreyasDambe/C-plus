#include <stdio.h>
#include <stdlib.h>


Addition(int inum1,int inum2)
{
    int iAns=0;

    iAns=inum1 + inum2;

    return iAns;
}
int main()
{
    int ivalue1=0;
    int ivalue2=0;

    int iResult=0;

    printf("Enter A First Number :");
    scanf("%d",&ivalue1);

    printf("Enter A Second Number :");
    scanf("%d",&ivalue2);

    iResult=Addition(ivalue1,ivalue2);

    printf("Addition of %d And %d is :%d",ivalue1,ivalue2,iResult);

    return 0;
}
