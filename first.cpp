#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <tuple>

using namespace std;

int numDuplicates(vector<string> name, vector<int> price, vector<int> weight) {
    map<tuple<string, int, int>, int> productCounts;
    int duplicates = 0;

    for (size_t i = 0; i < name.size(); ++i) {
        tuple<string, int, int> product = make_tuple(name[i], price[i], weight[i]);
        if (productCounts.find(product) != productCounts.end()) {
            // Increment duplicates for every additional occurrence
            duplicates++;
        }
        productCounts[product]++;
    }

    return duplicates;
}

int main() {
    int name_count;
    cin >> name_count;
    vector<string> name(name_count);
    for (int i = 0; i < name_count; i++) {
        cin >> name[i];
    }

    int price_count;
    cin >> price_count;
    vector<int> price(price_count);
    for (int i = 0; i < price_count; i++) {
        cin >> price[i];
    }

    int weight_count;
    cin >> weight_count;
    vector<int> weight(weight_count);
    for (int i = 0; i < weight_count; i++) {
        cin >> weight[i];
    }

    int result = numDuplicates(name, price, weight);
    cout << result << endl;

    return 0;
}