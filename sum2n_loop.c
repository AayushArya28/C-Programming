#include<stdio.h>

int n,sum=0,i=0;

int main(){
    printf("Enter no. : ");
    scanf("%d",&n);
    
    while (i <= n)
    {
        sum+=i;
        i++;
    }

    printf("Sum to %d is : %3d",n,sum);
    return 0;
}