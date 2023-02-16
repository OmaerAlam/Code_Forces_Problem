#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
   int n,m,r,d,l;
   cin>>n>>m>>r;
   d=n-m-1;
   if(d>r) l=r+1;
   else l=d+1;
   cout<<l<<endl;
return 0;
}
