#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
   int a,b,c,n,k,cnt=0,cnt1;
   while(cin>>n>>a>>b>>c){
    for(int i=0;i*a<=n;i++){
        for(int j=0;i*a+j*b<=n;j++){
            cnt1=n-i*a-j*b;
            if(cnt1%c==0){
                k=cnt1/c;
                cnt=max(cnt,i+j+k);
            }
        }
    }
    cout<<cnt<<endl;
   }
return 0;
}
