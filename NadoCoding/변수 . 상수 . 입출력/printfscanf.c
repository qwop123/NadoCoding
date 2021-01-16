#include <stdio.h>
int main(void)
{ 
	// 정수형 변수에 대한 예제
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);

	printf("1\n");
	//printf("2\n");
	printf("3\n"); */

	/* 정수 -1 -2 0 , 실수 2.0 , 2.1 , 변수 (나이) 상수
	%d 정수형 값 ,age 값이 위치에 들어옴
	주석 (설명문) 프로그램 실행 영향x //~~ , /* ~~ * / */ 

	// 실수형 변수에 대한 예제
	/*float f = 46.5f;         // float 쓸때는 숫자뒤에 f 써주기
	printf("%.1f\n", f);
	f = 42.5f;
	printf("%.1f\n", f);

	double d = 4.428;
	printf("%.2lf\n", d);     // %.소수점자리 표시     

	// 상수의 개념
	/*const int YEAR = 2000;
	printf("태어난 년도 : %d\n", YEAR);
	//YEAR = 2001; */

	
	// printf
	// 연산
	/*int add = 3 + 7; //10
	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3 + 7);
	printf("%d x %d = %d\n", 3, 7, 3 * 7); */


	// scanf
	// 키보드 입력을 받아서 저장
	/* int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input); */


	/* int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three); */

	// 문자(한 글자) , 문자열 (한 글자 이상의 여러 글자)
	/*char c = 'A';
	printf("%c\n", c); */

	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str); */


	// 프로젝트
	// 경찰관이 범죄자의 정보를 입수 (조서 작성)
	// 이름? 나이? 몸무게? 키? 범죄명?
	char name[256];
	printf("이름이 뭐예요?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇살이예요?");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇 kg 이예요?");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇 cm이예요?");
	scanf_s("%lf", &height);

	char what[256];
	printf("무슨 범죄를 저질렀어요?");
	scanf_s("%s", what, sizeof(what));

	// 조서 내용 출력
	printf("\n\n---범죄자 정보 ---\n\n");
	printf(" 이름        : %s\n", name);
	printf(" 나이        : %d\n", age);
	printf(" 몸무게      : %.2f\n", weight);
	printf(" 키          : %.1lf\n", height);
    printf(" 범죄명      : %s\n", what);









	return 0;
}