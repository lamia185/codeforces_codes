#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char str[1000];
	gets(str);
	str[0]=toupper(str[0]);
	puts(str);
	return 0;
}
