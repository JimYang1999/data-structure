# Insertion Sort
data structure in C --Insertion Sort

- 分析<br>
  -將第i個數字加入「前i−1個數字」並排序，得到i張排序過的紙牌組合。
--------------
- 程式撰寫
```
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
void InsertionSort(int[], int);
void printarray(int[], int);
int main()
{
	srand(time(NULL));
	int array[6]; //設6個數字
	int size = 6; 
	for (int i = 0; i < 6; i++)
	{
		int x = rand() % (10 - 0 + 1); //亂數0~10
		array[i] = x; //將亂數的值加入陣列中
		printf("%d ",array[i]); //顯示出來
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
```
