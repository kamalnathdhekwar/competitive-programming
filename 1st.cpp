#include<iostream>
using namespace std;
int main() {
int t ;
cin>>t;
while(t--)
{
    string str[4];
    for(int i = 0 ; i<4 ; i++)
    {
        cin>>str[i];
    }
    int second = 1 ;
    for(int i = 1 ; i<4 ; i++)
    {
        
        int n1 = stoi(str[i-1]);
        int n2 = stoi(str[i]);
        if(n1==0) n1 = 10;
        if(n2==0) n2 = 10;
        second = second + abs(n2-n1) +1 ;
    }
    int secs ;
       int n3 = stoi(str[0]);
       if(n3==0) n3 = 10;
       secs= n3-1;
       
    cout<<second+secs<<endl;
}

}