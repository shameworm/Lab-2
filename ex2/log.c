#include "header.h"

bool flag = false;
int cmt = 0, a =0, sr =0, s = 0;
int n[6] = {0,5,-1,9,-2,1};

void average(){
	for(int i = 0; i < 6; i++){
            a+=n[i];
        }
        sr = a/6;
    printf( "Average %d\n", sr);
}
void numsAboveAverage(){
	for (int i = 0; i < 6; i++) {
        if (n[i] > sr) {
            cmt++;
        }
    }
    printf("Number > average %d\n", cmt);
}

void sumFunc(){
	for (int i = 1; i < 6; i++) {
        if (n[i-1] < 0||flag==true){
            flag = true;
            if (flag = true) {
                s += n[i];
            }

        }
    }
    printf("Sum after first negative = %d\n", s);
}