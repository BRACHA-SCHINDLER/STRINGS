#include "my_str.h"
#include "stdio.h"
#include <stdlib.h>

size_t my_len(const char* str)
{
	int i=0;
	for (i=0;str[i]!=0;i++);
	return (i);	
}

void my_cpy(char *dst, const char *src)
{
	for (int i=0;src[i]!=0;i++)
		dst[i]=src[i];
} 

int my_cmp(const char* str1, const char* str2)
{
	int i;
	for (i=0 ;str1[i]!=0 && str2[i]!=0 ;i++)
	{
		if(str1[i]!=str2[i])
			return 0;
	}	
	if(str1[i]==0 && str2[i]==0)
		return 1;
	return 0;
}

char *my_cat(char *dest, const char *sorc)
{
	int size=my_len(dest);
	for (int i=0;sorc[i]!=0;i++)
		dest[size+i]=sorc[i];
	return dest;
}

