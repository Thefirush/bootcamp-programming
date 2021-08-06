#include <iostream>

using namespace std;
int a[3][3], b[3][3], e[3][3];

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            e[i][j] = 0;
            for (int h = 0; h < 3; h++) {
                e[i][j] += a[i][h] * b[h][j];
            }
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << e[i][j] << " ";
        }
        cout << endl;
    }
}