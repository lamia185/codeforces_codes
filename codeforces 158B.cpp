#include<stdio.h>
#include<math.h>

int main()
{
	int i,n,ara[1000],sum=0;
	float x;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&ara[i]);
		sum+=ara[i];
	}
	x=sum/4;
	printf("%f",ceil(x));
}
