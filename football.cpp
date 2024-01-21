#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 string s;
 cin>>s;
 int count=1;
 bool flag=false;
 for(int i = 0 ; i<s.length()-1 ; i++)
 {
  if(s[i]==s[i+1]) {
count++;
if(count==7) flag = true;
  }
  else count=1;
 
  
  
 }
 if(flag) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;

return 0;
}