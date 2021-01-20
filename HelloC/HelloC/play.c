#include <stdio.h>

int main(void)
{
	int arr[3] = { 1, 2, 3 };
	//int* ptr = arr;

	printf("arr 자체의 값: %d\n", arr);
	printf("arr 자체의 값: %d\n", arr[0]);
	printf("arr 자체의 값: %d\n", &arr[0]);
	printf("arr 자체의 값: %d\n", *arr); // *(arr + 0)
	printf("arr 자체의 값: %d\n", *&arr[0]);
	printf("arr 자체의 값: %d\n", arr[2]);
	printf("arr 자체의 값: %d\n", *(arr + 0));

	
	printf("arr 자체의 값: %d\n", arr[1]);



	






	return 0;
}