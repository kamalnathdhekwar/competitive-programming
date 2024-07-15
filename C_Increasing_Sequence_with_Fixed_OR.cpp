#include<bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> longestBitwiseORSequence(int n) {
    vector<int> sequence;
    int current_or = 0;

    // Iterate from n-1 to 1
    for (int i = n ; i >= 1; i--) {
        // Check if the OR with current number is still equal to n
        if ((current_or | i) <= n) {
            current_or |= i;
            sequence.push_back(i);
        }
    }

    // Sort the sequence to have it in ascending order
    sort(sequence.begin(), sequence.end());
    return sequence;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
   
    cin >> n;

    vector<int> sequence = longestBitwiseORSequence(n);

    if(n==1){
        cout<<n<<endl;
        cout<<n<<endl;
    }
    else {
        cout<<sequence.size()<<endl;
        for (int num : sequence) {
        cout << num << " ";
    }

    cout << endl;
    }
    

    }
    return 0;
}
