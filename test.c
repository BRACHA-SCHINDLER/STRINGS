#include "my_str.h"
#include "test.h"
#include "stdio.h"
#include <stdlib.h>


int test_strlen()
{
	const char* mystr= "we love!";
	return my_len(mystr);
}

char* test_strcpy()
{
	const char *src= "we love!";
	char *dst;
	dst=malloc(sizeof(char)*my_len(src));
	my_cpy(dst,src);
	return dst;
}

int test_strcmp()
{
	const char *str1="hi",*str2="hi";
	return my_cmp(str1,str2);
}


char* test_strcat()
{
	const char *sorc="good";
	char *dest="very ";
	char *dest2=malloc(sizeof(char)*(my_len(sorc)+my_len(dest)));
	for (int i=0;dest[i]!=0;i++)
		dest2[i]=dest[i];
	return my_cat(dest2,sorc);
}
