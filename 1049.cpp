#include <iostream>

using namespace std ;

int main ()

{
    string nam1 , nam2, nam3 ;

    cin >> nam1 >> nam2 >> nam3 ;

    if ( nam1 == "vertebrado" && nam2 == "ave" && nam3 == "carnivoro")
    {
        cout << "aguia" << endl ;
    }
    else if ( nam1 == "vertebrado" && nam2 == "ave" && nam3 == "onivoro")
    {
        cout << "pomba" << endl ;
    }
    else if ( nam1 == "vertebrado" && nam2 == "mamifero" && nam3 == "onivoro"  )
    {
        cout << "homem" <<endl ;
    }
    else if ( nam1 == "vertebrado" && nam2 == "mamifero" && nam3 == "herbivoro" )
    {
        cout << "vaca" << endl;
    }
    else if ( nam1 == "invertebrado" && nam2 == "inseto" && nam3 == "hematofago" )
    {
        cout << "pulga" << endl;
    }
    else if ( nam1 == "invertebrado" && nam2 == "inseto" && nam3 == "herbivoro")
    {
        cout << "lagarta" << endl;
    }
    else if ( nam1 == "invertebrado" && nam2 == "anelideo" && nam3 == "hematofago" )
    {
        cout << "sanguessuga" <<endl ;
    }
    else
    {
        cout << "minhoca" << endl ;
    }
}
