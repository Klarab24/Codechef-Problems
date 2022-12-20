#include <stdio.h>
#include <stdlib.h>

int compare(int a, int b){
    return (((a)>(b)) ? (a):(b));
}

int main(void){
    int nT = 0;
    while (nT == 0 || nT < 0 || nT > 1000){
        scanf("%i", &nT);
    }
    int ans[nT];
    for(int i = 0; i <nT ; i++){
        int a = -1, b = -1;
        while(a < 0 || a > 100 ){
            scanf("%i", &a);
        }
        while(b < 0 || b > 100){
            scanf("%i", &b);
        }
        ans[i] = compare(a,b);
    }
    for(int i = 0; i < nT ; i++){
        printf("%i\n", ans[i]);
    }
}