#include <iostream>
using namespace std;
int find_short(int dist [4][4]){
    int minidist = INT_MAX;
    int firstCity = 0;
    for (int sec_city = 1; sec_city <= 3; sec_city += 1){
        for (int thre_city = 1; thre_city <= 3; thre_city += 1){
            for (int four_city = 1; four_city <= 3; four_city += 1){
                int orderedOfCit[4] = {firstCity, sec_city, thre_city, four_city}
                bool citiDiff = true

                for (int first = 0; first <= 3; first ++) {
                    for (int second = 1; second <= 3, second ++) {
                        if (orderOfCities[first] == orderOfCities[second]) {
                            citiDiff == false;

                        }
                    }
                }
                if (citiDiff == false) continue;
                else {
                    int currrentDistance = distances[fir]

                }
            }
        }
    }
}
int main() {

    return 0;
}//
// Created by Анастасия on 04.08.2021.
//

