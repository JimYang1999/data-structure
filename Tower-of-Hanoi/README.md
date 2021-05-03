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
![image](https://github.com/azxa318258p/Tower-of-Hanoi/blob/12e5c516e79e5dd3abdaf996042e9986516345bf/Hanoi.jpg)
![image](https://github.com/azxa318258p/Tower-of-Hanoi/blob/8e0d325a1ada03cd9abc32d1891db8a69aac4904/Hanoi.PNG)
 - Time Complexity
![image](https://github.com/azxa318258p/Tower-of-Hanoi/blob/41c49fc32694166193403734ef9ecbc12dde8dc0/HanoiTimeComplexity.jpg)
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
