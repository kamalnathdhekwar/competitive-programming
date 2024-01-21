             // ***  ... जय श्री राम ...  ***//
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
#define for(i,a,b)    for(ll i = a ; i<b ; i++)
#define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
#define yes           cout<<"yes"<<endl
#define no            cout<<"no"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl
#define mvi           vector<ll>
#define mvs           vector<string>
#define mpi           map<ll,ll>
#define mps           map<string,string>
#define umpi          map<string,string>
#define umps          map<ll,ll>
#define inv           cin>>v[i]   
#define otv           cout<<v[i] 
#define nn            cout<<endl

int main()
{
    ll t;
    cin>>t;
    while(t--){
        
        char arr[10][10];
         ll n = 1;
        ll k = n;
        ll r1=0,r2=0,r3=0,r4=0,r5=0;
        for(i,0,10){
            for(j,0,10){
                cin>>arr[i][j];
                if(arr[i][j]=='X') {
                 if(i==0 || j==0 || i==9 || j==9  ) r1++;
                else if(i==1 || j==1 || i==8 || j==8  ) r2++;
                else if(i==2 || j==2 || i==7 || j==7  ) r3++;
                else if(i==3 || j==3 || i==6 || j==6  ) r4++;
                else if(i==4 || j==4 || i==5 || j==5  ) r5++;
                }
            }
        }
       
        


        // while(n<=10){
        //     cin>>str;

        //    if(n==10 || n==1){
        //             for(i,0,k){
        //                if(str[i]=='X'){
        //                 r1++;
        //             }
        //             }
        //         }

        //     if(n==9 || n==2){
        //             for(i,1,k-1){
        //                if(str[i]=='X'){
        //                 r2++;
        //             }
        //             }
        //         }
             
        //         if(n==8 || n==3){
        //             for(i,2,k-2){
        //                if(str[i]=='X'){
        //                 r3++;
        //             }
        //             }
        //         }

            
        //      if(n==7 || n==4){
        //             for(i,3,k-3){
        //                if(str[i]=='X'){
        //                 r4++;
        //             }
        //             }
        //         }

        //       if(n==6 || n==5){
        //             for(i,4,k-4){
        //                if(str[i]=='X'){
        //                 r5++;
        //             }
        //             }
        //         }

        //     n++;
        // }

        ll ans = r1*1+r2*2+r3*3+r4*4+r5*5;
        cout<<ans;
        nn;

        
    }
    
    return 0;
}