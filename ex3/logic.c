#include "ex3.h"

int Add(struct a* arr, int size, int pos) {
	char a[12], b[12];
	int group = 0, web_mark = 0, ukr_mark = 0, Design_information_systems_mark = 0;

	printf("Enter last name, first name, group, web mark, ukr mark, DIS mark\n ");
	scanf("%s %s %d %d %d %d", a, b, &group, &web_mark, &ukr_mark, &Design_information_systems_mark);

	while (group > 4 || group <= 0) {
		printf("Group number is incorrect\nRepeat:\t");
		scanf("%d", &group);
	}


	for (i = 0; i < size - 1; ++i) {
		if (strcmp(a, arr[i].first_name) < 0) {
			pos = i;
			break;
		}

	}
	if (pos == -1) {
		pos = size - 1;
	}

	for (i = size - 1; i > pos; --i) {
		strcpy(arr[i].last_name, arr[i - 1].last_name);
		arr[i].group_count = arr[i - 1].group_count;
		arr[i].web_mark = arr[i - 1].web_mark;
		arr[i].ukr_mark = arr[i - 1].ukr_mark;
		arr[i].Design_information_systems_mark = arr[i - 1].Design_information_systems_mark;
	}
	strcpy(arr[pos].last_name, a);
	strcpy(arr[pos].first_name, b);
	arr[pos].group_count = group;
	arr[pos].web_mark = web_mark;
	arr[pos].ukr_mark = ukr_mark;
	arr[pos].Design_information_systems_mark = Design_information_systems_mark;
	return pos;
}

void arrears(struct a* arr, int size) {
	for (i = 0; i < size; i++) {
		if (arr[i].web_mark < 50 || arr[i].ukr_mark < 50 || arr[i].Design_information_systems_mark < 50)
			printf("L_name:%s\tF_name:%s\tGroup:%d\tWeb:%d\tUkr:%d\tDesing:%d\n", arr[i].last_name, arr[i].first_name, arr[i].group_count, arr[i].web_mark,
				arr[i].ukr_mark, arr[i].Design_information_systems_mark);
	}
}

float good_academic_performance(struct a* arr, int size) {
	float ac_perfm = 0.0;

	for (i = 0; i < size; i++) {
		if (arr[i].web_mark >= 70 && arr[i].ukr_mark >= 70 && arr[i].Design_information_systems_mark >= 70) {
			ac_perfm++;
		}
	}
	return ((ac_perfm * 100.0) / size);
}

void passed_the_best(struct a* arr, int size) {
	int web_mark_total = 0, ukr_mark_total = 0, Design_information_systems_mark_total = 0;
	for (i = 0; i < size; i++) {
		web_mark_total += arr[i].web_mark;
		ukr_mark_total += arr[i].ukr_mark;
		Design_information_systems_mark_total += arr[i].Design_information_systems_mark;
	}
	if (web_mark_total > ukr_mark_total && web_mark_total > Design_information_systems_mark_total) {
		printf("Web technologies the best passed\n");
	}
	else if (ukr_mark_total > web_mark_total && ukr_mark_total > Design_information_systems_mark_total) {
		printf("Ukr. language the best passed\n");
	}
	else if (Design_information_systems_mark_total > web_mark_total && Design_information_systems_mark_total > ukr_mark_total) {
		printf("Design information systems the best passed\n");
	}
	else {
		printf("All subject is the best passed\n");
	}
}

void the_worst_performing_group(struct a* arr, int size) {
	int worst, mark_total[] = { 0,0,0,0 };
	int min = 200;
	for (i = 0; i < size; i++) {
		switch (arr[i].group_count) {
		case 1:
			mark_total[0] += arr[i].web_mark + arr[i].ukr_mark + arr[i].Design_information_systems_mark;
			if (min > mark_total[0]) {
				min = arr[i].group_count;
			}
			break;
		case 2:
			mark_total[1] += arr[i].web_mark + arr[i].ukr_mark + arr[i].Design_information_systems_mark;
			if (min > mark_total[1]) {
				min = arr[i].group_count;
			}
			break;
		case 3:
			mark_total[2] += arr[i].web_mark + arr[i].ukr_mark + arr[i].Design_information_systems_mark;
			if (min > mark_total[2]) {
				min = arr[i].group_count;
			}
			break;
		case 4:
			mark_total[3] += arr[i].web_mark + arr[i].ukr_mark + arr[i].Design_information_systems_mark;
			if (min > mark_total[3]) {
				min = arr[i].group_count;
			}
			break;
		}
	}
	printf("The worst performance group %d\n", min);
}

void print_list(struct a* arr, int size) {
	for (i = 0; i < size; i++) {
		printf("L_name:%s\tF_name:%s\tGroup:%d\tWeb:%d\tUkr:%d\tDesing:%d\n", arr[i].last_name, arr[i].first_name, arr[i].group_count, arr[i].web_mark,
			arr[i].ukr_mark, arr[i].Design_information_systems_mark);
	}
}
