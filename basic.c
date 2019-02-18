#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    float d;

    printf("\t\t\tCalculator\n\n");
    printf("Enter 1st Number : ");
    scanf("%d",&a);
    printf("\nEnter 2nd Number : ");
    scanf("%d",&b);
    printf("\nChoose Operation\n");
    printf("1.Addition\n\n2.Substraction\n\n3.Multiplication\n\n4.Division\n");
    printf("\nEnter Choice :");
    scanf("%d",&c);
    switch(c)
    {
    case 1 :
        d=a+b;
        break;
    case 2 :
        d=a-b;
        break;
    case 3 :
        d=a*b;
        break;
    case 4 :
        d=a/b;
        break;
    default :
        printf("!!!! Wrong Choice !!!!");
        void abort();
        break;
    }
    printf("The result is %f",d);
    return 0;
}
