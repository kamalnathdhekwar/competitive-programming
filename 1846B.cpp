             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
#define rall(x)       x.begin(),x.end()
// #define for(i,a,b)    for(ll i = a ; i<b ; i++)
// #define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
#define yes           cout<<"Yes"<<endl
#define no            cout<<"No"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl
#define mvi           vector<ll>
#define mvc           vector<char>
#define mvs           vector<string>
#define mpi           map<ll,ll>
#define mps           map<string,string>
#define umpi          map<string,string>
#define umps          map<ll,ll>
#define nn            cout<<endl

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string st1,st2,st3;
        cin>>st1;
        cin>>st2;
        cin>>st3;
        if(st1[0]==st1[1]&&st1[2]==st1[1] &&st1[1]!='.')
        {
            cout<<st1[0]<<endl;
        }
        else if(st2[0]==st2[1]&&st2[2]==st2[1]&&st2[0]!='.')
        {
            cout<<st2[0]<<endl;
        }
        else if(st3[0]==st3[1]&&st3[2]==st3[1]&&st3[0]!='.')
        {
            cout<<st3[0]<<endl;
        }
        else if(st1[0]==st2[0] && st2[0]==st3[0]&&st1[0]!='.')
        {
            cout<<st1[0]<<endl;
        }
        else if(st1[1]==st2[1] && st2[1]==st3[1]&&st1[1]!='.')
        {
            cout<<st1[1]<<endl;
        }
        else if(st1[2]==st2[2] && st2[2]==st3[2]&&st1[2]!='.')
        {
            cout<<st1[2]<<endl;
        }
        else if(st1[2]==st2[1] && st2[1]==st3[0]&&st1[2]!='.')
        {
            cout<<st1[2]<<endl;
        }
        else if(st1[0]==st2[1]&&st2[1]==st3[2]&&st1[0]!='.')
        {
            cout<<st1[0]<<endl;
        }
        else
        {
            cout<<"DRAW"<<endl;
        }
        
    }   
}
  
