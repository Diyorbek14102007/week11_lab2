#include <iostream>
#include <vector>
using namespace std;

int main() {
    int count_numbers;
    cin >> count_numbers;
    vector<int> numbers(count_numbers);
    for (int i = 0; i < count_numbers; i++) {
        cin >> numbers[i];
    }
    for (int i = count_numbers - 1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }
    return 0;
}