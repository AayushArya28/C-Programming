#include<stdio.h>

int n,sum=0,i;
int sum2n(int n);

int main(){
    //Input Part
    printf("Enter no. : ");
    scanf("%d",&n);
    //Output Part
    printf("Sum to %d is : %3d",n,sum2n(n));
    return 0;
}
//Memory Calculation Part
int sum2n(int n) {
    if (n==1)
    {
        return 1;
    }
    i = sum2n(n-1);
    sum = i+n;
    return sum;
}