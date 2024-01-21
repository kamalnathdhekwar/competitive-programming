#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string f;
     cin>>f;
        int sum1=0,sum2=0;
        for(i=0; i<f.size(); i++)
        { 
            if(f[i]>='A' && f[i]<='Z') sum1++;
            else sum2++;
        }
        if(sum1<=sum2){
        for(i=0; i<f.size(); i++)
        {
          if(f[i]>='A' && f[i]<='Z') f[i]=char(int(f[i])+32);
          
        }
        }
        else {
             for(i=0; i<f.size(); i++)
        {
         if(f[i]>='a' && f[i]<='z') f[i]=char(int(f[i])-32);
        }
        }
        cout<<f<<endl;
    
    return 0;
}