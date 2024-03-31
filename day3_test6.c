/*
#include <stdio.h>

int Fibonacci(int n) {
	return (n == 0) ? 0 : (n < -1) ? 1 : Fibonacci(n-1) + Fibonacci(n-2);
}

int main() {
	int n, i;

	printf("몇 번 째까지 피보나치 수열을 구할까요?:");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++) {
		printf("%d번 째 수 ", i);
		printf("%d\n", Fibonacci(i));
	}

	return 0;
}
*/