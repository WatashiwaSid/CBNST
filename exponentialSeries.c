#include<stdio.h>

//function returns mantissa power rased to exponent
int powerOf(int mantissa, int exponent)
{
    int base = mantissa;
    if(exponent==0)
        return 1;
    else
    {
        for(int count=1; count<exponent; count++)
        {
            mantissa = mantissa*base;
        }
        return mantissa;
    }
}

//function returns factorial
int factorialRecursive(int num)
{
    if(num==0)
        return 1;
    while(num>0)
        return num * factorialRecursive(num-1);
}

void main()
{
    int n,x;
    float sum=0;
    printf("Enter number of terms for exponential series: ");
    scanf("%d", &n);
    printf("Enter value of x: ");
    scanf("%d", &x);
    for(int i=0; i<n; i++)
    {
        sum += (float)powerOf(x,i) / factorialRecursive(i);
    }
    printf("\nSum of exponential series: %.2f", sum);
}