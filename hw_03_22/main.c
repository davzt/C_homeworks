#include <stdio.h>

void countSpaces(char *s);
void printLines(char *s);
void histogram(char *s);
void output80(char *s);
void reverse(char* s);

int main() {
    int i = 0, j = 0;

    puts("\nEnter the number of command\n\n  1. Count Spaces\n  2. Print lines\n  3. Histogram\n  "
         "4. Output 80\n  5. Reverse\n  6. Exit");
    if (scanf("%d", &i) != 1) {
        puts("You entered an invalid value");
        return 0;
    } else {
        char s[255], ch;
        puts("Input string:");
        while ((ch = getchar()) != EOF) {
            s[j] = ch;
            j++;
        }
        s[j] = '\0';
        switch (i) {
            case 1:
                countSpaces(s);
                break;

            case 2:
                printLines(s);
                break;

            case 3:
                histogram(s);
                break;

            case 4:
                output80(s);
                break;

            case 5:
                reverse(s);
                break;

            case 6:
                break;

            default:
                puts("You entered an invalid value");
        }
    }

    return 0;
}

void countSpaces(char *s) {
    int sp = 0, n = 1, t =0;
    while (*s != '\0') {
        if (*s == ' ')
            sp++;
        if (*s == '\n')
            n++;
        if (*s == '\t')
            t++;
        s++;
    }
    printf("String contains %d signs of spaces, %d signs of tabulation, %d lines\n", sp, t, n);
}

void printLines(char *str) {
    while (*str != '\0')
    {
        if (*str != ' ')
        {
            printf("%c", *str);
            str++;
        } else
        {
            puts("");
            str++;
        }
    }
    puts("");
}

void histogram(char *s) {
    int length = 0, i;
    while (*s != '\0')
    {
        if (*s != ' ' && *s != '\n' && *s != '\t')
        {
            printf("%c", *s);
            length++;
            s++;
        } else {
            for (i=0; i < length; i++) {
                printf("-");
            }
            s++;
            length = 0;
            puts("");
        }
    }
}

void output80(char *s) {
    char temp[255];
    int  i, j = 0, length = 0;
    while (*s != '\0') {
        if (*s != '\n')
        {
            temp[j] = *s;
            length++;
            s++;
            j++;
        } else {
            if (length > 80) {
                for (i=0; i < length; i++) {
                    printf("%c", temp[i]);
                }
                puts("");
            }
            j = 0;
            length = 0;
            s++;

        }
    }
}

void reverse(char *s) {
    char temp[255];
    int  i, j = 0;
    while (*s != '\0') {
        if (*s != '\n')
        {
            temp[j] = *s;
            s++;
            j++;
        } else {
            for (i=j - 1; i >=0; i--) {
                printf("%c", temp[i]);
            }
            puts("");
            j = 0;
            s++;
        }
    }
}