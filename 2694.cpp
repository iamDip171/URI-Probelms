#include <bits/stdc++.h>
using namespace std ;

void getSum(string s1, string s2, string s3) {
    int num1, num2, num3 ;

    num1 = stoi(s1) ;
    num2 = stoi(s2) ;
    num3 = stoi(s3) ;

    printf ("%d\n", num1+num2+num3) ;
}
int main ()
{
    int n;
    string s, num1, num2, num3 ;

    cin >> n ;

    while (n--) {
        cin >> s ;
        num1 = s.substr(2, 2) ;
        num2 = s.substr(5, 3) ;
        num3 = s.substr(11, 2) ;

        getSum (num1, num2, num3) ;
    }
}