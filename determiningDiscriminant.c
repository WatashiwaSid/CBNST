#include<stdio.h>
#include<math.h>

void getRealRoots(float coff_a, float coff_b, float coff_c)
{
    float discriminant, rootOne, rootTwo;
    discriminant = (coff_b*coff_b) - (4*coff_a*coff_c);

    //positive discriminant
    if(discriminant>0)
    {
        rootOne = (-coff_b + sqrt(discriminant)) / (2*coff_a);
        rootTwo = (-coff_b - sqrt(discriminant)) / (2*coff_a);
        printf("\nDiscriminant: %.2f", discriminant);
        printf("\nReal Roots Possible: Yes");        
        printf("\nDifferent Roots: Yes");        
        printf("\nRoot One: %.2f", rootOne);
        printf("\nRoot Two: %.2f", rootTwo);
    }
    //discriminant zero
    else if(discriminant==0)
    {
        rootOne = (-coff_b) / (2*coff_a);
        printf("\nDiscriminant: %.2f", discriminant);
        printf("\nReal Roots Possible: Yes");        
        printf("\nDifferent Roots: No");        
        printf("\nCommon Root: %.2f", rootOne);
    }
    //negative discriminat
    else{
        printf("\nDiscriminant: %.2f", discriminant);
        printf("\nReal Roots Possible: No");
    }
    
}

void main()
{
    float a,b,c;
    printf("Enter cofficient a : ");
    scanf("%f", &a);
    printf("Enter cofficient b : ");
    scanf("%f", &b);
    printf("Enter cofficient c : ");
    scanf("%f", &c);
    getRealRoots(a,b,c);
}