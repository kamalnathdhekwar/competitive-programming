#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define MOD 1000000007

using namespace std;

// Function to calculate modular inverse using Fermat's little theorem
long long modInverse(long long a, long long mod) {
    long long res = 1, exp = mod - 2;
    while (exp) {
        if (exp % 2 == 1) res = (res * a) % mod;
        a = (a * a) % mod;
        exp /= 2;
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, long long> freq;
        
        // Read the array and calculate frequency of each number
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        long long P = 0, Q = 0;

        // Calculate P and Q based on frequencies
        for (auto &p : freq) {
            long long f = p.second;
            if (f >= 2) {
                Q += f * (f - 1) / 2;  // Combinations of choosing 2 out of f elements
                P += f * f;
            }
        }

        Q %= MOD;
        P %= MOD;

        // Debugging output
        cout << "P: " << P << " Q: " << Q << endl;

        // If Q is 0, output 0
        if (Q == 0) {
            cout << 0 << endl;
        } else {
            // Otherwise calculate P * Q^(-1) mod (10^9 + 7)
            long long Q_inv = modInverse(Q, MOD);
            cout << "Q_inv: " << Q_inv << endl;
            cout << (P * Q_inv) % MOD << endl;
        }
    }
    
    return 0;
}
