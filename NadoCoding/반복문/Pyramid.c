#include <stdio.h>


int main(void)
{
	/*printf("피라미드");
	printf("피라미드");
	printf("피라미드");
	printf("피라미드");
	printf("피라미드");
	printf("피라미드");
	printf("피라미드");
	printf("피라미드");
	printf("피라미드");

	*/

	// ++ 뿔뿔
	/*int a = 10;
	printf("a 는 %d\n", a);
	a++;
	printf("a 는 %d\n", a);
	a++;
	printf("a 는 %d\n", a);*/

	//int b = 20;
	//printf("b 는 %d\n", ++b);  // b = b + 1
	//printf("b 는 %d\n", b++);
	//printf("b 는 %d\n", b);

	/*int i = 1;
	printf("Hello World %d\n", i++);*/


	// 반복문 


	//// for (선언; 조건; 증감)

	//for (int i = 1; i <= 51; i++)
	//{
	//	printf("51까지증가한다요 %d\n", i);
	//}

	//
	//
      	
	// while (조건) {   }
	
	//int i = 1;
	//while (i <= 10)
	//{
	//	printf("Hello World %d\n", i++);
	//	//i++;
	//}


	// do {   } while ( 조건 ) ;


	// 2중 반복문

	//int i = 1;
	//while (i <= 10)
	//{
	//	printf("Hello World%d\n", i++);
	//}

	//for (int i = 1; i <= 3; i++)
	//{
	//	printf("첫 번째 반복문 : %d\n", i);

	//	for (int j = 1; j <= 5; j++)
	//	{
	//		printf("두 번째 반복문 : %d\n", j);

	//		for (int k = 1; k <= 7; k++)
	//		{
	//			printf("세 번째 반복문 : %d\n", k);
	//		}
	//	} 


	//}

	// 구구단
	// 2 x 1 = 2
	// 2 x 2 = 4

	//for (int i = 2; i <= 9; i++)
	//{
	//	printf("%d단계 구구단\n", i);
	//	printf("\n");
	//	for (int j = 1; j <= 9; j++)
	//	{
	//		printf(" %d X %d = %d\n", i, j, i * j);
	//	}
	//	printf("\n\n");
	//}

	
	/**
	**
    ***
	****
	*****	*/

	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/





























    //SSSS*
	//SSS**
	//SS***
	//S****
	//*****

  //      for (int i = 0; i < 10; i++)
		//{
		//	for (int j = i; j < 10 - 1; j++)
		//	{
		//		printf(" ");
		//	}
		//	for ( int p = 0; p <= i; p++)
		//	{
		//		printf("*");
		//	}
		//	printf("\n");











//SSSS*
//SSS***
//SS*****
//S*******
//*********


		
		int floor;
		printf("몇층까지 쌓을까요?\n");
		scanf_s("%d", &floor);
		printf("\n\n");
;		for (int i = 0; i < floor; i++)
		{
			
			for (int j = i; j < floor; j++)
			{
				printf(" ");
			}
			for (int p = 0; p < i * 2 + 1; p++)
			{
				printf("*");
			}
				printf("\n");
		}




  

























		








		
		
		
		
		
		return 0;

}