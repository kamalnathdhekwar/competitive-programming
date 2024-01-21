#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string f,s;
     cin>>f>>s;
        int sum1=0,sum2=0;
        for(i=0; i<f.size(); i++)
        { 
            if(f[i]>='A' && f[i]<='Z')
                f[i]=f[i]-'A'+97;

            if(s[i]>='A' && s[i]<='Z')
                s[i]=s[i]-'A'+97;
        }
        for(i=0; i<s.size(); i++)
        {
            if(f[i]>s[i])
                {
                    cout<<"1\n";
                    return 0;}

            if(s[i]>f[i])
                {
                    cout<<"-1\n";
                    return 0;
                }

        }
        cout<<"0\n";
    
    return 0;
}