#include<stdio.h>
#include<string.h>

int main()
{
	char str[10];
	int n,i,x=0;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		gets(str);
	if(str[0]=='+' ||str[2]=='+'){
		x++;
	}	
    else if(str[0]=='-' || str[2]=='-'){
		x--;
	}
	}
	
	printf("%d\n",x);
}
