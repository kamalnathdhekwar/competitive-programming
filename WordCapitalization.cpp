#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n =str.length();
    int ch = int(str[0]);
    if(ch>=97 && ch<=122) ch = ch-32;
    str[0]=char(ch);
    cout<<str<<endl;
  
}