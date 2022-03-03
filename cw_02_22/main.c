#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2);
int gcd(int a, int b);
int reverse(int a);
void isPrime(int a);
double least(double a, double b, double c);
int factorial(int n);
int countSpaces(char *string);


int main() {
    printf("Distance between points (5, 5) and (3, 2) - %lf\n", distance(5, 5, 1, 2));
    printf("GCD of 18 and 30 is %d\n", gcd(30, 18));
    printf("Reversed 23022022 - %d\n", reverse(23022022));
    isPrime(11);
    printf("The least number is %lf\n", least(3.43312, 14.2313231, 3.4333333));
    printf("Factorial of 6: %d\n", factorial(6));
    printf("'Sp ac es' contains %d spaces\n", countSpaces("Sp ac es"));
    return 0;
}

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
}

int gcd(int a, int b) {
    int gcd;
    while (a != 0 && b != 0) {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    gcd = a + b;
    return gcd;
}

int reverse(int a) {
    int rev = 0;
    while (a != 0) {
        rev *= 10;
        rev += a % 10;
        a /= 10;
    }
    return rev;
}

void isPrime(int a) {
    int i;
    for (i = 2; i < ceil(sqrt(a)); i++)
        if (a % i == 0) {
            printf("%d is not a prime number\n", a);
            return;
        }
    printf("%d is a prime number\n", a);
}

double least(double a, double b, double c) {
    if (a < b) {
        if (a < c)
            return a;
        else
            return c;
    }
    if (b < c)
        return b;
    return c;
}

int factorial(int n) {
    if (n == 1) {
        printf("%d\n", n);
        return n;
    }
    printf("%d*", n);
    return factorial(n-1) * n;
}

int countSpaces(char *string) {
    int n = 0;
    while (*string != '\0') {
        if (*string == ' ')
            n++;
        string++;
    }
    return n;
}