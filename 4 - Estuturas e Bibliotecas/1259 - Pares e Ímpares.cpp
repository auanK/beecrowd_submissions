#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
 
int main() {
    int n;
    cin >> n;

    vector<int> pairs;
    vector<int> odds;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        if (value % 2 == 0) {
            pairs.push_back(value);
        } else {
            odds.push_back(value);
        }
    }

    sort(pairs.begin(), pairs.end());
    sort(odds.begin(), odds.end());

    for (int i = 0; i < pairs.size(); i++) {
        cout << pairs[i] << endl;
    }

    for (int i = odds.size() - 1; i >= 0; i--) {
        cout << odds[i] << endl;
    }
 
    return 0;
}