#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct node {
    int value;
    struct node *next;
} node;


void push(int value);
void insert(int value);
int pop();
void print();
void delete();
int contains(int value);

node *head = NULL;
node *tail = NULL;

int main() {
    int i = 0;
    while (i != 7) {
        puts("\nEnter the number of command\n\n  1. Insert\n  2. Push\n  3. Pop\n  4. Print the list\n  "
             "5. Delete the list\n  6. Check if element exists in list\n  7. Exit");
        int k;
        if (scanf("%d", &i) != 1) {
            puts("You entered an invalid value");
            return 0;
        } else {
            switch (i) {
                case 1:
                    puts("Enter the value to insert");
                    if (scanf("%d", &k) != 1) {
                        puts("You entered an invalid value");
                        return 0;
                    }
                    insert(k);
                    break;

                case 2:
                    puts("Enter the value to push");
                    if (scanf("%d", &k) != 1) {
                        puts("You entered an invalid value");
                        return 0;
                    }
                    push(k);
                    break;

                case 3:
                    printf("Poped value: %d\n", pop());
                    break;

                case 4:
                    puts("The list:");
                    print();
                    break;

                case 5:
                    delete();
                    puts("List deleted");
                    break;

                case 6:
                    puts("Enter the value to check");
                    if (scanf("%d", &k) != 1) {
                        puts("You entered an invalid value");
                        return 0;

                    }
                    if (contains(k) == 1)
                        puts("The element exists in the list");
                    else
                        puts("The element doesn't exist in the list");
                    break;

                case 7:
                    break;

                default:
                    puts("You entered an invalid value");
            }
        }
    }
    return 0;
}

void insert(int value) {
    node *link = (node*) malloc(sizeof(node));
    if (link == NULL)
        puts("Error: Overflow");
    else {
        link->value = value;
        link->next = head;
        if (head == NULL) {
            tail = link;
        }
        head = link;
        tail->next = head;
    }
}

void push(int value) {
    node *link = (node *) malloc(sizeof(node));
    if (link == NULL)
        puts("Error: Overflow");
    else {
        link->value = value;
        link->next = head;
        if (head == NULL) {
            tail = link;
            head = link;
            tail->next = head;
        }
        else {
            link->next = tail->next;
            tail->next = link;
            tail = link;
        }
    }
}

int pop() {
    if (head == NULL) {
        puts("Error: List is empty");
        return NULL;
    }
    node *link = tail;
    node *curr = head;
    if (curr == link)  {
        head = NULL;
        return curr->value;
    }
    while (curr->next != tail) {
        curr = curr->next;
    }
    curr->next = tail->next;
    tail = curr;
    return link->value;
}

void print() {
    if (head == NULL) {
        puts("Error: List is empty");
        return;
    }
    node *curr = head;
    while (curr->next != head) {
        printf("%d -> ", curr->value);
        curr = curr->next;
    }

    printf("%d -> ", curr->value);

}

void delete() {
    if (head == NULL) {
        puts("Error: List is empty");
        return;
    }
    node *curr = head;
    node *next;
    while (curr->next != tail) {
        next = curr->next;
        free(curr);
        curr = next;
    }
    free(tail);
    head = NULL;
    tail = NULL;
}

int contains(int value) {
    if (head == NULL) {
        return 0;
    }
    node *curr = head;
    while (curr->next != head) {
        if (curr->value == value)
            return 1;
        curr = curr->next;
    }
    if (curr->value == value)
        return 1;
    return 0;
}
