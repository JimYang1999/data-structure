#include<stdio.h>
#include<stdlib.h>
void Hanoi(int, char, char, char);
int time = 0;
void main()
{
	int n;
	printf("Enter the number of disks : ");
	scanf_s("%d", &n);
	printf("The sequence of moves involved in the Tower of Hanoi are \n");
	Hanoi(n, 'A', 'B', 'C');
	printf("¦@²¾°Ê%d¦¸", time);
}
void Hanoi(int n, char A, char B, char C)
{
	if (n == 1)
	{
		printf("move disc %d from %c to %c\n", n, A, C);
		time++;
	}
	else
	{
		Hanoi(n - 1, A, C, B);
		printf("move disc %d from %c to %c\n", n, A, C);
		time++;
		Hanoi(n - 1, B, A, C);
	}
}