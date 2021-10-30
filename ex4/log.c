#include "ex4.h"

int* create(int size) {
    int* p;
    p = (int*)calloc(size, sizeof(int));
    if (p == NULL) {
        printf("error");
        exit(1);
    }
    return p;
}

int* add(int* p, int size) {
    if (p == NULL) {
        printf("Error with memory! "); exit(1);
    }
    size++;
    p = realloc(p, size * sizeof(int));
    p[size] = rand() % 10;
    return p;
}


int insert(int* p, int size, int f, int element) {
    if (p == NULL) {
        printf("Error with memory! "); exit(1);
    }
    else if (element == size) {
        add(p, size);
    }
    int i;
    for (i = size; i >= f; i--) {
        p[i] = p[i - 1];
    }
    p[f] = element;
    size++;
    return element;
}

int getSize(int size) {
    return size;
}

int remove0(int* p, int size, int f) {
    if (p == NULL) {
        printf("Error with memory! "); exit(1);
    }
    int i;
    int newarr = p[f];
    for (i = f; i < size - 1; i++) {
        p[i] = p[i + 1];
    }
    size--;
    return newarr;
}

void setElement(int* p, int f, int newElement) {
    int temp;
    temp = p[f];
    p[f] = newElement;
}

int getElement(int* p, int f) {
    return p[f];
}

void print(int* p, int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", p[i]);
}
