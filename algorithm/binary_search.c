#include <stdio.h>

#define N 10

// 二分探索（バイナリサーチ）
// 探索対象がすでに整列済み
int main(){
	int a[N] = { 23, 26, 31, 41, 53, 58, 59, 84, 93, 94};
	int s, e, m ,x;

	printf("探索する値:");
	scanf("%d", &x);

	s = 0; e = N - 1; m = (s + e) / 2;
	while(s < e && a[m] != x){
		if(a[m] < x){
			s = m + 1;
		} else {
			e = m - 1;
		}
		m = (s + e) / 2;
	}

	if(a[m] == x){
		printf("値%dは位置%dに見つかりました。\n", x, m);
	} else {
		printf("値%dは見つかりませんでした。\n", x);
	}
}