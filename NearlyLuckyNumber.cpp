#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 string str;
 cin>>str;
 int count=0;
 for(int i = 0 ; i<str.length();i++)
 {
    if(str[i]=='7' || str[i]=='4') count++;
 }
  if(count==7 || count==4) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;

return 0;
}