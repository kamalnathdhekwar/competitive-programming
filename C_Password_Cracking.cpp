#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string result = ""; // To store the final password

        // Start building the password by querying individual characters
        for (int i = 0; i < n; ++i) {
            string query = result + '0';
            cout << "? " << query << endl;
            cout.flush(); // Flush the output to ensure it is sent

            int answer;
            cin >> answer;

            // Based on the answer, determine the next bit of the password
            if (answer == 1) {
                result += '0'; // '0' is the next correct bit
            } else {
                result += '1'; // '1' is the next correct bit
            }
        }

        // After figuring out the full password, output the result
        cout << "! " << result << endl;
        cout.flush(); // Flush the output to ensure it is sent
    }

    return 0;
}
