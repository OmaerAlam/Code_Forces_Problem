#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
      int n;
      cin>>n;
      if(n%2==1) cout<<-1<<endl;
      else{
        cout<<"2 1";
        for(int i=3;i<n;i+=2){
            cout<<" "<<i+1<<" "<<i;
        }
        cout<<endl;
      }

return 0;
}
