#include <iostream>
using namespace std ;

int main ()
{
    int N, i=0, j ;
    string ch1, ch2,pedra, papel, tesoura, lagarto , Spock ;

    cin >> N ;

    for (j=1; j<=N; j++)
    {
        cin >> ch1 >> ch2 ;
        if (ch1==ch2) cout << "Caso #" << j << ": "  << "De novo!\n" ;
        else if (ch1=="papel" && ch2=="pedra" || ch1=="tesoura" && ch2=="papel")
        {
            cout << "Caso #" << j << ": " << "Bazinga!\n" ;
        }

        else if (ch1=="pedra" && ch2=="lagarto" || ch1=="lagarto" && ch2=="Spock")
        {
            cout << "Caso #" << j << ": " << "Bazinga!\n" ;
        }
        else if (ch1=="pedra" && ch2=="lagarto" || ch1=="lagarto" && ch2=="Spock")
        {
            cout << "Caso #" << j << ": " << "Bazinga!\n" ;
        }
        else if (ch1=="Spock" && ch2=="tesoura" || ch1=="tesoura" && ch2=="lagarto")
        {
            cout << "Caso #" << j << ": " << "Bazinga!\n" ;
        }
        else if (ch1=="lagarto" && ch2=="papel" || ch1=="papel" && ch2=="Spock" )
        {
            cout << "Caso #" << j << ": " << "Bazinga!\n" ;
        }
        else if (ch1=="Spock" && ch2=="pedra" || ch1=="pedra" && ch2=="tesoura" )
        {
            cout << "Caso #" << j << ": " << "Bazinga!\n" ;
        }
        else cout << "Caso #" << j << ": " << "Raj trapaceou!\n" ;


    }
}
