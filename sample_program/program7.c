#include <stdio.h>

#define N 10

int main(){
	int i, x[N];
	double a = 0.0;

	for(i = 0; i < N; i++) {
		scanf("%d\n", &x[i]);
		a += x[i];
	}
	a /= N;

	printf("平均は%f\n", a);

	for(i = 0; i < N; i++) {
		printf("#%d: %d, 標準偏差: %f\n", i, x[i], x[i] - a);
	}

}