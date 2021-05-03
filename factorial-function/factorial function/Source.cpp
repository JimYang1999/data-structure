#include<stdio.h>
#include<stdlib.h>
int fact(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return (n * fact(n - 1));
	}
}
int main()
{
	int n;
	printf("請輸入階層數:");
	scanf_s("%d", &n);
	printf("%d階=%d",n, fact(n));

}