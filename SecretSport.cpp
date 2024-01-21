#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
vector<char> v(t);
 int k =0;
 while(t--)
 {
    int n;
    cin>>n;
   string s ;
   cin>>s;
  v[k]=s[n-1];
    k++;
}
for(auto i:v)
{
    cout<<i<<endl;
}

}