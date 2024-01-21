#include <iostream>
#include <vector>
#include <map>

int main() {
    int t; // Number of test cases
    std::cin >> t;

    while (t--) {
        int n; // Size of the array
        std::cin >> n;

        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        int k; // Input number
        std::cin >> k;

        std::map<int, int> freq;
        int result = -1; // Initialize result to -1

        for (int i = 0; i < n; ++i) {
            freq[arr[i]]++;
            if (freq[arr[i]] > k) {
                result = arr[i];
                break;
            }
        }

        std::cout << result << std::endl;
    }

    return 0;
}
