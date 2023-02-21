#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
    char k[100]="qwertyuiopasdfghjkl;zxcvbnm,./";
    char w[2],in[120];
    cin>>w>>in;
    if(w[0]=='L'){
        for(int i=0;i<strlen(in);i++){
                for(int j=0;j<strlen(k);j++){
                    if(in[i]==k[j]){
                        cout<<k[j+1];
                        break;
                    }
                }
          }
          cout<<endl;
    }
    else{
        for(int i=0;i<strlen(in);i++){
                for(int j=0;j<strlen(k);j++){
                    if(in[i]==k[j]){
                        cout<<k[j-1];
                        break;
                    }
                }
          }
          cout<<endl;
    }
return 0;
}
