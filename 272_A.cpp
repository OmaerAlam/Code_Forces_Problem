#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
      int t,n,sum=0,cnt=0,d;
      while(cin>>t){
       for(int i=0;i<t;i++){
        cin>>n;
        sum+=n;
       }
       d=t+1;
       for(int i=sum+1;i<=sum+5;i++){
        if(i%d==1){
            cnt++;
        }
       }
    cout<<5-cnt<<endl;
      }
return 0;
}
