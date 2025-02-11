#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M, N; // M = Number of menus, N = Number of items
    cin >> M >> N;

    vector<vector<int>> menus(M, vector<int>(N));  // Store menu prices
    vector<int> max_price(N, 0);                   // Store max price for each item

    // Input menus and track maximum price per item
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> menus[i][j];
            max_price[j] = max(max_price[j], menus[i][j]);
        }
    }
    // for(auto x:max_price) cout<<x<<" ";
    // cout<<endl;


    int best_menu = -1;
    int max_good_prices = -1;
    double max_avg_price = -1.0;

    // Process each menu to count good prices and calculate price average
    for (int i = 0; i < M; i++) {
        int good_prices = 0;
        int total_price = 0;

        for (int j = 0; j < N; j++) {
            total_price += menus[i][j];
            if (menus[i][j] == max_price[j]) {
                good_prices++;
            }
        }

        double avg_price = (double)total_price / N;`

        // Update best menu based on good price count and average price
        if (good_prices > max_good_prices || 
            (good_prices == max_good_prices && avg_price > max_avg_price)) {
            max_good_prices = good_prices;
            max_avg_price = avg_price;
            best_menu = i + 1;  // 1-based index
        }
    }

    cout << best_menu << endl;
    return 0;
}
