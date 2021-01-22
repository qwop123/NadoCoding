#include <stdio.h>
#include <time.h>

// 5������ ����̰� �ִ�
// �ƹ� Ű�� ������ �������� ����̸� �̵�.
// 5���� ��� �� ������ �ؼ� ������ Ű��� �Ǵ� ����!
// �ߺ� �߻� ���� !

// �����
// �̸� , ���� , ���� , Ű��� ���̵� (����)

typedef struct {
	char* name; // �̸� 
	char* age; // ����
	char* character; // ����
	char* level; // Ű��� ���̵� ( 1 ~ 5 , 5�� ����� )
	char* number;
	char* type;

} CAT;


// ������� ������ �����
int collection[10];

// ��ü ����� ����Ʈ
CAT cats[10];

void initCats(); // ����� ���� �ʱ�ȭ
void printCat(int selected);




int main(void)
{
	srand(time(NULL));

	
	
	initCats();
	while (1)
	{
		printf("�αٵα�~! � ����̰� ���ñ��?\n�ƹ� Ű�� ������ Ȯ���ϼ���!");
		getchar();

		int selected = rand() % 100; // 0 ~ 99 ������ ���� ��ȯ
		printf("������ : %d\n", selected);
		printCat(selected); // ���� ����� ���� ���

		int collectAll = checkCollection();
		if (collectAll == 1)
			break;
	}

	return 0;
}

void initCats()
{
	cats[0].name = "�ޱ��";
	cats[0].number = "NO. 484";
	cats[0].character = "��ȭ�� �����ϴ� ���ϸ��̴�.";
	cats[0].type = "��, �巡��";

	cats[1].name = "��Ʒ簡";
	cats[1].number = "NO. 483";
	cats[1].character = "������ �������� ���ϸ��̴�.";
	cats[1].type = "��ö, �巡��";

	cats[2].name = "����Ĵ�";
	cats[2].number = "NO. 054";
	cats[2].character = "������ ���뿡 �ô޸���.";
	cats[2].type = "��";

	cats[3].name = "Ǫ��";
	cats[3].number = "NO. 039";
	cats[3].character = "��밡 ��� ������ ���尡�� �θ���.";
	cats[3].type = "�븻, ��";

	cats[4].name = "����";
	cats[4].number = "NO. 017";
	cats[4].character = "������ �ߴ��� �ִ�.";
	cats[4].type = "�븻, ����";

	cats[5].name = "������";
	cats[5].number = "NO. 012";
	cats[5].character = "�ſ� ������ �������Ѵ�.";
	cats[5].type = "����, ����";

	cats[6].name = "�̻��ؾ�";
	cats[6].number = "NO. 001";
	cats[6].character = "� �Ĺ��� ������ ������ ���ݾ� �ڶ���.";
	cats[6].type = "Ǯ, ��";

	cats[7].name = "���α�";
	cats[7].number = "NO. 007";
	cats[7].character = "�������� �߻��Ѵ�.";
	cats[7].type = "��";

	cats[8].name = "���̸�";
	cats[8].number = "NO. 025";
	cats[8].character = "����� ���� ���Ⱑ ������ ��ī���ϼ��� ���� �ָӴϰ� �ε巴�� �� �þ��.";
	cats[8].type = "����";

	cats[9].name = "��ī��";
	cats[9].number = "NO. 004";
	cats[9].character = "�߰ſ� ���� �����ϴ� �����̴�.";
	cats[9].type = "�Ҳ�";

	}

void printCat(int selected)
{

	if(selected == 0)
	{
		printf("\n\n--- ���ϸ��� ���Ծ��!! ---\n\n");
		printf(" �̸� : %s\n", cats[0].name);
		printf(" ��ȣ : %s\n", cats[0].number);
		printf(" ���� : %s\n", cats[0].character);
		printf(" Ÿ�� : %s\n", cats[0].type);
		/*printf("\n\n\t��\n\n");*/
		collection[0] = 1; // ����� �̱� ó��
	}
	else if (selected == 1)
	{
		printf("\n\n--- ���ϸ��� ���Ծ��!! ---\n\n");
		printf(" �̸� : %s\n", cats[1].name);
		printf(" ��ȣ : %s\n", cats[1].number);
		printf(" ���� : %s\n", cats[1].character);
		printf(" Ÿ�� : %s\n", cats[1].type);
		/*printf("\n\n\t��\n\n");*/
		collection[1] = 1; // ����� �̱� ó��
	}
	else if (selected >= 2 && selected <= 9)
	{
		printf("\n\n--- ���ϸ��� ���Ծ��!! ---\n\n");
		printf(" �̸� : %s\n", cats[2].name);
		printf(" ��ȣ : %s\n", cats[2].number);
		printf(" ���� : %s\n", cats[2].character);
		printf(" Ÿ�� : %s\n", cats[2].type);
		/*printf("\n\n\t��\n\n");*/
		collection[2] = 1; // ����� �̱� ó��

	}
	else if (selected >= 10 && selected < 20)
	{
		printf("\n\n--- ���ϸ��� ���Ծ��!! ---\n\n");
		printf(" �̸� : %s\n", cats[3].name);
		printf(" ��ȣ : %s\n", cats[3].number);
		printf(" ���� : %s\n", cats[3].character);
		printf(" Ÿ�� : %s\n", cats[3].type);
		/*printf("\n\n\t��\n\n");*/
		collection[3] = 1; // ����� �̱� ó��

	}
	else if (selected >= 20 && selected < 30)
	{
		printf("\n\n--- ���ϸ��� ���Ծ��!! ---\n\n");
		printf(" �̸� : %s\n", cats[4].name);
		printf(" ��ȣ : %s\n", cats[4].number);
		printf(" ���� : %s\n", cats[4].character);
		printf(" Ÿ�� : %s\n", cats[4].type);
		/*printf("\n\n\t��\n\n");*/
		collection[4] = 1; // ����� �̱� ó��

	}
	else if (selected >= 30 && selected < 40) 
	{
		printf("\n\n--- ���ϸ��� ���Ծ��!! ---\n\n");
		printf(" �̸� : %s\n", cats[5].name);
		printf(" ��ȣ : %s\n", cats[5].number);
		printf(" ���� : %s\n", cats[5].character);
		printf(" Ÿ�� : %s\n", cats[5].type);
		/*printf("\n\n\t��\n\n");*/
		collection[5] = 1; // ����� �̱� ó��

	}
	else if (selected >= 40 && selected < 55)
	{
		printf("\n\n--- ���ϸ��� ���Ծ��!! ---\n\n");
		printf(" �̸� : %s\n", cats[6].name);
		printf(" ��ȣ : %s\n", cats[6].number);
		printf(" ���� : %s\n", cats[6].character);
		printf(" Ÿ�� : %s\n", cats[6].type);
		/*printf("\n\n\t��\n\n");*/
		collection[6] = 1; // ����� �̱� ó��

	}
	else if (selected >= 56 && selected < 70)
	{
		printf("\n\n--- ���ϸ��� ���Ծ��!! ---\n\n");
		printf(" �̸� : %s\n", cats[7].name);
		printf(" ��ȣ : %s\n", cats[7].number);
		printf(" ���� : %s\n", cats[7].character);
		printf(" Ÿ�� : %s\n", cats[7].type);
		/*printf("\n\n\t��\n\n");*/
		collection[7] = 1; // ����� �̱� ó��

	}
	else if (selected >= 71 && selected < 85)
	{
		printf("\n\n--- ���ϸ��� ���Ծ��!! ---\n\n");
		printf(" �̸� : %s\n", cats[8].name);
		printf(" ��ȣ : %s\n", cats[8].number);
		printf(" ���� : %s\n", cats[8].character);
		printf(" Ÿ�� : %s\n", cats[8].type);
		collection[8] = 1; // ����� �̱� ó��

		/*printf("\n\n\t��\n\n");*/
	}
	//else if (91 < selected < 100)
	//{
	//	printf("\n\n--- ���ϸ��� ���Ծ��!! ---\n\n");
	//	printf(" �̸� : %s\n", cats[selected].name);
	//	printf(" ��ȣ : %s\n", cats[selected].number);
	//	printf(" ���� : %s\n", cats[selected].character);
	//	printf(" Ÿ�� : %s\n", cats[selected].type);
	//	/*printf("\n\n\t��\n\n");*/
	//}
	else
	{
		printf("\n\n--- ���ϸ��� ���Ծ��!! ---\n\n");
		printf(" �̸� : %s\n", cats[9].name);
		printf(" ��ȣ : %s\n", cats[9].number);
		printf(" ���� : %s\n", cats[9].character);
		printf(" Ÿ�� : %s\n", cats[9].type);
		collection[9] = 1; // ����� �̱� ó��

		/*printf("\n\n\t��\n\n");*/
	}
	//else
	//{
	//	printf("\n\n��!!\n\n");
	//	/*printf("\n\n--- ���ϸ��� ���Ծ��!! ---\n\n");
	//	printf(" �̸� : %s\n",cats[selected].name);
	//	printf(" ��ȣ : %d\n",cats[selected].number);
	//	printf(" ���� : %s\n",cats[selected].character);
	//	printf(" Ÿ�� : %s\n", cats[selected].type);*/
	//	/*printf(" ���� : ");*/


	//	/*for (int i = 0; i < cats[selected].level; i++)
	//	{
	//		printf("%s", "��");
	//	}*/
	//	printf("\n\n");
	//}
	
}


int checkCollection()
{
	// ���� ������ ����� ��� ��� , 
	// �� ��Ҵ��� ���θ� ��ȯ
	int collectAll = 1;


	printf("\n\n ----------- ������ ����� ��� ------------ \n\n");
	for (int i = 0; i < 10; i++)
	{
		if (i == 5) {
			printf("\n");
		}
		if (collection[i] == 0) // ����� ���� X
		{
			printf("%9s", "��");


			collectAll = 0; // �� ������ ���� ����
		}
		else // ����� ���� O
		{

			printf("%9s", cats[i].name);
		}
	}
	printf("\n\n--------------------------------------------\n\n");

	if (collectAll) // ��� ����̸� �� ���� ���
	{
		printf("\n\n �����մϴ�! ��� ����̸� �� ��Ҿ��!!\n\n\n");
	}

	return collectAll;
}

