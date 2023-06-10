#include<stdio.h>
#include<stdlib.h>
void string(char *string ,char *substring)
{
	char *bass=substring;
	char *find=substring;
	char *start=substring;
	char *again=substring;
	char b[10];
		char *sa=b;
		int j1=0;
		int iunt=0;
	int sub=0;
	int isum=0;
	int icnt=0;
	int sum=0;
	int *arr=NULL;
	char *s=substring;
	char *p=string;
	while(*s != '\0')
	{
		icnt++;
		isum++;
		sum++;
		s++;
	}
	s--;
	arr=(int*)malloc(sizeof(int)*sum);
	while(*string != '\0')
	{
		if(*string == *substring)
		{
			p=string;
			int i=0;
			while(icnt-1>0)
			{
				string++;
				substring++;
				icnt--;
				sub++;
			}
				
		}
		
		string++;
	}
	
	
	
	sub=sub+1;
	
	if(sum==sub)
	{
		printf("substring found sucessfully\n");
		while(sum>0)
		{
			*p=*s;
			p++;
			s--;
			sum--;
		}
		char a='\0';
		int i=0;
		int icnt2=0;
		while(*find != '\0')
		{
			a=*find;
			while(*start != '\0')
			{
				if(a==*start)
				{
					icnt2++;
				}
				start++;
			}
			
			find++;
			start=again;
			arr[i]=icnt2;
			i++;
			icnt2=0;
			
		}
		while(*bass != '\0')
		{
			bass++;
			
		}
		bass--;
		
		char b[10];
		char *sa=b;
		int j=0;
		char *g=again;
		*sa='\0';
		while(isum>0)
		{
				while(*sa != '\0')
				{
					if(*sa==*again)
					{
						
						g=again;
					
						if(*g++ == *sa)
						{
							while(*g !='\0')
							{
								if(*g==*sa)
								{
									again++;
									j++;
									isum--;
								}
								g++;
							}
						}
						again++;
						j++;
						isum--;
					}
					sa++;
				}
				printf("the occurance of %c is %d\n",*again,arr[j]);
				*sa=*again;
				again++;
				j++;
				isum--;
				
				
				if(*sa==*bass)
				{
					return;
				}
				sa++;
				*sa='\0';
				sa=b;
				
				
			
				
		}
		
	
		
	
	}
		
}
int main()
{
	char aar[100];
	char brr[30];

	printf("enter the string\n");
	scanf("%[^'\n']s",aar);
	fflush(stdin);
	printf("enter the substring\n");
	scanf("%[^'\n']s",brr);
	
	string(aar,brr);
	printf("the new string is : %s\n",aar);

	return 0;
}