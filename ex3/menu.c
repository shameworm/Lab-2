#include "ex3.h"

void menu(){
	int n=0, size = 0, pos = -1;
	struct a* f = (struct a*)calloc(sizeof(struct a*), size);
	while (printf("1.Add student\n2.Arrears\n3.Good academic performance\n4.Subject passed the best\n5.The worst performance group\n6.Print\t") && scanf("%d", &n) != 1 || n != 0) {
		switch (n) {
		case 1:
			++size;
			if (size != 30) {
				pos = Add(f, size, pos);
			}
			else {
				printf("To much");
			}
			break;
		case 2:
			arrears(f, size);
			break;
		case 3:
			printf("Percentage of students %d\%%\n", (int)good_academic_performance(f, size));
			break;
		case 4:
			passed_the_best(f, size);
			break;
		case 5:
			the_worst_performing_group(f, size);
			break;
		case 6:
			print_list(f, size);
			break;
		default:
			continue;
		}
		fflush(stdin);
	}
	free(f);
}
