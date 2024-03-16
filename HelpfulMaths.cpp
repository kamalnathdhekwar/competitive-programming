             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
#define rall(x)       x.begin(),x.end()
#define for(i,a,b)    for(ll i = a ; i<b ; i++)
#define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
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
    
        string s;
        cin>>s;
        mvc v;

        for(i,0,s.length()){
            if(s[i]!='+'){
                
                v.push_back(s[i]);
            }
        }

        sort(all(v));
        
        // for(i,0,v.size()) cout<<v[i];
        // nn;
        string ss="";

        for(i,0,v.size()){
            // cout<<v[i];
            // cout<<"+";
            ss+=v[i];
            ss+="+";
        }
       
        ss.erase(ss.begin()+ss.length()-1);

         cout<<ss<<endl;
        nn;
        
    }

