#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char string[64];
	printf("문자열을 입력하세요 : ");
	scanf("%s", string);
	printf("\n\
입력된 문자열은\n\
\"%s\"\n\
입니다.\n\n\
입력된 문자열의 길이 = %d\n\
", string, strlen(string));
	return 0;
}
