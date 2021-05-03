# factorial-function in C
data structure in C --factorial function

 - recursive algorithm
```
procedure Fact(int n)
  begin if(n=0) return(1);
    else return (n*Fact(n-1));
  end;
```
 - 程式撰寫
```
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
```
- 非遞迴寫法
```
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,sum=1;
	printf("請輸入n階層:");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		sum = sum * i;
	}
	printf("%d階層=%d", n, sum);
}
```
