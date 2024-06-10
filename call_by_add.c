#include <stdio.h>

void doWork(int a, int b, int *add, int *prod, int *avg);
int a; int b;

int main(){
    printf("Enter 1st Number: \t");
    scanf("%d",&a);
    printf("Enter 2nd Number: \t");
    scanf("%d",&b);
    int add, prod, avg;
    doWork(a, b, &add, &prod, &avg);
    printf("Sum : %d\t Product : %d\t Average: %d\n", add, prod, avg);
    return 0;
}

void doWork(int a, int b, int *add, int *prod, int *avg)
{
    *add = a + b;
    *prod = a * b;
    *avg = (a + b) / 2;
}