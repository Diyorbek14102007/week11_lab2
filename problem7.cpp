#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int number;

    cout << "Enter numbers:" << endl;
    while (true) {
        cin >> number;
        if (number < 0) {
            break;
        }
        numbers.push_back(number);
    }

    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "Number of even elements: " << evenCount << endl;
    cout << "Number of odd elements: " << oddCount << endl;

    return 0;
}