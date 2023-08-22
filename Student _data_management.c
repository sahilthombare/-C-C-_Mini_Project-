#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[20];
	int rool;
	int marks;
	char add[10];
	struct student *next;
};
typedef struct student NODE;
typedef struct student * PNODE;
typedef struct student ** PPNODE;

void addatfirst(PPNODE head,int imarks2,int irool,char *name1,char *add1)
{
	char name2[20];
	char *s=name2;
	char add2[10];
	char *p=add2;
	int icnt1=0;
	int icnt2=0;
	while(*name1 != '\0')
	{
		*s=*name1;
		s++;
		name1++;
		icnt1++;
	}
	
	*s='\0';
	s=name2;
	while(*add1 != '\0')
	{
		*p=*add1;
		p++;
		add1++;
		icnt2++;
	}

	*p='\0';
	p=add2;	
	PNODE  newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	char  *q=newn->name;
	while(icnt1>0)
	{
		*q=*s;
		q++;
		s++;
		icnt1--;
	}
	
	*q='\0';
	char *z=newn->add;
	while(icnt2>0)
	{
		*z=*p;
		z++;
		p++;
		icnt2--;
	}
	*z='\0';
	newn->marks=imarks2;
	newn->rool=irool;
	newn->next=NULL;
	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		newn->next=*head;
		*head=newn;
	}
}

void display(PNODE head)
{
	while(head != NULL)
	{
		printf("name is : %s\n",head->name);
		printf("rool is : %d\n",head->rool);
		printf("marks is :%d\n",head->marks);
		printf("address is : %s\n",head->add);
		printf("\n");
		printf("=>\n");
		head=head->next;
		
	}
	printf("NULL\n");
}
int Count(PNODE head)
{
	int icnt=0;
	while(head != NULL)
	{
		icnt++;
		head=head->next;
	}
	return icnt;
}

void addatlast(PPNODE head,int imarks2,int irool,char *name1,char *add1)
{
	char name2[20];
	char *s=name2;
	char add2[10];
	char *p=add2;
	int icnt1=0;
	int icnt2=0;
	while(*name1 != '\0')
	{
		*s=*name1;
		s++;
		name1++;
		icnt1++;
	}
	
	*s='\0';
	s=name2;
	while(*add1 != '\0')
	{
		*p=*add1;
		p++;
		add1++;
		icnt2++;
	}

	*p='\0';
	p=add2;	
	PNODE  newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	char  *q=newn->name;
	while(icnt1>0)
	{
		*q=*s;
		q++;
		s++;
		icnt1--;
	}
	
	*q='\0';
	char *z=newn->add;
	while(icnt2>0)
	{
		*z=*p;
		z++;
		p++;
		icnt2--;
	}
	*z='\0';
	newn->marks=imarks2;
	newn->rool=irool;
	newn->next=NULL;
	
	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		PNODE temp=*head;
		while(temp->next != NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
		newn->next=NULL;
	}
}
void deletefirst(PPNODE head)
{
	if(*head ==  NULL)
	{
		return;
	}
	else  if((*head)->next==NULL)
	{
		free(*head);
		*head=NULL;
	}
	else
	{
		PNODE temp=*head;
		(*head)=(*head)->next;
		free(temp);
	}
}
void  deletelast(PPNODE head)
{
	if(*head==NULL)
	{
		return;
	}
	else if((*head)->next == NULL)
	{
		free(*head);
		*head=NULL;
	}
	else
	{
		PNODE temp=*head;
		while(temp->next->next != NULL)
		{
			temp=temp->next;
		}
		free(temp->next);
		temp->next=NULL;
	}
}
void failed(PNODE head)
{
	PNODE temp=head;
	int isum=Count(temp);
	int icnt=0;
	while(head != NULL)
	{
		if(head->marks < 35)
		{
			icnt++;
			printf("%s is failed\n",head->name);
		}
		head=head->next;
	}
	printf("the number of students failed are : %d\n",icnt);
	printf("the number of students passed are : %d\n",isum-icnt);
}
void addatpos(PPNODE head,int imarks2,int irool,char *name1,char *add1,int ipos1)
{
	
	int isize=Count(*head);
	if(ipos1<1 || ipos1>isize+1)
	{
		return;
	}
	if(ipos1==1)
	{
		addatfirst(head,imarks2,irool,name1,add1);
	}
	else if(ipos1==isize+1)
	{
		addatlast(head, imarks2,irool,name1,add1);
	}
	else
	{
		int icnt=1;
		char name2[20];
	char *s=name2;
	char add2[10];
	char *p=add2;
	int icnt1=0;
	int icnt2=0;
	while(*name1 != '\0')
	{
		*s=*name1;
		s++;
		name1++;
		icnt1++;
	}
	
	*s='\0';
	s=name2;
	while(*add1 != '\0')
	{
		*p=*add1;
		p++;
		add1++;
		icnt2++;
	}

	*p='\0';
	p=add2;	
	PNODE  newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	char  *q=newn->name;
	while(icnt1>0)
	{
		*q=*s;
		q++;
		s++;
		icnt1--;
	}
	
	*q='\0';
	char *z=newn->add;
	while(icnt2>0)
	{
		*z=*p;
		z++;
		p++;
		icnt2--;
	}
	*z='\0';
	newn->marks=imarks2;
	newn->rool=irool;
	newn->next=NULL;
	PNODE temp=*head;
	PNODE target=*head;
	while(icnt<ipos1-1)
	{
		temp=temp->next;
		icnt++;
	}
	target=temp->next;
	newn->next=target;
	temp->next=newn;

	}
	
}

void deleteatpos(PPNODE head,int ipos1)
{
	int isize=Count(*head);
	if(ipos1<1  || ipos1>isize+1)
	{
		return ;
	}
	if(ipos1==1)
	{
		deletefirst(head);
	}
	else if(ipos1==isize)
	{
		deletelast(head);
	}
	else
	{
		int icnt=1;
		PNODE target=*head;
		PNODE temp=*head;
		while(icnt<ipos1-1)
		{
			temp=temp->next;
			icnt++;
		}
		target=temp->next;
		temp->next=target->next;
		free(target);
		
	}
}

int main()
{
	PNODE first=NULL;
	char arr[20];
	char brr[20];
	int imarks=0;
	int irool=0;
	int ret=0;
	int ipos=0;
	int ioption=1;
	while(ioption != 0)
	{
		printf("----------------------------------------\n");
		printf("1: add student at first place \n");
		printf("2: delete the studnet at any position\n");
		printf("3: count thee nnumber of students\n");
		printf("4: display\n");
		printf("5: add student at last place\n");
		printf("6: delete student at first place\n");
		printf("7: delete student at last place\n");
		printf("8: count the students who are failed\n");
		printf("9: insert  the student at any position\n");
		printf("0: end the application\n");
		printf("-------------------------------------------\n");
		scanf("%d",&ioption);
	
	
		switch(ioption)
		{
			case 1:
				
				
				printf("enter the marks\n");
				scanf("%d",&imarks);
				printf("enter the rool no\n");
				scanf("%d",&irool);
				printf("enter the name of the student\n");
				fflush(stdin);
				scanf("%[^'\n']s",arr);
				fflush(stdin);
				printf("enter the address\n");
				scanf("%[^'\n']s",brr);
				
				addatfirst(&first,imarks,irool,arr,brr);
				
				break;
				
				
			case 2:
				printf("enter the  position to delete\n");
				scanf("%d",&ipos);
				deleteatpos(&first,ipos);
				break;
				
				
			case 3:
				ret=Count(first);
				printf("the  number of students in the ckass are : %d\n",ret);
				break;
				
				
			case 4:
				display(first);
				break;
				
				
				
			case 5:
				
				printf("enter the marks\n");
				scanf("%d",&imarks);
				printf("enter the rool no\n");
				scanf("%d",&irool);
				printf("enter the name of the student\n");
				fflush(stdin);
				scanf("%[^'\n']s",arr);
				fflush(stdin);
				printf("enter the address\n");
				scanf("%[^'\n']s",brr);
				
				addatlast(&first,imarks,irool,arr,brr);
				break;
				
				
				
			case 6:
				deletefirst(&first);
				break;
				
				
			case 7:
				deletelast(&first);
				break;
			
			case 8:
				failed(first);
				break;
				
			case 9:
				printf("enter the positon\n");
				scanf("%d",&ipos);
				printf("enter the marks\n");
				scanf("%d",&imarks);
				printf("enter the rool no\n");
				scanf("%d",&irool);
				printf("enter the name of the student\n");
				fflush(stdin);
				scanf("%[^'\n']s",arr);
				fflush(stdin);
				printf("enter the address\n");
				scanf("%[^'\n']s",brr);
				
				addatpos(&first,imarks,irool,arr,brr,ipos);
				
				break;
			case 0:
				printf("thanks for using this application\n");
				break;
				
			default:
				return -1;
				printf("please enter the correct ioption\n");
				break;
		}
	
	}
	
	
	return 0;
}
