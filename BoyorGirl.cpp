#include<bits/stdc++.h>
using namespace std;
int main()
{
string str;
cin>>str;
int n =str.length();
sort(str.begin(),str.end());
int count=0;
for(int i = 0 ; i<n-1 ; i++)
{
    if(str[i]!=str[i+1]) count++;
}
if(count%2==0) cout<<"IGNORE HIM!"<<endl;
else cout<<"CHAT WITH HER!"<<endl;
}