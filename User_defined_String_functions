
/*

   || THESE ARE THE PROTOTYPES OF ALL THE FUNCTIONS  ||
char * strcat1(char * first_string, char * second_string );
char * strchr1(char * str1,char a);
int strcmp1(char * first, char * second);
int strcmpi1(char * first,char * second);
char * strcpy1(char * dest, char * src);
char * strlwr1(char * str1);
char * strncat1(char * first, char * second,int iNo);
int strncmp1( char * first,  char * second,int iNo);
int strncmpi1(char * first,char * second,int iNo);
char * strncpy1(char * dest, char * src,int iNo);
char * strnset1(char * str,char a,int iNo);
char * strrchr1( char * str1,char a);
char * strrev1(char * str1);
char * strset1(char * str,char a);
char * strupr1(char * str1);
int strlen1(char * str);
char * strstr1(char * string,char * substring);
*/

char * strcat1(char * first_string,char * second_string )
{
	char * sPtr=first_string;
	while(*sPtr != '\0')
	{
		sPtr++;
	}
	*sPtr=' ';
	sPtr++;
	while(*second_string != '\0')
	{
		*sPtr=*second_string;
		sPtr++;
		second_string++;
	}
	*sPtr='\0';
	
	return first_string;
	
}


char * strchr1(char * str1,char a)
{
    char *pPtr;
	while(*str1 != '\0')
	{
		if(*str1==a)
			break;
		
		str1++;
	}
	if(*str1=='\0')
		return 0;
	else
    {
        pPtr=str1;
        return pPtr;
    }
		
}


char * strlwr1(char * str1)
{
	char * first=str1;
	while(*first != '\0')
	{
		if(*first>=65  &&  *first<=90)
			*first=*first+32;
		
		first++;
	}
	return str1;
}



int strcmp1(char * first,char * second)
{
	while(*first != '\0')
	{
		if(*first != *second)
			break;
		
		first++;
		second++;
	}
	
	if(*first=='\0'  && *second=='\0')
		return 0;
	else
		return 1;
}


int strcmpi1(char * first,char * second)
{
	while(*first != '\0')
	{
		if((*first+32==*second)||(*first-32==*second)||(*first==*second+32)||(*first==*second-32)) 		
		{
			first++;
			second++;
		}
		else
			break;
	}
	if((*first=='\0')  &&  (*second=='\0'))
		return 0;
	else
		return 1;
}


char * strcpy1(char * dest, char * src)
{
	char *s = dest;
	while(*src != '\0')
	{
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';
	
	return s;
}


char * strncat1(char * first, char * second,int iNo)
{
	int iCounter=0;
	char * s=first;
	while(*s != '\0')
	{
		s++;
	}
	*s=' ';
	s++;
	while(*second != '\0')
	{
		if(iCounter==iNo)
			break;
		*s=*second;
		s++;
		second++;
		iCounter++;
	}
	*s='\0';
	
	return first;
	
}


int strncmp1( char * first, char * second,int iNo)
{
	int iCounter=0;
	while(*first != '\0')
	{
		if(*first != *second  || iCounter==iNo)
			break;
		
		first++;
		second++;
		iCounter++;
	}
	
	if((*first=='\0'  && *second=='\0') || (iCounter==iNo))
		return 0;
	else
		return 1;
}


int strncmpi1(char * first,char * second,int iNo)
{
	int iCounter=0;
	while(*first != '\0')
	{
		if(iCounter==iNo)
			break;
		
		if((*first+32==*second)||(*first-32==*second)||(*first==*second+32)||(*first==*second-32)) 		
		{
			first++;
			second++;
		}
		else
			break;
		
		iCounter++;
	}
	if(((*first=='\0')  &&  (*second=='\0')) || (iCounter==iNo))
		return 0;
	else
		return 1;
}


char * strncpy1(char * dest, char * src,int iNo)
{
	int iCounter=0;
	char *s = dest;
	while(*src != '\0')
	{
		if(iCounter==iNo)
			break;
		
		*dest=*src;
		src++;
		dest++;
		iCounter++;
		
	}
	*dest='\0';
	
	return s;
}



char * strnset1(char * str,char a,int iNo)
{
	char *first=str;
	while(*first != '\0')
	{
		if(iNo==0)
			break;
		*first=a;
		first++;
		iNo--;
	}
	return str;
}


char * strrchr1( char * str1,char a)
{
	int iCounter=0;
	while(*str1 != '\0')
	{
		str1++;
		iCounter++;
	}
	str1--;
	while(iCounter>0)
	{
		if(*str1==a)
			break;
		
		str1--;
		iCounter--;
	}
	
	if(iCounter==0)
		return 0;
	else
		return str1;
}


char * strrev1(char * str1)
{
	char a;
	char * first=str1;
	char * last=str1;
	while(*last != '\0')
	{
		last++;
	}
	last--;
	while(last>first)
	{
		a=*first;
		*first=*last;
		*last=a;
		
		first++;
		last--;
	}
	return str1;
}


char * strset1(char * str,char a)
{
	char *first=str;
	while(*first != '\0')
	{
		*first=a;
		first++;
	}
	return str;
}


char * strupr1(char * str1)
{
	char * first=str1;
	while(*first != '\0')
	{
		if(*first>=97  &&  *first<=122)
			*first=*first-32;
		
		first++;
	}
	return str1;
}



int strlen1(char * ptr)
{
	int icnt=0;
	while(*ptr != '\0')
	{
		
		icnt++;
		ptr++;
	}
	
	return icnt;
}

char * strstr1(char * string,char * substring)
{
	char *ms=string;
	char *ms1=string;
	char *sub=substring;
	while(*ms != '\0')
	{
		ms1=ms;
		if(*ms ==  *sub)
		{
			while(*sub != '\0')
			{
				if(*sub == *ms)
				{
					sub++;
					ms++;
				}
				else
				{
					sub=substring;
					break;
				}
			}	
		}
		if(*sub == '\0')
			return ms1;
		ms=ms1;
		ms++;
	}
	if(*sub != '\0')
		return 0;
}
