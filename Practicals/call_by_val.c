#include <stdio.h>

int add(int a, int b);
int avg(int a, int b);
int prod(int a, int b);
int a; int b; int c;

int main(){
    printf("Enter 1st Number: \t");
    scanf("%d",&a);
    printf("Enter 2nd Number: \t");
    scanf("%d",&b);
    printf("Sum : %d\t Product : %d\t Average: %d\n", add(a,b), prod(a,b), avg(a,b));
    return 0;
}

int add(int a, int b){
    c = a + b;
}

int prod(int a, int b){
    c = a * b;
}

int avg(int a, int b){
    c = (a + b)/2;
}