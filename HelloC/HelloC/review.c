#include <stdio.h>
#include <time.h>

int main(void)
{
		// ������ ���� ���� //
		// �̸�? ����? Ű? ������? �� ��?
		
	/*	char name[256];
		printf("�̸� : ");
		scanf_s("%s", &name , sizeof(256));

		int age;
		printf("���� : ");
		scanf_s("%d", &age);

		double height;
		printf("Ű : ");
		scanf_s("%lf", &height);

		double weight;
		printf("������ : ");
		scanf_s("%lf", &weight);

		char i[256];
		printf("�� �� : ");
		scanf_s("%s", &i, sizeof(256));

		printf("\n\n****** ������ ���� ******\n\n");
		printf("�̸�   : %s\n", name);
		printf("����   : %d\n", age);
		printf("Ű     : %.1f\n", height);
		printf("������ : %.1f\n", weight);
		printf("�� ��  : %s\n", i);
		printf("*************************\n\n");*/



	//	char name[256];
	//printf("�̸��� ������?");
	//scanf_s("%s", name, sizeof(name));

	//int age;
	//printf("����̿���?");
	//scanf_s("%d", &age);

	//float weight;
	//printf("�����Դ� �� kg �̿���?");
	//scanf_s("%f", &weight);

	//double height;
	//printf("Ű�� �� cm�̿���?");
	//scanf_s("%lf", &height);

	//char what[256];
	//printf("���� ���˸� ���������?");
	//scanf_s("%s", what, sizeof(what));

	//// ���� ���� ���
	//printf("\n\n---������ ���� ---\n\n");
	//printf(" �̸�        : %s\n", name);
	//printf(" ����        : %d\n", age);
	//printf(" ������      : %.2f\n", weight);
	//printf(" Ű          : %.1lf\n", height);
 //   printf(" ���˸�      : %s\n", what);

	//*******************************************

	// ������ ���� ���� //
	// �̸�? ����? Ű? ������? �Ҹ�?
	
	/*char name[256];
	printf("�̸��� ������?      : ");
		scanf_s("%s", &name, sizeof(256));

	int age;
	printf("����̿���?         : ");
	scanf_s("%d", &age);


	double height;
	printf("Ű�� ���̿���?      : ");
	scanf_s("%lf", &height);


	double weight;
	printf("�����԰� ���̿���?  : ");
	scanf_s("%lf", &weight);

	char i[256];
	printf("�� ���� �ֳ���?     : ");
	scanf_s("%s", &i, sizeof(256));

	printf("\n\n******������ ����******\n\n");
	printf("�̸�   : %s\n", name);
	printf("����   : %d\n", age);
	printf("Ű     : %.1f\n", height);
	printf("������ : %.1f\n", weight);
	printf("�� ��  : %s\n", i);
	printf("***************************\n\n");*/

	//�Ƕ�̵带 �׾ƶ�//
	
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
	printf("�������� �������?\n");
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
	//printf("���� : %d\n", num);
	//int answer = 0; // ����
	//int chance = 5; // ����
	//while (chance > 0)
	//{
	//	printf("���� ��ȸ %d ��\n", chance--);
	//	printf("���ڸ� ���������� (1~100) :  ");
	//	scanf_s("%d", &answer);
	//	if (chance == 0)
	//	{
	//		printf("\n����!\n");
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
	//		printf("\n�����Դϴ�!\n\n");
	//		break;
	//	}
	//	else
	//	{
	//		printf("�� �� ���� �����Դϴ�.");
	//	}
	//}

	// ���� �� �ٿ���� //
	// 1 ~ 100 ���� ���� ���� 
	
	/*srand(time(NULL));
	int num = rand() % 100 + 1;
	printf("���� : %d\n", num);
	int answer = 0;
	int chance = 5;

	while (chance > 0)
	{
		printf("\n���� ��ȸ %d ��\n\n", chance--);
		printf("���ڸ� ���������� (1~100) : ");
		scanf_s("%d", &answer);

		if (chance == 0)
		{
			printf("\n����!!!!!!\n");
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
			printf("\n�����Դϴ�!\n");
			break;
		}
		else
		{
			printf("\n�˼����¿����Դϴ�!\n");
		}
	}*/








	//// ���� ������ UP and DOWN

	//srand(time(NULL));
	//int num = rand() % 100 + 1; // 100�� 0~99 
	//printf("******���ڳ��� UP and DOWN*******\n\n");
	//printf("���� : %d\n", num);

	//int answer = 0;
	//int chance = 5;

	//while (chance > 0)
	//{
	//	printf("\n���� ��ȸ : %d\n\n", chance--);
	//	printf("���ڸ� ���������� : ");
	//	scanf_s("%d", &answer);
	//
	//	if (chance == 0)
	//	{
	//		printf("\n�����Դϴ�\n\n");
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
	//		printf("\n�����Դϴ�!\n\n");
	//		break;
	//	}
	//	else
	//	{
	//		printf("�˼����¿����Դϴ�\n");
	//	}

	//}
	//

	// ���ڳ��� UP and Down //

	//srand(time(NULL));
	//int num = rand() % 100 + 1;
	//printf("--------���ڳ��� UP and Down---------\n\n");
	//printf("���� ���� : %d", num);
	//int answer = 0;
	//int chance = 5;

	//while (chance > 0)
	//{
	//	printf("\n\n���� ��ȸ�� %d �Դϴ�.\n\n", chance--);
	//	printf("���ڸ� �Է��ϼ��� :   ");
	//	scanf_s("%d", &answer);

	//	if (chance == -1)
	//	{
	//		printf("\n�����Դϴ�!\n\n");
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
	//		printf("\n�����Դϴ�!\n");
	//		break;
	//	}
	//	else
	//	{
	//		printf("�˼����¿����Դϴ�\n");
	//	}
	//}

	//
	
	// ���� 5���� �ְ�, �� ������ ���� ����� ���� ��� ����
	// ������ ���, Ʋ���� ����
	
	



















































	return 0;
}