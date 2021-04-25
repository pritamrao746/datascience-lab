// Pritam Rao
// 2018130044 , 48
// SPCC
// Exp 3 - To create user defined library in open source environment and use it for particular functions

#include<stdio.h>
#include<stdlib.h>
#include "sample.h"

int main(void)
{
    printf("DO YOU WANT TO CONTINUE , PRESS 1 ELSE 0\n");
    int iterate;
    scanf("%d",&iterate);

    while (iterate)
    {
        // declaring the function parameters
        double a,x;
        int l,m,n;
        // Switch case
        printf("FOLLOWING ARE YOUR CHOICES\n");
        printf("1 e^x \n");
        printf("2 a^x\n");
        printf("3 Exponential Growth\n");
        printf("4 Exponential Decay\n");
        printf("5 x^n modulo mod\n");
        printf("6 sinhx\n");
        printf("7 coshx\n");
        printf("8 tanhx\n");
        printf("9 cothx\n");
        printf("10 cosechx\n");
        printf("0 for exiting\n");
        printf("ENTER YOUR CHOICE\n");

        int choice;
        scanf("%d", &choice);
        switch (choice)
        {

        case 1:
            printf("Enter the value of x\n");
            scanf("%lf", &x);
            printf("\n\n***************************************************\n");
            printf("e^%lf = %lf\n\n",x,eTOpowerx(x));
            break;

        case 2:
            printf("Enter the value of a and x\n");
            scanf("%lf%d",&a,&l);
            printf("\n\n***************************************************\n");
            printf("%lf ^ %d = %lf\n\n",a,l,aTOpowerx(a,l));
            break;

        case 3:
            printf("Enter the value of initial amount, growth and number of intervals \n");
            scanf("%d%d%d",&l,&m,&n);
            printf("\n\n***************************************************\n");
            printf("The exponential growth is : %lf\n\n", exponentialGrowth(l,m,n));
            break;

        case 4:
            printf("Enter the value of initial amount, growth and number of intervals \n");
            scanf("%d%d%d",&l,&m,&n);
            printf("\n\n***************************************************\n");
            printf("The exponential decay is : %lf\n\n", exponentialDecay(l,m,n));
            break;

        case 5:
            printf("Enter the value of x,n,mod\n");
            scanf("%d%d%d", &l,&m,&n);
            printf("\n\n***************************************************\n");
            printf("The (%d^%d)modulo%d : %lld\n\n",l,m,n,exponentiationModulo(l,m,n));
            printf("\n");
            break;

        case 6:
            printf("Enter the value of x\n");
            scanf("%lf", &x);
            printf("\n\n***************************************************\n");
            printf("sinh %lf = %lf\n\n",x,sinhx(x));
            break;
        case 7:
            printf("Enter the value of x\n");
            scanf("%lf", &x);
            printf("\n\n***************************************************\n");
            printf("cosh %lf = %lf\n\n",x, coshx(x));
            break;

        case 8:
            printf("Enter the value of x\n");
            scanf("%lf", &x);
            printf("\n\n***************************************************\n");
            printf("tanh %lf = %lf\n\n",x, tanhx(x));
            break;

        case 9:
            printf("Enter the value of x\n");
            scanf("%lf", &x);
            printf("\n\n***************************************************\n");
            printf("coth %lf = %lf\n\n",x, cothx(x));
            break;

        case 10:
            printf("Enter the value of x\n");
            scanf("%lf", &x);
            printf("\n\n***************************************************\n");
            printf("cosechx %lf = %lf\n\n",x, cosechx(x));
            break;

        default:
            printf("EXITING......\n");
            exit(0);
        }
    }
}