#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<string> highAccessEmployees(vector<vector<string>>& access_times) {
        unordered_map<string, vector<string>> accessMap;

        // Populate the map with employee names and their access times
        for (const auto& entry : access_times) {
            string name = entry[0];
            string time = entry[1];
            accessMap[name].push_back(time);
        }

        vector<string> result;

        // Check each employee's access times
        for (auto& entry : accessMap) {
            string name = entry.first;
            vector<string>& times = entry.second;

            // Sort the access times in ascending order
            sort(times.begin(), times.end());

            // Check for high-access employees
            for (int i = 0; i < times.size() - 2; ++i) {
                if (isHighAccess(times[i], times[i + 1], times[i + 2])) {
                    result.push_back(name);
                    break;  // No need to check further for this employee
                }
            }
        }

        return result;
    }

private:
    bool isHighAccess(const string& time1, const string& time2, const string& time3) {
        // Convert times to minutes for easier comparison
        int t1 = stoi(time1.substr(0, 2)) * 60 + stoi(time1.substr(2, 2));
        int t2 = stoi(time2.substr(0, 2)) * 60 + stoi(time2.substr(2, 2));
        int t3 = stoi(time3.substr(0, 2)) * 60 + stoi(time3.substr(2, 2));

        // Check if there are three or more accesses within a one-hour period
        return t2 - t1 <= 60 && t3 - t2 <= 60;
    }
};

int main() {
    Solution solution;

    vector<vector<string>> access_times = {{"Alice", "0800"}, {"Bob", "0815"}, {"Alice", "0830"},
                                           {"Bob", "0900"}, {"Alice", "0945"}, {"Bob", "1000"}};

    vector<string> result = solution.highAccessEmployees(access_times);

    // Print the result
    for (const auto& name : result) {
        cout << name << " ";
    }

    return 0;
}
