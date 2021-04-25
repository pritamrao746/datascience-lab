#include <stdio.h>
#include <math.h>
#include<stdlib.h>

// exponential function  e^x Eg e^1 = 2.78...
double eTOpowerx(double x)
{
    double ans = exp(x);
    return ans;
}

// (a^x) Eg:  3^4 = 81
double aTOpowerx(double a, int x)
{
    
    double res = 1;
    while (x > 0)
    {
        if (x & 1)
        {
            res = (res * a);
            x--;
        }

        a = a * a;
        x = x >> 1;
    }
    return res;
}

/* 
    Exponential Growth 

    f(x)=a(1+r)^{x}
    f(x)	=	exponential growth function
    a	=	initial amount
    r	=	growth rate
    {x}	=	number of time intervals

*/
double exponentialGrowth(int a, int r, int x)
{
    // r is in percentage
    double b = r / 100.0;
    return a * aTOpowerx((1 + b), x);
}

/*

In mathematics, exponential decay describes the process of reducing an 
amount by a consistent percentage rate over a period of time.

y=a(1-r)^x

y is the final amount,
a is the original amount,
r is the decay factor, 
x is the amount of time that has passed.

*/
double exponentialDecay(int a, int r, int x)
{
    double b = r / 100.0;
    return a * aTOpowerx((1 - b), x);
}


// (x^n % mod)   Eg 5^3%10 = 5
long long exponentiationModulo(int x, int n, int mod)
{
    long long res = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            res = (res * x) % mod;
            n--;
        }

        x = (x * x) % mod;
        n = n >> 1;
    }

    return res;
}


/*
sinh x  = e^x - e^-x /2


*/
double sinhx(double x)
{
    double ans;
    double etox = eTOpowerx(x);
    ans = (etox - 1 / etox) / 2;
    return ans;
}

/*
cosh x  = e^x + e^-x /2

*/
double coshx(double x)
{
    double ans;
    double etox = eTOpowerx(x);
    ans = (etox + 1 / etox) / 2;
    return ans;
}

/*
tanhx = e^x - e^-x / e^x + e^-x
tanhx = sinhx / coshx
*/
double tanhx(double x)
{
    double sinHx = sinhx(x);
    double cosHx = coshx(x);

    return sinHx / cosHx;
}

/*
cothx = e^x + e^-x / e^x - e^-x
cothx = coshx/sinhx
*/
double cothx(double x)
{
    return 1 / tanhx(x);
}

/*
cosechx = 2/e^x-e^-x
cosechx = 1/sinhx
*/
double cosechx(double x)
{
    return 1 / sinhx(x);
}