             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

// #define ll         long long int

#define all(x)        x.begin(),x.end()
#define rall(x)       x.rbegin(),x.rend()
#define forn(i,a,b)   for(int i = a ; i<b ; i++)
#define forr(j,c,d)   for(int j = c ; j>=d ; j--)
#define fora(a,b)     for(auto& a : b)
#define yes           cout<<"Yes"<<endl
#define no            cout<<"No"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl
#define pb            push_back
#define mvi           vector<int>
#define mvc           vector<char>
#define mvs           vector<string>
#define mpi           map<int,int>
#define mpc           map<char,int>
#define umpi          unordered_map<int,int>
#define umpc          unordered_map<char,int>
#define nn            cout<<"\n"
#define bs            binary_search
#define mx(x)        *max_element(all(x))
#define mn(x)        *min_element(all(x))

bool isPrime(int n) { if (n==1) return 0; for (int i=2;i<=round(sqrt(n));++i) if (n%i==0) return 0; return 1; }
int sumv(vector<int>v) { int sum = 0 ;for (int i=0;i<v.size();++i) sum+=v[i]; return sum; }


//..............................................................................................................................................................




int main()
{
    int n;
    scanf("%d", &n);

    int cnt[10];
    for(int i=0; i<10; i++) cnt[i] = 0;
    for(int i=0; i<n; i++)
    {
        int buf;
        scanf("%d", &buf);

        cnt[buf]++;
    }

    int ans[5];
    for(int i=0; i<5; i++) ans[i] = 0;
    bool flag = true;
    for(int i=0; i<n/3; i++)
    {
        if(cnt[4] > 0 && cnt[2] > 0 && cnt[1] > 0)
        {
            ans[0]++;
            cnt[4]--;
            cnt[2]--;
            cnt[1]--;
            continue;
        }
        if(cnt[6] > 0 && cnt[2] > 0 && cnt[1] > 0)
        {
            ans[1]++;
            cnt[6]--;
            cnt[2]--;
            cnt[1]--;
            continue;
        }
        if(cnt[6] > 0 && cnt[3] > 0 && cnt[1] > 0)
        {
            ans[2]++;
            cnt[6]--;
            cnt[3]--;
            cnt[1]--;
            continue;
        }
        flag = false;
        break;
    }

    if(flag == false)
        printf("-1\n");
    else
    {
        for(int i=0; i<ans[0]; i++)
            printf("1 2 4\n");
        for(int i=0; i<ans[1]; i++)
            printf("1 2 6\n");
        for(int i=0; i<ans[2]; i++)
            printf("1 3 6\n");
    }

    return 0;
}