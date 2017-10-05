#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,m,count=0,x=0,a,i;
	cin>>n>>m;
	long long int ara[m+1];
	for(a=1;a<=m;a++){
		cin>>ara[a];
	}
	
	for(int i=1;i<=m-1;i++){
        if(ara[i]==ara[i+1]){
            for(int j =i;j<=m-1;j++){
                ara[j]=ara[j+1];
            }
            i--;
            m--;
        }
    }
    a=1;
	for(i=1;i<=n;i++){
		if(i==n){
			i=1;
		}
		count++;
		if(ara[a]==i){
			a++;		
		}
        if(a>m)
            break;
	}
	cout<<count<<endl;
	return 0;
}
