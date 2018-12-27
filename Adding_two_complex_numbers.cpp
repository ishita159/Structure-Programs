#include <bits/stdc++.h>
using namespace std;
typedef struct complexx
{
    float real;
    float imag;
} complex;
complexx add(complexx n1, complexx n2);

int main()
{
    complexx n1, n2, temp;

    printf("For 1st complex number \n");
    printf("Enter real and imaginary part respectively:\n");
    scanf("%f %f", &n1.real, &n1.imag);

    printf("\nFor 2nd complex number \n");
    printf("Enter real and imaginary part respectively:\n");
    scanf("%f %f", &n2.real, &n2.imag);

    temp = add(n1, n2);
    printf("Sum = %.1f + %.1fi", temp.real, temp.imag);

    return 0;
}

complexx add(complexx n1, complexx n2)
{
    complexx temp;

    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;

    return (temp);
}