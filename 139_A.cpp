#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int i=0,n,arr[7];
    cin>>n;
    for(int i=0;i<7;i++) cin>>arr[i];
    int t=arr[0];
    while(t<n){
        i++;
        i%=7;
        t+= arr[i];
    }
  cout<<i+1<<endl;
return 0;
}
