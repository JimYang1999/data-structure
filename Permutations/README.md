# Permutations
data structure in C --Permutations

- 分析<br>
   若資料為{a,b,c}，可以發現一個用來排列組合的簡單演算法
   - a之後接著(b,c)所有的排列
   - b之後接著(a,c)所有的排列
   - c之後接著(a,b)所有的排列
--------------
- 程式撰寫
```
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SWAP(x,y,t) ((t)=(x) , (x)=(y) , ((y)=(t)))
void perm(char*, int, int);
int main()
{
	char list[] = "abc";
	int n = strlen(list);
	perm(list, 0, n);
}
void perm(char* list, int i, int n)
{
	int j, temp;
	if (i == n)
	{
		for (j = 0; j < n; j++)
		{
			printf("%c", list[j]);
		}
		printf("  ");
	}
	else
	{
		for (j = i; j < n; j++)
		{
			SWAP(list[i], list[j], temp);
			perm(list, i + 1, n);
			SWAP(list[i], list[j], temp);
		}
	}
}
```
- Trace
	![image](https://github.com/azxa318258p/data-structure/blob/37d6807af05819f1317279342a097e90fda0f53a/Permutations/93D170DA-3D26-4F18-8914-AB32A1316F6C.png)
