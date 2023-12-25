#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int m;
        cin >> m;

        vector<int> students;
        for (int i = 0; i < m; i++) {
            int a;
            cin >> a;
            students.push_back(a);
        }

        vector<int> sortedStudents = students;
        sort(sortedStudents.begin(), sortedStudents.end(), greater<int>());

        int count = 0;
        for (int i = 0; i < m; i++) {
            if (students[i] == sortedStudents[i]) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}