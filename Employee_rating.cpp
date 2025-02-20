    #include<bits/stdc++.h>
    using namespace std;
    int solve (int n, vector<int> v) {
    // Write your code here
    int curr = 0;
    int maxi = 0;

    for(int i = 0 ; i<n-1 ; i++){
        if(v[i]>6 && v[i+1]){
            curr++;
        }
        else {
            maxi = max(maxi,curr);
            curr = 0;
        }
    }

    maxi = max(maxi,curr);

    return maxi;
    }

    int main() {

        ios::sync_with_stdio(0);
        cin.tie(0);
        int N;
        cin >> N;
        vector<int> workload(N);
        for(int i_workload = 0; i_workload < N; i_workload++)
        {
            cin >> workload[i_workload];
        }

        int out_;
        out_ = solve(N, workload);
        cout << out_;
    }