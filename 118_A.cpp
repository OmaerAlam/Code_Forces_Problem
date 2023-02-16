#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
   string s;
   cin>>s;

   for(int i=0;i<s.size();i++){
    char ch=tolower(s[i]);
    if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='y'){
        continue;
    }
    else cout<<"."<<ch;
   }

return 0;
}
