#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){

    int a1, a2, a3,b1, b2, b3,n,flag=0;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    cin>>n;
    fflush(stdin);
    
    int x=a1+a2+a3;
    int y=b1+b2+b3;

	if(a1!=1 && a2!=1 && a3!=1 && b1!=1 && b2!=1 && b3!=1){
		
    double a = (x / 5) ; 
    double b = (y / 10) ;
    int c=ceil(x);
    int d=ceil(y);
}
else {
	int c=x;
	int d=y;
}
    
    if(n==1 && (x>=1) && y>=1 ){
    	flag=1;
    	cout<<"NO"<<endl;
    }

    if(c+d<=n && flag==0) cout<<"YES"<<endl;
    else if(c+d>n && flag==0) cout<<"NO"<<endl;

    return 0;
}
