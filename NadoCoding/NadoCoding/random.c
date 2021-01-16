#include <stdio.h>

#include <stdlib.h> // rand()함수 포함 라이브러리

#include <time.h> // time()함수 포함 라이브러리



int main()

{

	srand(time(NULL)); // 매번 다른 시드값 생성

	int random = 0; // 정수형 변수 선언

	for (int i = 0; i < 10; i++) { // 10번 반복

		random = rand() % 9 + 1; // 난수 생성

		printf("%d\n", random); // 출력

		printf("\n%d단 계산\n", random);
		for (int j = 1; j <= 9; j++)
		{
			printf(" %d x %d = %d\n", random, j, random * j);
		}
		printf("\n\n");
	}
	
}
