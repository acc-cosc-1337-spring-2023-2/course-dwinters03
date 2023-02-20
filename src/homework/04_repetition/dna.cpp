//add include statements
#include <iostream>
#include "dna.h"

//add function(s) code here

int factorial(int num)
{
    int sum = 1;

    /*while (num > 0)
    {
        sum = sum + (num*num);
        num = num - 1;
    }*/

    for (int i = num; i >= 1; i--)
    {
        sum *= i;
    }

    return sum;
}

int gcd(int num1, int num2)
{
    while (num1 != num2)
    {
        if (num1 < num2)
        {
            int holdingnum;
            holdingnum = num2;
            num2 = num1;
            num1 = holdingnum;
        }

        if (num1 > num2)
        {
            num1 = num1 - num2;
        }
    }

    return num1;
}
