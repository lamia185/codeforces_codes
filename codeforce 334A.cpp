#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++){
		cout<<i+1;
		for(j=1;j<n;j++){
			printf(" %d",n*j+(i+j)%n+1);
		}
		cout<<endl;
	}
	return 0;
}
