#include <stdio.h>
#include <string.h>

#define MAX 10   

typedef struct {
    char arr[MAX];
    int start;
    int end;
    int size;
} CBuffer;

void setup(CBuffer *b) {
    b->start = 0;
    b->end = 0;
    b->size = 0;
}

int full(CBuffer *b) {
    return b->size == MAX;
}

int empty(CBuffer *b) {
    return b->size == 0;
}

void push(CBuffer *b, char x) {
    if (full(b)) {
        printf("Overflow: '%c' not added\n", x);
        return;
    }

    b->arr[b->end] = x;
    b->end = (b->end + 1) % MAX;
    b->size++;
}

char pop(CBuffer *b) {
    if (empty(b)) {
        printf("Underflow\n");
        return '\0';
    }

    char x = b->arr[b->start];
    b->start = (b->start + 1) % MAX;
    b->size--;

    return x;
}

int main() {
    CBuffer buff;
    setup(&buff);

    char input[60];
    printf("Enter your name: ");
    scanf("%59s", input);

    strcat(input, "CE-ESY");

    for (int i = 0; i < strlen(input); i++) {
        push(&buff, input[i]);
    }

    printf("Result: ");
    while (!empty(&buff)) {
        printf("%c", pop(&buff));
    }

    printf("\n");

    if (empty(&buff)) {
        printf("Buffer cleared successfully.\n");
    }

    return 0;
}
