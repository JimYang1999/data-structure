#include<stdio.h>
#include<stdlib.h>
int GCD(int m, int n);
int main()
{
	int m, n;
	printf("�п�J��ӼƦr:");
	scanf_s("%d %d", &m,&n);
	printf("�̤j���]�Ƭ�%d",GCD(m, n));
}
int GCD(int m,int n)
{
	if (n == 0) return m;
	else
		return GCD(n, m % n);
}