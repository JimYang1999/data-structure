# Tower-of-Hanoi
data structure in C --Tower of Hanoi
- recursive algorithm<br>
  ```
  procedure Hanoi(n,A,B,C)
    begin
      if n=1
        then write('move disc' ,n, 'from' ,A, 'to' ,C)
      else begin
        Hanoi(n-1,A,C,B)
        Write('move disc',n,'from',A,'to',C)
        Hanoi(n-1,B,A,C)
       end
      end if 
    end
    ```
![image](https://github.com/azxa318258p/data-structure/blob/cf094a8f57b62285a4a23a5a1af507adb69a2b35/Tower-of-Hanoi/Hanoi.jpg)
![image](https://github.com/azxa318258p/data-structure/blob/cf094a8f57b62285a4a23a5a1af507adb69a2b35/Tower-of-Hanoi/Hanoi.PNG)
 - Time Complexity
![image](https://github.com/azxa318258p/data-structure/blob/cf094a8f57b62285a4a23a5a1af507adb69a2b35/Tower-of-Hanoi/HanoiTimeComplexity.jpg)
--------------
- 程式撰寫
```
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
	printf("共移動%d次", time);
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
```
