#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=0;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
     transform(s.begin(), s.end(), s.begin(), ::toupper);
        if(s=="YES"){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}
