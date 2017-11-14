#include <stdio.h>
#include <stdlib.h>

int size = 0;
int* stack;
int p = 0;

void push(int data);
void pop();
void PrintStack();

int main()
{
	unsigned int n;
	int ch;
	int x;
	
	printf("몇 칸의 스택을 만들까요: ");
	scanf("%u", &n);
	stack = (int*)malloc(sizeof(int) * n);
	size = n;
	printf("%d 칸의 스택 생성\n", n);
	system("pause");
	system("cls");
	
	while(1)
	{	
		printf("1은 push, 2는 pop, 3은 print, -1은 종료\n");
		scanf("%d", &ch);
		
		switch(ch)
		{
			case 1:
				printf("push할 데이터를 입력하세요: ");
				scanf("%d", &x);
				push(x);
				break;
			case 2:
				pop();
				break;
			case 3:
				PrintStack();
				break;
			case -1:
				return 0;
		}
		system("pause");
		system("cls");
	}
}


void push(int data)
{
	if(p == size)
	{
		printf("overflow\n");
		return;
	}
	stack[p++] = data;
}


void pop()
{
	if(p <= 0)
	{
		printf("underflow\n");
		return;
	}
	printf("%d\n", stack[--p]);
}

void PrintStack()
{
	int i, n = 0;
	
	printf("\n");
	for(i = p-1; i >= 0; --i)
	{
		printf("%d\n", stack[i]);
	}
}
