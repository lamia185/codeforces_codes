#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
	long long int a,b,c;
	double s,l;
	cin>>a>>b>>c;
	
	if(a==1 && b==1 &&c==1){
		cout<<"1"<<endl;
		return 0;
	}
	
	s=a/c;
	l=b/c;
	
	s=ceil(s);
	l=ceil(l);
	
	int k=s*l;
	
	cout<<k<<endl;
}
