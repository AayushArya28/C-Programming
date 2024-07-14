#include <stdio.h>

int n;
int fib(int n);

int main()
{
    printf("Enter the term u want to see :\t");
    scanf("%d", &n);
    printf("The term is : %d", fib(n - 1));
}

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        int seq = fib(n - 1) + fib(n - 2);
        return seq;
    }
}
