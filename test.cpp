#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int removeDigitsToMakeDivisibleBy25(const string& s) {
    int n = s.size();
    int ans = n;

    // Iterate over all possible pairs of digits to remove
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            // Form a number by removing the selected digits
            string temp = s;
            temp.erase(temp.begin() + j);
            temp.erase(temp.begin() + i);

            // Check if the remaining number is divisible by 25
            if (stoi(temp) % 25 == 0) {
                ans = min(ans, n - (j - i + 1)); // Update the answer
            }
        }
    }
    
    return ans == n ? -1 : ans; // Return -1 if no solution found
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        string s;
        cin >> s; // Input number as a string
        int result = removeDigitsToMakeDivisibleBy25(s);
        cout << result << endl;
    }
    return 0;
}
