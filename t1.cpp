#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;

bool prime[N];

void sieve() {
    fill(prime, prime + N, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < N; i++) {
        if (prime[i]) {
            for (int j = i * i; j < N; j += i) {
                prime[j] = false;
            }
        }
    }
}

long long countPair(int N, vector<vector<int>>& edges) {
    sieve();

    vector<vector<int>> adj(N + 1);
    for (auto &edge : edges) {
        int u = edge[0], v = edge[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<long long> dp_prime(N + 1), dp_non_prime(N + 1);
    function<void(int, int)> dfs = [&](int u, int p) {
        dp_prime[u] = prime[u];
        dp_non_prime[u] = !prime[u];
        for (int v : adj[u]) {
            if (v != p) {
                dfs(v, u);
                if (prime[u]) {
                    dp_prime[u] += dp_non_prime[v];
                    dp_non_prime[u] += dp_prime[v];
                } else {
                    dp_prime[u] += dp_prime[v];
                    dp_non_prime[u] += dp_non_prime[v];
                }
            }
        }
    };

    dfs(1, 0);
    long long ans = 0;
    for (int u = 2; u <= N; u++) {
        ans += dp_prime[u] * dp_non_prime[u];
    }
    return ans;
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> edges(N - 1, vector<int>(2));
    for (int i = 0; i < N - 1; i++) {
        cin >> edges[i][0] >> edges[i][1];
    }

    long long result = countPair(N, edges);
    cout << result << endl;

    return 0;
}