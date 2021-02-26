#include <stdio.h>

int main(){

    int x,y,i;

    scanf("%d %d", &x, &y) ;
    int n = 1;

    for(i = 1; i <= y; i++){
            if(n == x) {
                 printf("%d\n", i);
                 n = 1;
            }
            else{
            printf("%d ", i);
            n++;
            }
    }
    return 0;
}
