#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int x, y, z;
    cin>>x>>y>>z;
    int i=sqrt((x*y)/z);
    int j=sqrt((x*z)/y);
    int k=sqrt((y*z)/x);
    int cnt = (i+j+k)*4;
    cout<<cnt<<endl;
return 0;
}
