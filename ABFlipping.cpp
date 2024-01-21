#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        bool flags = true;
        int result = 0;
        vector<bool> v(n + 1);
        while (flags) {
            flags = false;
            for (int i = 0; i + 1 < str.size(); i++) {
                if (str[i] == 'A' && str[i + 1] == 'B' && !v[i]) {
                    flags = true;
                    swap(str[i], str[i + 1]);
                    result++;
                    v[i] = true;
                }
            }
           
    }
     cout <<result<<endl;
    
}
return 0;
}