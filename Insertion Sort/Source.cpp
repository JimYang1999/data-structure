#include<stdio.h>
#include<stdlib.h>
#include <time.h>
void InsertionSort(int[], int);
void printarray(int[], int);
int main()
{
	srand(time(NULL));
	int array[6];
	int size = 6;
	for (int i = 0; i < 6; i++)
	{
		int x = rand() % (10 - 0 + 1); //¶Ã¼Æ0~10
		array[i] = x;
		printf("%d ",array[i]);
	}
	InsertionSort(array, size);
	return 0;
}
void InsertionSort(int *array, int size)
{
	for (int i = 1; i < size; i++)
	{
		int key = array[i];
		int j = i - 1;
		while (key < array[j] && j>=0)
		{
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = key;
	}
	printarray(array,size);
}
void printarray(int* array, int size)
{
	printf("\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
}