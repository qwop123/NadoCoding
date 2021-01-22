#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



// 비밀번호를 입력 받아서

// 맞는 경우 , 비밀 일기를 읽어와서 보여주고 , 계속 작성

// 틀린 경우 , 경고 메시지를 표시하고 종료합니다.

#define MAX 10000




int main(void)
{

	// fgets , fputs 활용
	char line[MAX]; // 파일에서 불러온 내용을 저장할 변수
	char contents[MAX]; // 일기장에 입력할 내용
	char password[20]; // 비밀번호 입력
	char c; // 비밀번호 입력 할때 키값 확인용 ( 비밀번호 ******* ) 마스킹 

	printf("\t┌────────────────────────┐\n");
	printf("\t│ ★★★비 밀 일 기★★★│\n");
	printf("\t└────────────────────────┘\n");
	printf("\n\t비밀번호: ");
	
	// getchar();  /  getch(); 차이

	// getchar(); 엔터를 입력받아야 동작
	// getch(): 키 입력 시 바로바로 동작

	int i = 0;

	while (1)
	{
		c = getch();
		if (c == 13) // Enter 아스키 코드 -> 비밀번호 입력 종료
		{
			password[i] = '\0';
			break;
		}
		else if (c == 8)
		{			
			printf("\b");
			printf(" ");
			printf("\b");
		}
		else // 비밀번호 입력 중
		{
			printf("*");
			password[i] = c;
		}
		i++;
	}

	printf("\n\n\t ... 비밀번호 확인중 ...\n\n");
	
	if (strcmp(password, "skehzheld") == 0) // 비밀번호 일치
	{
		printf("\t ( 비밀번호 확인 완료 )\n\n");
		char* fileName = "C:\\Users\\sueng\\Desktop\\secretdiary.txt";
		FILE* file = fopen(fileName, "a+b"); // 파일이 없으면 생성 , 파일이 있으면 내용추가
		if (file == NULL)
		{
			printf("파일 열기 실패\n");
			return 1;
		}

		while (fgets(line, MAX, file) != NULL)
		{
			printf("\t%s", line);
		}

		printf("\n내용을 계속 작성하세요! ※ exit 입력시 종료됩니다.\n\n\t");

		while (1)
		{
			scanf("%[^\n]", contents); // 새 줄\n 이 나오기 전까지 읽어드림 ( 한 문장씩 저장)
			getchar(); // Enter 입력 (\n) Flush 처리 

			if (strcmp(contents, "exit") == 0)
			{
				printf("비밀일기를 저장 후 입력을 종료합니다\n\n");
				break;
			}
			fputs(contents, file);
			fputs("\n", file); // Enter 를 위에서 무시 처리 하였으므로 임의로 추가
		}
		fclose(file);
	}
	else // 비밀번호 틀린 경우
	{
		printf("비밀번호가 틀렸습니다\n\n");
	}


	return 0;
}