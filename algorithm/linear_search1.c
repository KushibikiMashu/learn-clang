#include <stdio.h>

#define N 10

// 線形探索（リニアサーチ）
int main(){
	int a[N] = { 31, 41, 59, 26, 53, 58, 97, 93, 23, 84 };
	int i, x;

	printf("探索する値");
	scanf("%d", &x);

	for(i = 0; i < N; i++){
		if(a[i] == x){
			break;
		}
	}

	if(i == N){
		printf("値%dは見つかりませんでした。\n", x);
	} else {
		printf("値%dは位置%dに見つかりました。\n", x, i);
	}
}