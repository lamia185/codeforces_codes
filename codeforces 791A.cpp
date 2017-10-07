#include<bits/stdc++.h>
using namespace std;

int main()
{
	int b,v,count=0;
	cin>>b>>v;

	while(1){
		b=(b*3);
		v=(v*2);
		count++;
		if(b>v){
			break;
		}
	}
	cout<<count<<endl;
	
}
