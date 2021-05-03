#include<stdio.h>
#include<stdlib.h>
int GCD(int m, int n);
int main()
{
	int m, n;
	printf("請輸入兩個數字:");
	scanf_s("%d %d", &m,&n);
	printf("最大公因數為%d",GCD(m, n));
}
int GCD(int m,int n)
{
	if (n == 0) return m;
	else
		return GCD(n, m % n);
}