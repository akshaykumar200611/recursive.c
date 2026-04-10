ram online
#include <stdio.h>
int add (int m,int n)
{
    int sum=m+n;
    return sum;
}
void main()
{
    int a,b;
    printf("enter the a,b values \n");
    scanf("%d%d",&a,&b);
    int res =add(a,b);
    printf("the resukt is %d \n",res);
}
