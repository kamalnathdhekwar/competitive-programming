#include<bits/stdc++.h>
using namespace std;

long long solve (int N, int start, int finish, vector<int> Ticket_cost) {
   // Write your code here
   long long ans1 =0;
   //sort(Ticket_cost.begin(),Ticket_cost.end());
   for(int i = min(start,finish)-1 ; i<max(finish,start)-1; i++){
    ans1+=Ticket_cost[i];
   }
   long long ans2 = 0;

   int key = abs(start-finish)+1;

   
   return ans1;
   
   
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int start;
    cin >> start;
    int finish;
    cin >> finish;
    vector<int> Ticket_cost(N);
    for(int i_Ticket_cost = 0; i_Ticket_cost < N; i_Ticket_cost++)
    {
    	cin >> Ticket_cost[i_Ticket_cost];
    }

    long long out_;
    out_ = solve(N, start, finish, Ticket_cost);
    cout << out_;
}