#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();

      int t;
      double n,m=0;
      cin>>t>>n;
      int arr[t],a=0;
      for(int i=0;i<t;i++){
        cin>>arr[i];
        if(arr[i]<=n) {
                arr[i]=0;
        }
      }
        for(int i=0;i<t;i++){
            if(ceil(arr[i]/n)>=m){
                m=ceil(arr[i]/n);
                a=i;
            }
        }
        cout<<a+1<<endl;

return 0;
}
