#include<stdio.h>
#include<stdlib.h>
int binominal(int n, int m);
int main()
{
	int n, m;
	printf("請輸入兩數字:");
	scanf_s("%d %d", &n, &m);
	printf("答案為:%d", binominal(n, m));
}
int binominal(int n, int m)
{
	if (m == 0 || m == n)
		return 1;
	else
		return(binominal(n - 1, m) + binominal(n - 1, m - 1));
}