
#include <bits/stdc++.h>
using namespace std;

bool isNumeral(const string &str) {
    for (char ch : str) {
        if (!isdigit(ch)) return false;
    }
    return !str.empty();
}

void computeFrequency(const vector<string>& lines) {
    map<int, int> numeralCount;
    int totalNumerals = 0;

    for (const string &line : lines) {
        stringstream ss(line);
        string token;
        
        while (getline(ss, token, ',')) {
            token.erase(remove_if(token.begin(), token.end(), ::isspace), token.end());
            
            if (isNumeral(token)) {
                int num = stoi(token);
                numeralCount[num]++;
                totalNumerals++;
            }
        }
    }

    if (totalNumerals == 0) {
        cout << "-1 0%" << endl;
        return;
    }

    for (const auto &entry : numeralCount) {
        int numeral = entry.first;
        int count = entry.second;
        int percentage = (count * 100) / totalNumerals;
        cout << numeral << " " << percentage << "%" << endl;
    }
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    vector<string> lines(n);
    for (int i = 0; i < n; i++) {
        getline(cin, lines[i]);
    }

    computeFrequency(lines);
    return 0;
}
