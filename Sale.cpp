#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
 ll t,m;
 cin>>t>>m;

vector<int> v(t);
int sum = 0;
for(int i = 0 ; i<t ; i++)
{
    cin>>v[i];
    sum=sum+v[i];
}
sort(v.begin(),v.end());


ll mon=0;
for(int i = 0; i<t; i++)
{
    if(v[i]>0)continue;
    else mon = mon+v[i];
}
cout<<-mon<<endl;
       
 
return 0;
}