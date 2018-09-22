#include <stdio.h>

// 日数を求めるプログラム
int main(){
	int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int m1, d1, m2, d2, m, d;

	printf("日付1: ");
	scanf("%d%d", &m1, &d1);
	printf("日付1: ");
	scanf("%d%d", &m2, &d2);

	d = d2 - d1;
	for (m = m1; m <= m2 - 1; m++){
		d += days[m];
	}

	printf("日数:%d\n", d);
}