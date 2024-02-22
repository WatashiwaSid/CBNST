#include<stdio.h>

int factorialRecursive(int num)
{
    //return 1 for factorial(0)
    if(num==0)
        return 1;
    
    //make recurive call for factorial(n)  {n>0}
    while(num>0)
        return num * factorialRecursive(num-1);
}

void main()
{
    int num;
    printf("Enter number to get factorial : ");
    scanf("%d", &num);
    printf("Factorial of %d: %d", num, factorialRecursive(num));
}