#include <stdio.h>

#include <stdlib.h> // rand()�Լ� ���� ���̺귯��

#include <time.h> // time()�Լ� ���� ���̺귯��



int main()

{

	srand(time(NULL)); // �Ź� �ٸ� �õ尪 ����

	int random = 0; // ������ ���� ����

	for (int i = 0; i < 10; i++) { // 10�� �ݺ�

		random = rand() % 9 + 1; // ���� ����

		printf("%d\n", random); // ���

		printf("\n%d�� ���\n", random);
		for (int j = 1; j <= 9; j++)
		{
			printf(" %d x %d = %d\n", random, j, random * j);
		}
		printf("\n\n");
	}
	
}
