#include <stdio.h>

#define N 10

// 選択ソート（selection_sort）
int main(){
	int a[N] = { 31, 41, 59, 26, 53, 58, 97, 93, 23, 84};
	int i, j, k, min, m;

	printf("整列前: ");
	for(i = 0; i < N; i++){
		printf("%d ", a[i]);
	}
	printf("\n");

	for(i = 0; i < N - 1; i++){
		// a[i] ~ a[N - 1]の最小値がある要素番号を見出す
		k = i; // まず要素番号iを仮の最小とする
		min = a[k];
		m = k;

		for(j = k + 1; j < N; j++){
			if(min > a[j]){
				min = a[j];
				m = j;
			}
		}

		// 最小の数と比較対象を交換
		a[m] = a[i];
		a[i] = min;
	}

	printf("整列後: ");
	for(i = 0; i < N; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}