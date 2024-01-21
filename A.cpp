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
    string str;
    cin>>str;
    int totalCount = 0;
     unordered_map<char,int> countP;
        for(char m:str)
        {
            countP[m]++;
        }
        for(char i='A';i<='Z';i++)
        {
           if( countP[i] >= i-'A'+ 1){
                totalCount++;
           }
        }
   cout<<totalCount<<endl;

 }
return 0;
}