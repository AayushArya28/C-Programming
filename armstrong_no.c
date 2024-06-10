#include<stdio.h>

int num, o_num, l, sum=0;
int main() {
    printf("Enter the No. to check if it is Armstrong Number:\t");
    scanf("%d", &num);
    o_num=num;
    while (num!=0)
    {
        l=num%10;
        sum=sum+(l*l*l);
        num/=10;
    }
    
    if (o_num==sum)
    {
        printf("%d is an Armstrong number", o_num);
    }
    else {
        printf("%d is not an Armstrong number", o_num);
    }
}