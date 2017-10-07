//first er ta olpo songkhar jonnno.10^7 obdhi loop jae .r jae na
/*#include<stdio.h>

int main()
{
	int i;
	long long int n,sum=0;
	scanf("%I64d",&n);
	getchar();
	for(i=1;i<=n;i++){
		if(i%2==0){
			sum+=i;
		}
		else sum-=i;
	}
	printf("%I64d",sum);
}*/

#include<stdio.h>

int main()
{
	long long n;
	scanf("%I64d",&n);
	if(n%2==0) printf("%I64d\n",(n/2));
	else printf("%I64d\n",(-1*(n+1)/2));
}
