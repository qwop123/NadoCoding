#include <stdio.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100 ������ ����
	printf("���� : %d\n", num);
	int answer = 0; // ����
	int chance = 5; // ��ȸ
	while (chance > 0)
	{
		printf("���� ��ȸ: %d ��\n", chance--);
		printf("���ڸ� ���������� ( 1 ~ 100 ���� )\n");
		scanf_s("%d", &answer);
		printf("\n");
		if (chance == 0)
		{
			printf("����!\n\n");
			break;
		}

		if (answer > num)
		{
			printf("Down\n\n");
		}
		else if (answer < num)
		{
			printf("Up\n\n");
		}
		else if (answer == num)
		{
			printf("�����Դϴ�.\n\n");
			break;
		}
		else
		{
			printf("�����Դϴ�.\n\n");
		}
	}
	return 0;
}
