#include <stdio.h>
#include <time.h>

int main(void)
{
	// 버스를 탄다고 가정. 학생 / 일반인으로 구분 (일반인 : 20세)

	/*int age = 3;
	if (age >= 20)
	{
		printf("일반인입니다.\n");
	}
	else
	{
		printf("학생입니다.\n");
	}*/


	// 초등학생(8~13) / 중학생(14~16) / 고등학생(17~19) / 나머지 성인(나머지) 구분

	//int age = 13
	//;
	//if (age >= 8 && age <= 13)
	//{
	//	printf("초등학생입니다");
	//}
	//else if (age >= 14 && age <= 16)
	//{
	//	printf("중학생입니다\n.");
	//}
	//else if (age >= 17 && age <= 19)
	//{
	//	printf("고등학생입니다.\n");
	//}
	//else
	//{
	//	printf("성인입니다.\n");
	//}

	//-------------------------------------------------------------------//

	// break / continue 
	// 1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표를 합니다 . 
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("나머지학생은 집에 가세요\n");
			break;
		}
		printf("%d번 학생은 발표를 시작하세요\n", i);
	}*/


	//-------------------------------------------------------------------//

	// 1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
	// 7번을 제외하고 6번부터 10번까지 조별 발표를 하세요

	/*for (int i = 1; i <= 30; i++)
	{
		if (i > 5 && i < 11)
		{ 
		if (i == 7)
		{
			printf("7번은 오늘 결석입니다\n");
			continue;
		}
		if (i > 5 && i < 11)
		
			printf("%d번은 발표를 시작하세요\n" , i);
		}
	}*/

		// && ||
	/*int a = 11;
	int b = 11;
	int c = 12;
	int d = 12;
	if (a == b && c == d)
	{
		printf("a와 b는 같고 , c와 d는 같습니다\n");
	}
	else
	{
		printf("서로 값이 다릅니다.\n");*/
	//}


	//int a = 1;
	//int b = 11;
	//int c = 13;
	//int d = 12;
	//if (a == b || c == d)
	//{
	//	printf("a와 b가 같거나 , c와 d는 같습니다\n");
	//}
	//else
	//{
	//	printf("서로 값이 다릅니다.\n");
	//}

	//---------------------------------------------------//
	
	// 가위 0 바위 1 보 2
	//srand(time(NULL));
	//int i = rand() % 5; // 0 ~ 2 반환
	//if (i == 0)
	//{
	//	printf("가위\n");
	//}
	//else if (i == 1)
	//{
	//	printf("바위\n");
	//}
	//else if (i == 2)
	//{
	//	printf("보\n");
	//}
	//else
	//{
	//	printf("X\n");
	//}

	//
	//srand(time(NULL));
	//int i = rand() % 3; // 0 ~ 2 반환
	//switch (i)
	//{
	//case 0:printf("가위\n"); break;
	//case 1:printf("바위\n"); break;
	//case 2:printf("보\n"); break;
	//default:printf("X\n"); break;

	//}

	//----------------------------------------------------//

	// 초등학생(8~13) / 중학생(14~16) / 고등학생(17~19) / 나머지 성인(나머지) 구분

	
	/*int age = 1;
	
	switch (age)
	{
	case 13:printf("초등학생입니다\n"); break;
	case 16:printf("중학생입니다\n"); break;
	case 19:printf("고등학생입니다\n"); break;
	default:printf("학생이 아닌가봐요?\n"); break;
	}*/
	/*if (age >= 8 && age <= 13)
	{
		printf("초등학생입니다");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("중학생입니다\n.");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("고등학생입니다.\n");
	}
	else
	{
		printf("성인입니다.\n");
	}*/

	// Up and Down
	

	



























	return 0;
}