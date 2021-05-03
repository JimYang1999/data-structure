# Ackermans-function
data structure in C --Ackermans function
- 分析<br>
   - Base Case：if m==0 ⇒ return n+1
   - General Case：if m>0 & n==0 ⇒ return Ackermans(m-1, 1)
   - Otherwise ⇒ return Ackermans(m-1, Ackermans(m, n-1))
--------------
- 程式撰寫
```
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
```
