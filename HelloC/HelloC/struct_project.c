#include <stdio.h>
#include <time.h>

// 5마리의 고양이가 있다
// 아무 키나 눌러서 랜덤으로 고양이를 뽑되.
// 5마리 모두 다 수집을 해서 열심히 키우면 되는 게임!
// 중복 발생 가능 !

// 고양이
// 이름 , 나이 , 성격 , 키우기 난이도 (레벨)

typedef struct {
	char* name; // 이름 
	char* age; // 나이
	char* character; // 성격
	char* level; // 키우기 난이도 ( 1 ~ 5 , 5가 어려움 )
	char* number;
	char* type;

} CAT;


// 현재까지 보유한 고양이
int collection[10];

// 전체 고양이 리스트
CAT cats[10];

void initCats(); // 고양이 정보 초기화
void printCat(int selected);




int main(void)
{
	srand(time(NULL));

	
	
	initCats();
	while (1)
	{
		printf("두근두근~! 어떤 고양이가 나올까요?\n아무 키나 눌러서 확인하세요!");
		getchar();

		int selected = rand() % 100; // 0 ~ 99 사이의 숫자 반환
		printf("랜덤값 : %d\n", selected);
		printCat(selected); // 뽑은 고양이 정보 출력

		int collectAll = checkCollection();
		if (collectAll == 1)
			break;
	}

	return 0;
}

void initCats()
{
	cats[0].name = "펄기아";
	cats[0].number = "NO. 484";
	cats[0].character = "신화에 등장하는 포켓몬이다.";
	cats[0].type = "물, 드래곤";

	cats[1].name = "디아루가";
	cats[1].number = "NO. 483";
	cats[1].character = "전설이 내려오는 포켓몬이다.";
	cats[1].type = "강철, 드래곤";

	cats[2].name = "고라파덕";
	cats[2].number = "NO. 054";
	cats[2].character = "언제나 두통에 시달린다.";
	cats[2].type = "물";

	cats[3].name = "푸린";
	cats[3].number = "NO. 039";
	cats[3].character = "상대가 잠들 때까지 자장가를 부른다.";
	cats[3].type = "노말, 페어리";

	cats[4].name = "피죤";
	cats[4].number = "NO. 017";
	cats[4].character = "발톱이 발달해 있다.";
	cats[4].type = "노말, 비행";

	cats[5].name = "버터플";
	cats[5].number = "NO. 012";
	cats[5].character = "매우 빠르게 날개짓한다.";
	cats[5].type = "벌레, 비행";

	cats[6].name = "이상해씨";
	cats[6].number = "NO. 001";
	cats[6].character = "등에 식물의 씨앗이 있으며 조금씩 자란다.";
	cats[6].type = "풀, 독";

	cats[7].name = "꼬부기";
	cats[7].number = "NO. 007";
	cats[7].character = "물대포를 발사한다.";
	cats[7].type = "물";

	cats[8].name = "파이리";
	cats[8].number = "NO. 025";
	cats[8].character = "만들어 내는 전기가 강력한 피카츄일수록 볼의 주머니가 부드럽고 잘 늘어난다.";
	cats[8].type = "전기";

	cats[9].name = "피카츄";
	cats[9].number = "NO. 004";
	cats[9].character = "뜨거운 것을 좋아하는 성격이다.";
	cats[9].type = "불꽃";

	}

void printCat(int selected)
{

	if(selected == 0)
	{
		printf("\n\n--- 포켓몬이 나왔어요!! ---\n\n");
		printf(" 이름 : %s\n", cats[0].name);
		printf(" 번호 : %s\n", cats[0].number);
		printf(" 성격 : %s\n", cats[0].character);
		printf(" 타입 : %s\n", cats[0].type);
		/*printf("\n\n\t꽝\n\n");*/
		collection[0] = 1; // 고양이 뽑기 처리
	}
	else if (selected == 1)
	{
		printf("\n\n--- 포켓몬이 나왔어요!! ---\n\n");
		printf(" 이름 : %s\n", cats[1].name);
		printf(" 번호 : %s\n", cats[1].number);
		printf(" 성격 : %s\n", cats[1].character);
		printf(" 타입 : %s\n", cats[1].type);
		/*printf("\n\n\t꽝\n\n");*/
		collection[1] = 1; // 고양이 뽑기 처리
	}
	else if (selected >= 2 && selected <= 9)
	{
		printf("\n\n--- 포켓몬이 나왔어요!! ---\n\n");
		printf(" 이름 : %s\n", cats[2].name);
		printf(" 번호 : %s\n", cats[2].number);
		printf(" 성격 : %s\n", cats[2].character);
		printf(" 타입 : %s\n", cats[2].type);
		/*printf("\n\n\t꽝\n\n");*/
		collection[2] = 1; // 고양이 뽑기 처리

	}
	else if (selected >= 10 && selected < 20)
	{
		printf("\n\n--- 포켓몬이 나왔어요!! ---\n\n");
		printf(" 이름 : %s\n", cats[3].name);
		printf(" 번호 : %s\n", cats[3].number);
		printf(" 성격 : %s\n", cats[3].character);
		printf(" 타입 : %s\n", cats[3].type);
		/*printf("\n\n\t꽝\n\n");*/
		collection[3] = 1; // 고양이 뽑기 처리

	}
	else if (selected >= 20 && selected < 30)
	{
		printf("\n\n--- 포켓몬이 나왔어요!! ---\n\n");
		printf(" 이름 : %s\n", cats[4].name);
		printf(" 번호 : %s\n", cats[4].number);
		printf(" 성격 : %s\n", cats[4].character);
		printf(" 타입 : %s\n", cats[4].type);
		/*printf("\n\n\t꽝\n\n");*/
		collection[4] = 1; // 고양이 뽑기 처리

	}
	else if (selected >= 30 && selected < 40) 
	{
		printf("\n\n--- 포켓몬이 나왔어요!! ---\n\n");
		printf(" 이름 : %s\n", cats[5].name);
		printf(" 번호 : %s\n", cats[5].number);
		printf(" 성격 : %s\n", cats[5].character);
		printf(" 타입 : %s\n", cats[5].type);
		/*printf("\n\n\t꽝\n\n");*/
		collection[5] = 1; // 고양이 뽑기 처리

	}
	else if (selected >= 40 && selected < 55)
	{
		printf("\n\n--- 포켓몬이 나왔어요!! ---\n\n");
		printf(" 이름 : %s\n", cats[6].name);
		printf(" 번호 : %s\n", cats[6].number);
		printf(" 성격 : %s\n", cats[6].character);
		printf(" 타입 : %s\n", cats[6].type);
		/*printf("\n\n\t꽝\n\n");*/
		collection[6] = 1; // 고양이 뽑기 처리

	}
	else if (selected >= 56 && selected < 70)
	{
		printf("\n\n--- 포켓몬이 나왔어요!! ---\n\n");
		printf(" 이름 : %s\n", cats[7].name);
		printf(" 번호 : %s\n", cats[7].number);
		printf(" 성격 : %s\n", cats[7].character);
		printf(" 타입 : %s\n", cats[7].type);
		/*printf("\n\n\t꽝\n\n");*/
		collection[7] = 1; // 고양이 뽑기 처리

	}
	else if (selected >= 71 && selected < 85)
	{
		printf("\n\n--- 포켓몬이 나왔어요!! ---\n\n");
		printf(" 이름 : %s\n", cats[8].name);
		printf(" 번호 : %s\n", cats[8].number);
		printf(" 성격 : %s\n", cats[8].character);
		printf(" 타입 : %s\n", cats[8].type);
		collection[8] = 1; // 고양이 뽑기 처리

		/*printf("\n\n\t꽝\n\n");*/
	}
	//else if (91 < selected < 100)
	//{
	//	printf("\n\n--- 포켓몬이 나왔어요!! ---\n\n");
	//	printf(" 이름 : %s\n", cats[selected].name);
	//	printf(" 번호 : %s\n", cats[selected].number);
	//	printf(" 성격 : %s\n", cats[selected].character);
	//	printf(" 타입 : %s\n", cats[selected].type);
	//	/*printf("\n\n\t꽝\n\n");*/
	//}
	else
	{
		printf("\n\n--- 포켓몬이 나왔어요!! ---\n\n");
		printf(" 이름 : %s\n", cats[9].name);
		printf(" 번호 : %s\n", cats[9].number);
		printf(" 성격 : %s\n", cats[9].character);
		printf(" 타입 : %s\n", cats[9].type);
		collection[9] = 1; // 고양이 뽑기 처리

		/*printf("\n\n\t꽝\n\n");*/
	}
	//else
	//{
	//	printf("\n\n꽝!!\n\n");
	//	/*printf("\n\n--- 포켓몬이 나왔어요!! ---\n\n");
	//	printf(" 이름 : %s\n",cats[selected].name);
	//	printf(" 번호 : %d\n",cats[selected].number);
	//	printf(" 성격 : %s\n",cats[selected].character);
	//	printf(" 타입 : %s\n", cats[selected].type);*/
	//	/*printf(" 레벨 : ");*/


	//	/*for (int i = 0; i < cats[selected].level; i++)
	//	{
	//		printf("%s", "★");
	//	}*/
	//	printf("\n\n");
	//}
	
}


int checkCollection()
{
	// 현재 보유한 고양이 목록 출력 , 
	// 다 모았는지 여부를 반환
	int collectAll = 1;


	printf("\n\n ----------- 보유한 고양이 목록 ------------ \n\n");
	for (int i = 0; i < 10; i++)
	{
		if (i == 5) {
			printf("\n");
		}
		if (collection[i] == 0) // 고양이 수집 X
		{
			printf("%9s", "□");


			collectAll = 0; // 다 모으지 못한 상태
		}
		else // 고양이 수집 O
		{

			printf("%9s", cats[i].name);
		}
	}
	printf("\n\n--------------------------------------------\n\n");

	if (collectAll) // 모든 고양이를 다 모은 경우
	{
		printf("\n\n 축하합니다! 모든 고양이를 다 모았어요!!\n\n\n");
	}

	return collectAll;
}

