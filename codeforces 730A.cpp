#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int n,n1,n2,M=0,C=0;
	cin>>n;
	while(n--){
		cin>>n1>>n2;
		if(n1>n2) M++;
		else if(n2>n1) C++;
		else if(n1==n2) {
			M++;
			C++;
		}
	}
	if(M>C) cout<<"Mishka"<<endl;
	else if(C>M) cout<<"Chris"<<endl;
	else cout<<"Friendship is magic!^^"<<endl;
	return 0;
}
