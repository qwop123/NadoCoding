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
//			lotto[j] = 0; // �ߺ� �˻縦 ���� ���� 0���� ä��
//			count[1][j] = j + 1; // �迭�� �� ��° �ٿ� 1~45�� ä����
//		}
//		for (k = 0; k < 6; k++) {
//			do {
//				num = rand() % 45; // ���� �߻�
//				count[0][num]++; // �� ���ں��� ���� ������ ī��Ʈ
//			} while (lotto[num] == 1); // �ߺ��Ǵ� �� üũ
//			lotto[num] = 1; // ���� ���ڿ��� 1�� ä��
//			printf("%2d ", num + 1); // ���� ���
//		}printf("\n");
//	}printf("\n");
//
//	printf("�� ���ں��� ���� ������ ������ ����.\n");
//	for (j = 0; j < 45; j++) {
//		printf("%2d�� : %4d%s %s", count[1][j], count[0][j], j == 44 ? "" : ",",
//			(j + 1) % 5 ? " " : "\n");
//		// �� ���ں��� ���� ������ ���
//	}printf("\n");
//}