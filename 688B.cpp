#include<bits/stdc++.h>
using namespace std;

int main(){
	string str1,str2,str3;
	cin>>str1;
	
	str2=str1;
	
	reverse(str2.begin(),str2.end());
	str3=str1+str2;
	cout<<str3<<endl;
}
