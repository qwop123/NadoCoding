//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void)
//{
//	int i, j, k, num, min, lotto[45], count[2][45] = { 0, };
//
//	srand(time(NULL));
//
//	for (i = 0; i < 10; i++) {
//		printf("%5d : ", i + 1);
//		for (j = 0; j < 45; j++) {
//			lotto[j] = 0; // 중복 검사를 위해 전부 0으로 채움
//			count[1][j] = j + 1; // 배열의 두 번째 줄에 1~45가 채워짐
//		}
//		for (k = 0; k < 6; k++) {
//			do {
//				num = rand() % 45; // 난수 발생
//				count[0][num]++; // 각 숫자별로 나온 개수를 카운트
//			} while (lotto[num] == 1); // 중복되는 수 체크
//			lotto[num] = 1; // 사용된 숫자에는 1을 채움
//			printf("%2d ", num + 1); // 난수 출력
//		}printf("\n");
//	}printf("\n");
//
//	printf("각 숫자별로 나온 개수는 다음과 같다.\n");
//	for (j = 0; j < 45; j++) {
//		printf("%2d번 : %4d%s %s", count[1][j], count[0][j], j == 44 ? "" : ",",
//			(j + 1) % 5 ? " " : "\n");
//		// 각 숫자별로 나온 개수를 출력
//	}printf("\n");
//}