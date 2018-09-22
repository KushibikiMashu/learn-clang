#include <stdio.h>

#define N 10

// 番兵つき線形探索
// 探索する数値を配列の一番最後に仕込む
// 途中で見つかればその番号を返す
// 見つからなければi == Nとなる
int main(){
	int a[N + 1] = { 31, 41, 59, 26, 53, 58, 97, 93, 23, 84 };
	int i, x;

	printf("探索する値");
	scanf("%d", &x);
	a[N] = x; // 番兵を仕込む

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