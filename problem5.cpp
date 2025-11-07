#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a, b, result;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        a.push_back(num);
    }
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        b.push_back(num);
    }

    for (int i = 0; i < n; i++) {
        result.push_back(a[i] + b[i]);
    }
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}