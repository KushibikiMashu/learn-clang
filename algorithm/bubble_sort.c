#include <stdio.h>

#define N 10

// バブルソート(単純交換法)
int main(){
	int a[N] = { 31, 41, 59, 26, 53, 58, 97, 93, 23, 84 };
	int i, j, k;

	printf("整列前: ");
	for(i = 0; i < N; i++){
		printf("%d ", a[i]);
	}
	printf("\n");

	for(i = 0; i < N - 1; i++){
		for(j = 0; j < N - 1; j++){
			if( a[j] > a[j + 1] ){
				k = a[j];
				a[j] = a[j + 1];
				a[j + 1] = k;
			}
		}
	}

	printf("整列後: ");
	for(i = 0; i < N; i++){
		printf("%d ", a[i]);
	}
	printf("\n");	
}