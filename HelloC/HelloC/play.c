#include <stdio.h>

int main(void)
{
	int arr[3] = { 1, 2, 3 };
	//int* ptr = arr;

	printf("arr ��ü�� ��: %d\n", arr);
	printf("arr ��ü�� ��: %d\n", arr[0]);
	printf("arr ��ü�� ��: %d\n", &arr[0]);
	printf("arr ��ü�� ��: %d\n", *arr); // *(arr + 0)
	printf("arr ��ü�� ��: %d\n", *&arr[0]);
	printf("arr ��ü�� ��: %d\n", arr[2]);
	printf("arr ��ü�� ��: %d\n", *(arr + 0));

	
	printf("arr ��ü�� ��: %d\n", arr[1]);



	






	return 0;
}