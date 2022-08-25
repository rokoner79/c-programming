
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    int reminder=a%2;
    if(reminder==0)
    {
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }

}
