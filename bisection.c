#include<stdio.h>
#include<math.h>
#define f(x)  cos(x) - x*exp(x)

int main()
{
  float x0,x1,x2, y0,y1,y2, e;
  printf("Enter the tolerance value: ");
  scanf("%f",&e);

 //find range of the function
    x0 = -1;
    y0 = f(x0);
    while (1)
    {
        x1 = x0 + 1.0;
        y1 = f(x1);
        if (y0 * y1 <= 0.0)
            break;
        x0 = x1; y0 = y1;
    }
    
    printf("Roots of the defined equation lies between : %.1f and %.1f\n\n", x0,x1);
    printf("ai\t\tbi\t\txi\t\tf(xi)\n\n");
      while((fabs(x1-x0)/x1) > e)
      {
          x2 = (x0 + x1)/2.0;
          y2 = f(x2);
          printf("%f\t%f\t%f\t%f\n", x0, x1, x2, y2);

          if (y0*y2 > 0.0)
              x0 = x2;
          else
              x1 = x2;
      }
      printf("\nApproximate Root of the given equation is = %f", x2);
}
