#include <stdio.h>

int main() {
	int num;
	printf("정수를 입력하세요 : ");
	scanf("%d", &num);
	printf("\n\n%d의 팩토리얼 값은 %d입니다.", num, fact(num));
	
	return 0;
}

int fact(int n) {
	int result;
	printf("\nfact(%d) 함수 호출!", n);
	result = (n == 1) ? 1 : fact(n - 1) * n;
	printf("\nfact(%d) 값 %d 반환!", n, result);
	return result;
}