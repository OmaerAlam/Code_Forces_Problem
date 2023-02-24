#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();

   int n,m,cnt;
   while(cin>>n>>m){

    if(m<=n){
        if(n%2==0) cnt=n/2;
        else cnt=(n/2)+1;
        while(cnt%m !=0) cnt++;
        }
     else cnt=-1;
cout<<cnt<<endl;
break;

   }

return 0;
}
