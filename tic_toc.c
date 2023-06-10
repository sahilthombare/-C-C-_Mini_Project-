#include<stdio.h>
void display();
void i_display();
void assign();
void player1();
void player2();
int i_check();
int full();
int arr[3][3]={0};
int i,j,ipos;
int main(void)
{
	int icnt;
	printf("player 1 is : X   \t\t player 2 is : 0\n\n");
	printf("--------------------\n");
	display();
	while(1)
	{		
			icnt=i_check();
			if(icnt==1)
				break;
			icnt=full();
			if(icnt==1)
				break;
			printf("\nplayer 1 : ( X ) turn\n");
			player1(88);
			icnt=i_check();
			if(icnt==1)
				break;
			icnt=full();
			if(icnt==1)
				break;
			printf("\nplayer 2 : ( 0 ) turn\n");
			player2(0);
			icnt=i_check();
			if(icnt==1)
				break;
			icnt=full();
			if(icnt==1)
				break;
			
		
	}
	
	return 0;
}

int full()
{
			int icnt=0;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					if(arr[i][j]==88 || arr[i][j]==0)
						icnt++;
				}
			}
			if(icnt==9)
			{
				printf("\n !! GAME OVER ITS A DRAW !! \n");
				return 1;
			}
			else
				return -1;
}

void display(void)
{
	int icnt=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			icnt++;
			arr[i][j]=icnt;
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
		printf("--------------------\n");
	}
}
void player1(int a)
{
	printf("enter the position\n");
	scanf("%d",&ipos);
	assign(a,ipos);
}

void player2(int a)
{
	printf("enter the position\n");
	scanf("%d",&ipos);
	assign(a,ipos);
}

void assign(int a, int ipos)
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			if(ipos==arr[i][j])
				arr[i][j]=a;
		}
		printf("\n");
	}
	i_display();
}

void i_display(void)
{
	printf("--------------------\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]==88)
				printf("%c\t",arr[i][j]);
			else
				printf("%d\t",arr[i][j]);
		}
		printf("\n");
		printf("--------------------\n");
	}
}

int i_check(void)
{
	if(arr[0][0]==arr[0][1]  &&  arr[0][0]==arr[0][2])
	{
		if(arr[0][0]==88)
			printf("!! PLAYER 1 WON !!\n");
		else
			printf("!! PLAYER 2 WON !!\n");
		return 1;
	}
	if(arr[0][0]==arr[1][0]  &&  arr[0][0]==arr[2][0])
	{
		if(arr[0][0]==88)
			printf("!! PLAYER 1 WON !!\n");
		else
			printf("!! PLAYER 2 WON !!\n");
		return 1;
	}
	if(arr[2][0]==arr[2][1]  &&  arr[2][0]==arr[2][2])
	{
		if(arr[2][0]==88)
			printf("!! PLAYER 1 WON !!\n");
		else
			printf("!! PLAYER 2 WON !!\n");
		return 1;
	}
	
	if(arr[0][2]==arr[1][2]  &&  arr[0][2]==arr[2][2])
	{
		if(arr[0][2]==88)
			printf("!! PLAYER 1 WON !!\n");
		else
			printf("!! PLAYER 2 WON !!\n");
		return 1;
	}
	if(arr[1][0]==arr[1][1]  &&  arr[1][0]==arr[1][2])
	{
		if(arr[1][0]==88)
			printf("!! PLAYER 1 WON !!\n");
		else
			printf("!! PLAYER 2 WON !!\n");
		return 1;
	}
	if(arr[0][0]==arr[1][1]  &&  arr[0][0]==arr[2][2])
	{
		if(arr[0][0]==88)
			printf("!! PLAYER 1 WON !!\n");
		else
			printf("!! PLAYER 2 WON !!\n");
		return 1;
	}
	
	if(arr[0][2]==arr[1][1]   &&  arr[0][2]==arr[2][0])
	{
		if(arr[0][2]==88)
			printf("!! PLAYER 1 WON !!\n");
		else
			printf("!! PLAYER 2 WON !!\n");
		return 1;
	}
	return -1;
}