#include <stdio.h>

void hanoi(int n, char start, char work, char target) {
	int isBaseCase = (n == 1) ? 1 : 0;
	if (!isBaseCase) hanoi(n - 1, start, target, work);
	printf("%c에서 원반 %d를(을) %c로 옮김\n", start, n, target);
	if (!isBaseCase) hanoi(n - 1, work, start, target);
}

int main() {
	hanoi(3, 'A', 'B', 'C');

	return 0;
}