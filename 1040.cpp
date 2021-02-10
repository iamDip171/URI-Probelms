#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double N1, N2, N3, N4 ;

    cin >> N1 >> N2 >> N3 >> N4 ;

    double ans = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10 ;

    cout << showpoint ;
    cout << fixed ;
    cout << setprecision (1) ;
    cout << "Media: " << ans << endl ;

    if ( ans < 5.0 )
    {
        cout << "Aluno reprovado." << endl ;
    }
    else if ( ans >= 7.0 )
    {
        cout << "Aluno aprovado." << endl;
    }
    else
    {
        cout << "Aluno em exame." << endl ;
        double z ;

        cin >> z ;
        cout << "Nota do exame: " << z << endl;

        double ans2 = (ans + z) / 2 ;
        cout << "Aluno aprovado." << endl ;
        cout << "Media final: " << ans2 << endl ;

    }


}