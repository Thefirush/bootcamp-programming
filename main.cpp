#include <iostream>
#include <cmath>

using namespace std;

bool prime(int a) {
    for (int i = 2; i <= a - 1; i++)
        if (a % i == 0)
            return 0;
    return 1;
}

int main() {
    for (int i = 1; i <= 100; i++) {
        cout << i << " " << prime(i) << " " << prime(pow(2, i) - 1) << endl;
        if (prime(i) != prime(pow(2, i) - 1)) {
            return 0;
        }
    }
    return 0;

}
