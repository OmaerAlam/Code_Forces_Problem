#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
       int n,x,y,z,sum=0,sum1=0,sum2=0;
       cin>>n;
       while(n--){
        cin>>x>>y>>z;
        sum += x;
        sum1 += y;
        sum += z;
       }
       if(sum==0 && sum1==0 && sum2==0) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

return 0;
}
