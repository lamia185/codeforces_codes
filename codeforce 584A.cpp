#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i;
	cin>>n>>m;
	
	if(n==1 && m>=10)
	{
	cout<<"-1"<<endl;
	return 0;
    }

if(n<=10 && m<10  ){
		for(int i=0;i<n;i++){
		cout<<m;
	}
	return 0;
}
if(n>=10 && m<10  ){
		for(int i=0;i<n;i++){
		cout<<m;
	}
	return 0;
}

else if(n>=10 && m==10){
	for(i=0;i<n-1;i++){
		cout<<"1";
	}
	cout<<"0";
	return 0;
}

else if(n<10 && m==10){
	for(i=0;i<n-1;i++){
		cout<<"1";
	}
	cout<<"0";
	return 0;
}
}
