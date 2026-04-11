
#include <stdio.h>

int main() {
     int a;
printf("enetr the value;\n");
scanf("%d",&a);
int rev=0;
while (a!=0)
{
    int dig=a%10;
    rev=rev*10+dig;
    a=a%10;
}
printf("the reverse values is %d \n:rev");
}