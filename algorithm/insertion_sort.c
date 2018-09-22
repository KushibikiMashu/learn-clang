#include <stdio.h>

#define N 10

// 挿入ソート(単純挿入法)
int main(){
	int a[N] = { 31, 41, 59, 26, 53, 58, 97, 93, 23, 84 };	
    int i, j, k;

    printf("整列前: ");
	for(i = 0; i < N; i++){
		printf("%d ", a[i]);
	}
    printf("\n");
    
    for(i = 1; i < N; i++){
        k = a[i];
        for(j = i - 1; j >= 0; j--){
            a[j + 1] = a[j];

            if(a[j] < k){
                break;
            }
        }
        a[j + 1] = k;
    }

    printf("整列後: ");
	for(i = 0; i < N; i++){
		printf("%d ", a[i]);
	}
    printf("\n");
}