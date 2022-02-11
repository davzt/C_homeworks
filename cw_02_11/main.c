#include <stdio.h>

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
void task8();

int main() {
//    task1();
//    task2();
//    task3();
//    task4();
//    task5();
//    task6();
//    task7();
    task8();

    return 0;
}

void task1() {
    int n, sum, i, a;
    sum = 0;
    printf("Input the number of values:\n");
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &a);
        sum += a;
    }
    printf("sum of numbers: %d\n", sum);
}

void task2() {
    int n, min, i, a;
    printf("Input the number of values:\n");
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &a);
        if (i == 0 || min > a)
            min = a;
    }
    printf("minimum: %d\n", min);
}

void task3() {
    int n, sum, a;
    sum = 0;
    n = 0;
    puts("Enter the integers" );
    puts("Enter the EOF character to end input." );
    while(scanf("%d", &a) && a != EOF) {
        ++n;
        sum += a;
    }
    printf("Number of values: %d\nSum of values: %d\n", n, sum);
}

void task4() {
    double k, a;
    int n = 0;
    puts("Enter the k");
    scanf("%lf", &k);
    puts("Enter the numbers" );
    puts("Enter the EOF character to end input." );
    while(scanf("%lf", &a) && a != EOF) {
        ++n;
        if (a > k) {
            printf("%d\n", n);
            break;
        }
    }
}

void task5() {
    double a, prev;
    int i = 0;
    puts("Enter the numbers" );
    puts("Enter the EOF character to end input." );
    while(scanf("%lf", &a) && a != EOF) {
        i++;
        if (prev > a && i != 1) {
            puts("this is a non-increasing sequence");
            return;
        }
        prev = a;
    }
    puts("this is an ascending sequence");
}

void task6() {
    double a, prev;
    int i = 0;
    int n = 0;
    puts("Enter the numbers" );
    puts("Enter the EOF character to end input." );
    while(scanf("%lf", &a) && a != EOF) {
        i++;
        if (prev > a && i !=1) {
            printf("index %d\n", i);
            n++;
        }
        prev = a;
    }
    printf("Number of values: %d\n", n);
}

void task7() {
    double a, min;
    int i = 0;
    int j = 0;
    puts("Enter the numbers" );
    puts("Enter the EOF character to end input." );
    while(scanf("%lf", &a) && a != EOF) {
        i++;
        if (min > a || i ==1) {
            min = a;
            j = i - 1;
        }
    }
    printf("Number of values: %d\n", j);
}

