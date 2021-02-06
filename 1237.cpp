#include <bits/stdc++.h>
using namespace std ;

int maxCount (int array[], int size) {

    int max = 0 ;

    max = array[0] ;

    for (int i=1; i<size; i++){
        if (max < array[i]) {
            max = array[i] ;
        }
    }

    return max ;
}

int main ()
{
    string s1, s2 ;
    getline (cin, s1) ;
    while (getline(cin, s2)) {
        
        int countArray[500] = {0}, m = 0, n = 0, math = 0 , count = 0;

        for (int i=0; i< s1.length(); i++){
            for (int j=0; j< s2.length(); j++) {
                if (s1[i] == s2[j]){
                    m = i ;
                    n = j ;
                    while(s1[m] == s2[n] && m < s1.length() && n < s2.length()) {
                        count++ ;
                        m++ ;
                        n++ ;
                    }

                    countArray[math] = count ;
                    count = 0 ;
                    math++ ;
                }
            }
        }
        cout << maxCount(countArray, math) << "\n" ;
        getline(cin, s1) ;
    }
}  

