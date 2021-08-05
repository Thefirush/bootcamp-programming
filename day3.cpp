#include <iostream>
#include <climits>

using namespace std;

int find_shortest_path(int dis[5][5]) {

    int minPathDis = INT_MAX;
    int firstCity = 0;

    for (int C2 = 1; C2 <= 4; C2++) {
        for (int C3 = 1; C3 <= 4; C3++) {
            for (int C4 = 1; C4 <= 4; C4++) {
                for (int C5 = 1; C5 <= 4; C5++) {
                    int ordCit[5] = {firstCity, C2, C3, C4, C5};
                    bool cityAllDif = true;

                    for (int first = 0; first <= 4; first++) {
                        for (int sec = 0; sec <= 4; sec++) {
                            if (ordCit[first] == ordCit[sec] and first != sec) {
                                cityAllDif = false;
                            }
                        }
                    }

                    if (cityAllDif == false) continue;
                    else {
                        int curDis = dis[firstCity][C2];
                        curDis += dis[C2][C3];
                        curDis += dis[C3][C4];
                        curDis += dis[C4][C5];
                        curDis += dis[C5][firstCity];

                        if (curDis < minPathDis) {
                            minPathDis = curDis;
                        }
                    }

                }
            }
        }
    }


    return minPathDis;

}

int main() {

    int cities[5][5] = {
            {0,  3,  13, 9,  7},
            {3,  0,  6,  12, 10},
            {13, 6,  0,  9,  6},
            {9,  12, 9,  0,  8},
            {7,  10, 6,  8,  0}
    };

    cout << find_shortest_path(cities);

    return 0;
}
