#include <iostream>
#include <vector>

using namespace std;

int alicelis(int A[], int N) {
    int count = 1;
    int last = A[0];
    for (int i = 1; i < N; i++) {
        if (A[i] > last) {
            count++;
            last = A[i];
        }
    }
    return count;
}

vector<int> find_permutation(int N, int X) {
    if (X >= N) {
        // No permutation can satisfy the condition
        return {-1};
    }

    // Create a permutation of integers from 1 to N
    vector<int> permutation(N);
    for (int i = 0; i < N; i++) {
        permutation[i] = i + 1;
    }

    // Find the position to swap to satisfy the condition
    for (int i = N - X; i < N; i++) {
        swap(permutation[i], permutation[i - 1]);
    }

    return permutation;
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int N, X;
        cin >> N >> X;

        vector<int> result = find_permutation(N, X);

        for (int i = 0; i < N; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
