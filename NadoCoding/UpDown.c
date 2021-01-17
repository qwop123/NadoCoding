#include <stdio.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100 사이의 숫자
	printf("숫자 : %d\n", num);
	int answer = 0; // 정답
	int chance = 5; // 기회
	while (chance > 0)
	{
		printf("남은 기회: %d 번\n", chance--);
		printf("숫자를 맞혀보세요 ( 1 ~ 100 사이 )\n");
		scanf_s("%d", &answer);
		printf("\n");
		if (chance == 0)
		{
			printf("실패!\n\n");
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
			printf("정답입니다.\n\n");
			break;
		}
		else
		{
			printf("오류입니다.\n\n");
		}
	}
	return 0;
}
