#include <stdio.h>
#include <time.h>

int main(void)
{
		// 경찰서 조서 쓰기 //
		// 이름? 나이? 키? 몸무게? 할 말?
		
	/*	char name[256];
		printf("이름 : ");
		scanf_s("%s", &name , sizeof(256));

		int age;
		printf("나이 : ");
		scanf_s("%d", &age);

		double height;
		printf("키 : ");
		scanf_s("%lf", &height);

		double weight;
		printf("몸무게 : ");
		scanf_s("%lf", &weight);

		char i[256];
		printf("할 말 : ");
		scanf_s("%s", &i, sizeof(256));

		printf("\n\n****** 경찰서 조서 ******\n\n");
		printf("이름   : %s\n", name);
		printf("나이   : %d\n", age);
		printf("키     : %.1f\n", height);
		printf("몸무게 : %.1f\n", weight);
		printf("할 말  : %s\n", i);
		printf("*************************\n\n");*/



	//	char name[256];
	//printf("이름이 뭐예요?");
	//scanf_s("%s", name, sizeof(name));

	//int age;
	//printf("몇살이예요?");
	//scanf_s("%d", &age);

	//float weight;
	//printf("몸무게는 몇 kg 이예요?");
	//scanf_s("%f", &weight);

	//double height;
	//printf("키는 몇 cm이예요?");
	//scanf_s("%lf", &height);

	//char what[256];
	//printf("무슨 범죄를 저질렀어요?");
	//scanf_s("%s", what, sizeof(what));

	//// 조서 내용 출력
	//printf("\n\n---범죄자 정보 ---\n\n");
	//printf(" 이름        : %s\n", name);
	//printf(" 나이        : %d\n", age);
	//printf(" 몸무게      : %.2f\n", weight);
	//printf(" 키          : %.1lf\n", height);
 //   printf(" 범죄명      : %s\n", what);

	//*******************************************

	// 경찰서 조서 쓰기 //
	// 이름? 나이? 키? 몸무게? 할말?
	
	/*char name[256];
	printf("이름이 뭐예요?      : ");
		scanf_s("%s", &name, sizeof(256));

	int age;
	printf("몇살이예요?         : ");
	scanf_s("%d", &age);


	double height;
	printf("키가 몇이예요?      : ");
	scanf_s("%lf", &height);


	double weight;
	printf("몸무게가 몇이예요?  : ");
	scanf_s("%lf", &weight);

	char i[256];
	printf("할 말이 있나요?     : ");
	scanf_s("%s", &i, sizeof(256));

	printf("\n\n******경찰서 조서******\n\n");
	printf("이름   : %s\n", name);
	printf("나이   : %d\n", age);
	printf("키     : %.1f\n", height);
	printf("몸무게 : %.1f\n", weight);
	printf("할 말  : %s\n", i);
	printf("***************************\n\n");*/

	//피라미드를 쌓아라//
	
	//for (int i = 0; i < 4; i++)
	//{
	//	for (int j = i; j < 3; j++)
	//	{
	//		for (int p = 0; p < i + 2; p++)
	//		{
	//			printf("\n");
	//		}
	//		printf("S");
	//	}
	//	printf("*");
	//}
	
  /*
	int floor;
	printf("몇층까지 쌓을까요?\n");
	scanf_s("%d", &floor);
	printf("\n\n");

	for (int i = 0; i < floor; i++)
	{
		for (int j = i; j < floor; j++)
		{		
			printf(" ");
		}
		for (int p = 0; p < i * 2 + 1; p++)
		{
			printf("*");
		}
		printf("\n");*/

	//}

	//for (int i = 0; i < 5; i++)
 //  {
	//   for (int j = 0; j <= i; j++)
	//   {
	//	   printf("*");
	//   }
	//   printf("\n");
 //  }
	//

	
	

	// for (int p = 0; p >= i + 2; p++)
	


	//// Up and Down

	//srand(time(NULL));                               
	//int num = rand() % 100 + 1;
	//printf("숫자 : %d\n", num);
	//int answer = 0; // 정답
	//int chance = 5; // 찬스
	//while (chance > 0)
	//{
	//	printf("남은 기회 %d 번\n", chance--);
	//	printf("숫자를 맞혀보세요 (1~100) :  ");
	//	scanf_s("%d", &answer);
	//	if (chance == 0)
	//	{
	//		printf("\n실패!\n");
	//		break;
	//	}

	//	if (answer > num)
	//	{
	//		printf("\nDOWN!\n\n");
	//	}
	//	else if (answer < num)
	//	{
	//		printf("\nUP!\n\n");
	//	}
	//	else if (answer == num)
	//	{
	//		printf("\n정답입니다!\n\n");
	//		break;
	//	}
	//	else
	//	{
	//		printf("알 수 없는 오류입니다.");
	//	}
	//}

	// 숫자 업 다운게임 //
	// 1 ~ 100 까지 랜덤 숫자 
	
	/*srand(time(NULL));
	int num = rand() % 100 + 1;
	printf("숫자 : %d\n", num);
	int answer = 0;
	int chance = 5;

	while (chance > 0)
	{
		printf("\n남은 기회 %d 번\n\n", chance--);
		printf("숫자를 맞혀보세요 (1~100) : ");
		scanf_s("%d", &answer);

		if (chance == 0)
		{
			printf("\n실패!!!!!!\n");
			break;
		}

		if (answer > num)
		{
			printf("\nDown!\n");
		}
		else if (answer < num)
		{
			printf("\nUP!\n");

		}
		else if (answer = num)
		{
			printf("\n정답입니다!\n");
			break;
		}
		else
		{
			printf("\n알수없는오류입니다!\n");
		}
	}*/








	//// 숫자 맞히기 UP and DOWN

	//srand(time(NULL));
	//int num = rand() % 100 + 1; // 100은 0~99 
	//printf("******숫자놀이 UP and DOWN*******\n\n");
	//printf("숫자 : %d\n", num);

	//int answer = 0;
	//int chance = 5;

	//while (chance > 0)
	//{
	//	printf("\n남은 기회 : %d\n\n", chance--);
	//	printf("숫자를 맞혀보세요 : ");
	//	scanf_s("%d", &answer);
	//
	//	if (chance == 0)
	//	{
	//		printf("\n실패입니다\n\n");
	//		break;
	//	}
	//	if (answer > num)
	//	{
	//		printf("\nDOWN!\n\n");
	//	}
	//	else if (answer < num)
	//	{
	//		printf("\nUP!\n\n");
	//	}
	//	else if (answer == num)
	//	{
	//		printf("\n정답입니다!\n\n");
	//		break;
	//	}
	//	else
	//	{
	//		printf("알수없는오류입니다\n");
	//	}

	//}
	//

	// 숫자놀이 UP and Down //

	//srand(time(NULL));
	//int num = rand() % 100 + 1;
	//printf("--------숫자놀이 UP and Down---------\n\n");
	//printf("나의 숫자 : %d", num);
	//int answer = 0;
	//int chance = 5;

	//while (chance > 0)
	//{
	//	printf("\n\n남은 기회는 %d 입니다.\n\n", chance--);
	//	printf("숫자를 입력하세요 :   ");
	//	scanf_s("%d", &answer);

	//	if (chance == -1)
	//	{
	//		printf("\n실패입니다!\n\n");
	//		break;
	//	}
	//	if (answer > num)
	//	{
	//		printf("\nDOWN!\n\n");
	//	}
	//	else if (answer < num)
	//	{
	//		printf("\nUP!\n\n");
	//	}
	//	else if (answer = num)
	//	{
	//		printf("\n정답입니다!\n");
	//		break;
	//	}
	//	else
	//	{
	//		printf("알수없는오류입니다\n");
	//	}
	//}

	//
	
	// 문이 5개가 있고, 각 문마다 점점 어려운 수식 퀴즈가 출제
	// 맞히면 통과, 틀리면 실패
	
	



















































	return 0;
}