#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include <math.h>

void menu();
int* create(int size); 
int* add(int* p, int size); 
int insert(int* p, int size, int f, int element);
int getSize(int size);
int remove0(int* p, int size, int f);
void setElement(int* p, int f, int newElement); 
int getElement(int* p, int f); 
void print(int* p, int size);