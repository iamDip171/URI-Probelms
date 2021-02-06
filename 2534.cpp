/*#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n ; cin >> m >> n;
    
    int ar[100], arr[100] ;
    
    for (int i=0; i<m; i++) cin >> ar[i] ;
    for (int i=0; i<n; i++) cin >> arr[i] ;
    
    sort(ar, ar+m, greater<int>()) ;
    
    for (int i=0; i<n; i++){
        cout << ar[arr[i]-1] << "\n" ;
    }
}
*/
/*
#include <stdio.h>

int main () 
{
    int num1, num2, num3, max=0; scanf("%d %d %d", &num1, &num2, &num3) ;

    if (num1 > num2)
    {
        if (num1 < num3){
            max = num1 ;
        }
        else max = num2 ;
    }
    else if (num2 > num3)
    {
        if (num2 < num1) max = num2 ;
        else max = num1 ;
    }
    else if (num1 < num2){
        if (num2 < num3) max = num2 ;
        else max = num1 ;
        
    }

    printf ("%d\n", max) ;

    
}*/

#include <stdio.h>
int main ()
{
    int num, temp, temp2; scanf("%d", &num) ;
     temp = num-1 ; temp2 = temp ;

     for (int i=1; i<=num; i++)
     {
        for (int j=1; j<=i; j++)
        {
            printf("%d ", num - temp) ;
            temp++ ; 
        }
        printf ("\n") ; temp-=(i+1) ;
     }

}