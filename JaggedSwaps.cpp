#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0 ; i<n ; i++)
        {
            cin>>v[i];
        }
        // int countYes = 0 ;
        // int countNo=0;
        // int countYes2=0;
        // for(int i = 0 ; i<n-1 ; i++)
        // {
        //     if(v[i]>n || v[i+1]>n) countNo++;
        //     if(v[i]<v[i+1]) countYes++;
        // }
        // for(int i = 1 ; i<n-1 ; i++)
        // {
        //     if(v[i]>v[i-1]  && v[i] > v[i+1]) countYes2++;
    
        // }

        if(v[0]==*min_element(v.begin(),v.end()))
        {
            cout<<"yes"<<endl;
        }
        else cout<<"No"<<endl;


        
        // if(countYes==n-1) cout<<"yes"<<endl;
        // else if(countNo>0) cout<<"No"<<endl;
        // else if(countYes2>=2) cout<<"yes"<<endl;
        // else cout<<"No"<<endl;

       
    }
 
return 0;
}