#include<bits/stdc++.h>
#include <vector>

using namespace std;



int main() {
    int t;
    cin>>t;
    while(t--){
        int number;
        cin >> number;
        int sequenceLength = 0;
        vector<int> sequence;
        vector<int> bitPositions;
        for (int i = 0; i < 61; i++) {
            if (number & (1LL << i)) {
                sequenceLength++;
                bitPositions.push_back((1LL << i));
            }
        }
        sequenceLength++;
        sequence.push_back(number);
        for (auto bitPosition : bitPositions) {
            if (number - bitPosition > 0) {
                sequence.push_back(number - bitPosition);
            }
        }

        reverse(sequence.begin(), sequence.end());
        cout << sequence.size() << endl;
        for (auto element : sequence) {
            cout << element << " ";
        }
        cout << endl;
    }
    return 0;
}