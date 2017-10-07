#include<stdio.h>

int main()
{
	int n,p,q,ara[1000],ara1[1000],ara3[1000]={0},i,flag=1;
	scanf("%d",&n);
	scanf("%d",&p);
	for(i=0;i<p;i++){
		scanf("%d",&ara[i]);
		ara3[ara[i]]=1;
	}
	scanf("%d",&q);
	for(i=0;i<q;i++){
		scanf("%d",&ara1[i]);
		ara3[ara1[i]]=1;
	}
	for(i=1;i<=n;i++){
		if(ara3[i]==0) {
		flag=0;
		break;
	}
	}
	
	if(flag==0) printf("Oh, my keyboard!\n");
	else printf("I become the guy.\n");
	
}
