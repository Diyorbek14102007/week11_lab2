#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c;
    cout << "Enter size of array: r & c ";
    cin >> r >> c;

    vector<vector<int> > A(r, vector<int>(c));
    vector<vector<int> > B(r, vector<int>(c));
    vector<vector<int> > C(r, vector<int>(c));

    cout << "Enter first array elements: " << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter second array elements: " << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> B[i][j];
        }
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Resultant array elements: " << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}