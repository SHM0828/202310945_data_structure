#include <stdio.h>

int main() {
	char array3D[2][3][32];
	for (int i = 0; i < 2; i++) {
		printf("학생%d의 이름 : ", i+1);
		scanf(" %[^\n]s", array3D[i][0]);
		printf("학생%d의 학과 : ", i+1);
		scanf(" %[^\n]s", array3D[i][1]);
		printf("학생%d의 학번 : ", i+1);
		scanf(" %[^\n]s", array3D[i][2]);
		printf("\n");
	}

	for (int i = 0; i < 2; i++) {
		printf("\n\
학생%d\n\
\t%s\n\
\t%s\n\
\t%s\n\
", i+1, array3D[i][0], array3D[i][1], array3D[i][2]);
	}

	return 0;
}