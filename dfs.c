#include<stdio.h>

int visited[5]={1,0,0,0,0};
int stack[5];
int g[5][5]={{0,1,1,1,1},{1,0,0,0,0},{1,0,0,0,0},{1,0,0,0,1},{0,0,0,1,0}};
int u;
int top=0;

void push(int x)
{
	stack[++top]=x;
}
void pop()
{
	printf("%d ",stack[top]);
	top--;
}

int main()
{
	stack[0]=0;
	int i;
	while(top!=-1)
	{
		u=stack[top];
		pop();
		for(i=0;i<5;i++)
		{
			if(g[i][u]==1 && visited[i]==0)
			{
				push(i);
				visited[i]=1;
			}
		}
	}
	return 0;
}
