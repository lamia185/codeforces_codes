#include<stdio.h>

int main()
{
	int n,r=1,key;
	scanf("%d",&n);
	while(r*5<n){
		n=n-(r*5);
		r=r*2;
	}
	key=(n-1)/r;
	switch(key){
		case 0:
			printf("Sheldon\n");
			break;
		case 1:
			printf("Leonard\n");
			break;
		case 2:
			printf("Penny\n");
			break;
		case 3:
			printf("Rajesh\n");
			break;
		case 4:
			printf("Howard\n");
			break;
			
	}
}
