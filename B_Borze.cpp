             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

// #define ll         long long int
#define int            int64_t
#define all(x)        x.begin(),x.end()
#define rall(x)       x.begin(),x.end()
#define forn(i,a,b)    for(int i = a ; i<b ; i++)
#define forr(j,c,d)   for(int j = c ; j>=d ; j--)
#define fora(a,b)     for(auto& a : b)
#define yes           cout<<"Yes"<<endl
#define no            cout<<"No"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl
#define mvi           vector<int>
#define mvc           vector<char>
#define mvs           vector<string>
#define mpi           map<int,int>
#define mpc           map<char,int>
#define umps          unordred_map<int,int>
#define nn            cout<<"\n"

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
  
 string s,s2;
 cin>>s;
int len=s.length();
forn(i,0,len)

{
	if(s[i]=='.'){
		s2+='0';
	}
	if(s[i]=='-'&&s[i+1]=='.'){
		s2+='1';
		++i;
		
	}
	if(s[i]=='-'&&s[i+1]=='-'){
		s2+='2';
		++i;
	}
	
} 
 cout<<s2;
 
 
 
 	return 0;
}


    
