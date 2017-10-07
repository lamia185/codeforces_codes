#include<stdio.h>

int main()
{
	int n,a,b,count=0;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d",&a,&b);
		if(b-a>=2)
		count++;
	}
	printf("%d",count);
}
