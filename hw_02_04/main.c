#include <stdio.h>

void task1();

void task2();

void task3();

void task4();

void task5();

int main() {
    task1();
    task2();
    task3();
    task4();
    task5();
    return 0;
}

void task1() {
    int a, b, c, d, e;
    double mean;
    printf("Input 5 numbers:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    mean = (a+b+c+d+e)/5.;
    printf("The mean of these numbers %f\n", mean);
}

void task2() {
    int a;
    printf("Input any integer:\n");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("%d is an even number\n", a);
    else
        printf("%d is an odd number\n", a);
}

void task3() {
    int days, years;
    printf("Input your age:\n");
    scanf("%d", &years);
    days = years * 365;
    printf("%d years, %d days\n", years, days);
}

void task4() {
    int toes = 10;
    int doubleToes = toes * 2;
    int sqrToes = toes * toes;
    printf("Toes %d\nDouble toes %d\nSquare toes %d\n", toes, doubleToes, sqrToes);
}

void task5() {
    double cm, inches;
    printf("Input your height in inches:\n");
    scanf("%lf", &inches);
    cm = inches * 2.54;
    printf("Your height in cm %lf", cm);
}