# Greatest-Common-Divisor-GCD
data structure in C --GCD<br>
- recursive algorithm
```
procedure GCD(m,n)
  begin
    if(n=0) then GCD=m
      else GCD=GCD(n,m mod n)
    end if 
  end;
```
  - non-recursive algorithm
```
procedure GCD(m,n)
  begin
    while n != 0 do
      r=m mod n
      m = n
      n = r
    end of while 
    return (m)
  end;
```
--------------
- 3.程式撰寫
```
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
```
