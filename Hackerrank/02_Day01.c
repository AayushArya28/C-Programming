#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    int no;double num;char str[50]; 
    
    // Read and save an integer, double, and String to your variables.
    scanf("%d",&no);
    scanf("%lf",&num);
    fgets(str, 50, stdin);
    
    // Print the sum of both integer variables on a new line.
    printf("%d", (i+no));
    
    // Print the sum of the double variables on a new line.
    printf("%lf", (num+d));
    
    // Concatenate and print the String variables on a new line
    strcat(s, str);
    
    // The 's' variable above should be printed first.
    printf("%s", s);
    
    return 0;
}