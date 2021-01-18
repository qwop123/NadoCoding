#include <stdio.h>
#include <time.h>

int getRandomNumber(int level);
void ShowQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void)
{
	srand(time(NULL));
	int count = 0;
	char error[300];

	for (int i = 1; i < 6; i++)
	{
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		ShowQuestion(i, num1, num2);

		int answer = -1;
		scanf_s("%d", &answer);
		//char error[300];

		/*scanf_s("%s", &error, sizeof(300));
		printf("숫자를 입력하세요\n\n");
		continue*/

		if (answer == -1)
		{
			printf("프로그램을 종료합니다.\n\n");
			exit(0);
		}
		else if (answer == num1 * num2)
		{
			success();
			count++;
		}
		else
		{
			fail();
		}
	}
	     printf("정답 : %d / 5 \n\n", count);
		
	return 0;
	
}
	

int  getRandomNumber(int level)
{
	return rand() % (level * 7) + 1;
}
void ShowQuestion(int level, int num1, int num2) 
{
	printf("< %d번째 비밀번호 >\n\n", level);
	printf("%d X %d = ?\n\n", num1, num2);
	printf("번호를 입력하세요 (종료 : -1) : ");
}
void success()
{
	printf("\n\n성공!\n\n\n");
}
void fail()
{
	printf("\n\n실패!\n\n\n");

}