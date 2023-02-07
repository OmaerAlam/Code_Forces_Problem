#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;//Input string;
    int n=0,fv=97,sv;
    for(int i=0;i<s.size();i++){
        sv=(int)s[i];//sv =s[i] ascii value
        int cw=abs(fv-sv);//absulate value of a=97-s[i];
        int aw=26-abs(fv-sv);//26-absulate value of a="97-s[i]";
        fv=sv;
        n+=min(cw,aw);//check in cw & aw,which one value is minimum.
    }
    cout<<n<<endl;
return 0;
}
