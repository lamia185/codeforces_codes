#include<stdio.h>
#include<string.h>

int main()
{
	char a[3],c='\0';
	int n,count=0;
	scanf("%d",&n);
	while(n--){
		scanf("%s",a);
		if(a[0]!=c){
			count++;
		}
		c=a[0];
	}
	printf("%d",count);
}
