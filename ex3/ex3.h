#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

int i;
struct a {
	char last_name[12];
	char first_name[12];
	int group_count;
	int web_mark, ukr_mark, Design_information_systems_mark;
};

void menu();
int Add(struct a* arr, int size, int pos);
void arrears(struct a* arr, int size);
float good_academic_performance(struct a* arr, int size);
void passed_the_best(struct a* arr, int size);
void the_worst_performing_group(struct a* arr, int size);
