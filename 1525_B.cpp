#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
      int t,n;
      cin>>t;
      while(t--){
        cin>>n;
       int a[n];
       int max=-1;
       int min=100;
       for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
       }
       int cnt=0;
       for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            cnt=1;
            break;
        }
       }
       if(cnt==0){
        cout<<"0"<<endl;
       }
       else{
        if(a[n-1]==max || a[0]==min) cout<<"1"<<endl;
        else if(a[0]==max && a[n-1]==min) cout<<"3"<<endl;
        else cout<<"2"<<endl;
       }
      }
return 0;
}
