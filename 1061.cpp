#include <iostream>

using namespace std ;

int main ()

{
    string Day1, Day2, colon ;
    int day1, hor1, min1, sec1, day2, hor2, min2, sec2, var1, rar1, rar2, rar3, rar4,rar5 , rar6 ;

    cin  >> Day1 >> day1 >> hor1 >> colon >> min1 >> colon >> sec1>> Day2>> day2 >> hor2 >> colon >> min2 >> colon >> sec2 ;

    int ans1 = day1*86400 + hor1*3600 + min1*60 + sec1 ;
    int ans2 = day2*86400 + hor2*3600 + min2*60 + sec2 ;


        var1 = ans2 - ans1 ;


            rar1 = var1/86400 ;
            rar2 = var1%86400 ;
            rar3 = rar2 / 3600 ;
            rar4 = rar2 % 3600 ;
            rar5 = rar4 / 60 ;
            rar6 = rar4 % 60 ;

    cout << rar1 << " dia(s)\n" << rar3 << " hora(s)\n" << rar5 << " minuto(s)\n" << rar6 << " segundo(s)\n";


}
