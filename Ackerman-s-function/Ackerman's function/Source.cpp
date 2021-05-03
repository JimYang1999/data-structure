#include<stdio.h>
#include<stdlib.h>
int Ack(int m, int n);
int main()
{
	int m, n;
	printf("請輸入兩數:");
	scanf_s("%d %d", &m, &n);
	printf("結果為:%d", Ack(m, n));
}
int Ack(int m,int n)
{
	if (m == 0)
		return (n + 1);
	else if (n == 0)
		return(Ack(m - 1, 1));
	else
		return (Ack((m - 1), Ack(m, n - 1)));
}