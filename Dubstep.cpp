#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 string str;
cin>>str;
int n = str.length();
string ans ="";
for(int i = 0 ; i<n ; i++)
{
  if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B') {
    i=i+2;
    ans+=" ";
    continue;
  }
  else ans+=str[i];
}

cout<<ans<<endl;
 
return 0;
}