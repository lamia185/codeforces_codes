#include<bits/stdc++.h>
#include<cctype>
#include<cstring>
#define Q 9
#define R 5
#define B 3
#define N 3
#define P 1
#define q 9
#define r 5
#define b 3
#define n 3
#define p 1
using namespace std;

int main()
{
	int i,j,white=0,black=0;
	string str;
	for(i=0;i<8;i++){
		cin>>str;
		for(j=0;j<8;j++){
			if(islower(str[j])){
				if(str[j]=='q')
				black+=q;
			    else if(str[j]=='r')
				black+=r;
				else if(str[j]=='b')
				black+=b;
				else if(str[j]=='n')
				black+=n;
				else if(str[j]=='p')
				black+=p;
				
			}
			else if(isupper(str[j])){
				if(str[j]=='Q')
				white+=Q;
			    else if(str[j]=='R')
				white+=R;
				else if(str[j]=='B')
				white+=B;
				else if(str[j]=='N')
				white+=N;
				else if(str[j]=='P')
				white+=P;
			}
		}
	}
	
	if(black==white) cout<<"draw"<<endl;
	else if(white>black) cout<<"white"<<endl;
	else if(black>white) cout<<"black"<<endl;
	
	return 0;
}
