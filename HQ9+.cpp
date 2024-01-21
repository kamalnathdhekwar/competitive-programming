#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 string str;
 cin>>str;
 int count=0;
 for(int i = 0 ; i<str.length() ; i++)
 {
    if(str[i]=='H' || str[i]=='Q'|| str[i]=='9'|| str[i]=='+'){
        count++;
       
    }
 }
 if(str[0]=='+') cout<<"NO"<<endl;
 else if(count>0) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
return 0;
}