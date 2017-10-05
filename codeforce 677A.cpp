#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,h,sum=0,x;
	cin>>n>>h;
	while(n--){
		cin>>x;
		if(x<=h){
			sum+=1;
		}
		else sum+=2;
	}
	cout<<sum<<endl;
	return 0;
}
