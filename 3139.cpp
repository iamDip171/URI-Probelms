#include <bits/stdc++.h>
using namespace std ;

int rtrnAvg (int st, int ed, int arr[]) {
    int sum = 0, avg = 0;

    for (int i=st; i<ed; i++) {
        sum += arr[i] ;
    }

    avg = sum/30 ;
    return avg ;
}

int rtrnSum (int scoreCur, int arr) {
    return scoreCur+arr ;
}

int main () {
    int current, goal ;
    int arr[30] ;
}