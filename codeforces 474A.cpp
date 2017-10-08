#include<bits/stdc++.h>
#include<cstring>
using namespace std;

char keyboard[100]="qwertyuiopasdfghjkl;zxcvbnm,./";

int main()
{
    char way[2];
    cin>>way;
    char input[120];
    cin>>input;
    if(way[0]=='L'){
        for(int i=0;i<strlen(input);i++){
            for(int j=0;j<strlen(keyboard);j++){
            if(input[i]==keyboard[j]){
                cout<<keyboard[j+1];
                break;
            }
        }
       }
       printf("\n");
    }
    else{
        for(int i=0;i<strlen(input);i++){
            for(int j=0;j<strlen(keyboard);j++){
                if(input[i]==keyboard[j]){
                   cout<<keyboard[j-1];
                   break;
                }
            }
        }

    printf("\n");
    }
   return 0;
}

