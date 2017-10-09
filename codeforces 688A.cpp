#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
    int i,j,n,d,count=0,max=0;
    char ara[110],std[110];
    cin>>n>>d;
    for(i=0;i<n;i++){
        ara[i]='1';
    }
    ara[i]='\0';
    while(d--){
        cin>>std;
        if(strcmp(ara,std)){
            count++;
        }
        else{
            if(count>max){
                max=count;
            }
            count=0;
        }
    }
    if(count>max){
        max=count;
    }
    cout<<max<<endl;
    return 0;
}

