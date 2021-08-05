#include <bits/stdc++.h>
using namespace std;
int n;
int fun(int a) {
    if (a < 1) {
        return 0;
    } else if (a == 1) {
        return 1;
    } else
        return fun(a - 1) + fun(a - 2);
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << fun(i) << " ";
    }
    return 0;
}
