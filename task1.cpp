#include <iostream>

using namespace std;
int a[2][2], b[2][2];

int main() {

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << " a + b " << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }

    cout << " a * b " << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << a[i][j] * b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}