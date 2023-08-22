// tic tac toe two player game implemented in c++

#include<iostream>
using namespace std;

class play
{
    public:
        int arr[3][3];
        int i,j,ipos;

        play(void);
        void drive(void);
        void display(void);
        void i_display(void);
        void assign(int a, int ipos);
        void player1(int a);
        void player2(int a);
        int i_check(void);
        int full(void);
        ~play();

};



play :: play(void)
{
    arr[3][3]={0};
}



void play :: drive(void)
{

    int icnt;
	cout<<"player 1 is : X   \t player 2 is : 0\n\n";
	cout<<"--------------------\n";

	display();

	while(1)
	{		
			icnt=i_check();
			if(icnt==1)
				break;

			icnt=full();
			if(icnt==1)
				break;

			cout<<"\nplayer 1 : ( X ) turn\n";
			player1(88);
			icnt=i_check();
			if(icnt==1)
				break;

			icnt=full();
			if(icnt==1)
				break;
    
			cout<<"\nplayer 2 : ( 0 ) turn\n";
			player2(0);
			icnt=i_check();
			if(icnt==1)
				break;

			icnt=full();
			if(icnt==1)
				break;
				
	}

}


void play :: i_display(void)
{
    cout<<"--------------------\n";

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]==88)
				printf("%c\t",arr[i][j]);

			else
				cout<<arr[i][j]<<"\t";

		}

		cout<<"\n";
		cout<<"--------------------\n";
	}

}



void play :: display(void)
{
    int icnt=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			icnt++;
			arr[i][j]=icnt;
			cout<<arr[i][j]<<"\t";
		}

		cout<<"\n";
		cout<<"--------------------\n";

	}

}


void play :: assign(int a, int ipos)
{
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			if(ipos==arr[i][j])
				arr[i][j]=a;
		}
		cout<<"\n";
	}

	i_display();
}



void play :: player1(int a)
{
    cout<<"enter the position\n";
	cin>>ipos;
	assign(a,ipos);

}

void play :: player2(int a)
{
    cout<<"enter the position\n";
	cin>>ipos;
	assign(a,ipos);
}


int play :: i_check(void)
{
    if(arr[0][0]==arr[0][1]  &&  arr[0][0]==arr[0][2])
	{
		if(arr[0][0]==88)
			cout<<"!! PLAYER 1 WON !!\n";
		else
			cout<<"!! PLAYER 2 WON !!\n";
		return 1;
	}

	if(arr[0][0]==arr[1][0]  &&  arr[0][0]==arr[2][0])
	{
		if(arr[0][0]==88)
			cout<<"!! PLAYER 1 WON !!\n";
		else
			cout<<"!! PLAYER 2 WON !!\n";
		return 1;
	}

	if(arr[2][0]==arr[2][1]  &&  arr[2][0]==arr[2][2])
	{
		if(arr[2][0]==88)
			cout<<"!! PLAYER 1 WON !!\n";
		else
			cout<<"!! PLAYER 2 WON !!\n";
		return 1;
	}
	
	if(arr[0][2]==arr[1][2]  &&  arr[0][2]==arr[2][2])
	{
		if(arr[0][2]==88)
			cout<<"!! PLAYER 1 WON !!\n";
		else
			cout<<"!! PLAYER 2 WON !!\n";
		return 1;
	}

	if(arr[1][0]==arr[1][1]  &&  arr[1][0]==arr[1][2])
	{
		if(arr[1][0]==88)
			cout<<"!! PLAYER 1 WON !!\n";
		else
			cout<<"!! PLAYER 2 WON !!\n";
		return 1;
	}

	if(arr[0][0]==arr[1][1]  &&  arr[0][0]==arr[2][2])
	{
		if(arr[0][0]==88)
			cout<<"!! PLAYER 1 WON !!\n";
		else
			cout<<"!! PLAYER 2 WON !!\n";
		return 1;
	}
	
	if(arr[0][2]==arr[1][1]   &&  arr[0][2]==arr[2][0])
	{
		if(arr[0][2]==88)
			cout<<"!! PLAYER 1 WON !!\n";
		else
			cout<<"!! PLAYER 2 WON !!\n";
		return 1;
	}
	
	if(arr[0][1]==arr[1][1]   &&  arr[0][1]==arr[2][1])
	{
		if(arr[0][1]==88)
			cout<<"!! PLAYER 1 WON !!\n";
		else
			cout<<"!! PLAYER 2 WON !!\n";
		return 1;
	}

	return -1;
}


int play :: full(void)
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
		cout<<"\n !! GAME OVER ITS A DRAW !! \n";
	  	return 1;
	}
	else
		return -1;

}


play :: ~play()
{
    cout<<"Application Terminated\n";
}


int main(void)
{
    play obj;
    obj.drive();

    return 0;
}