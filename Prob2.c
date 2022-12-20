#include <stdio.h>
#include <stdlib.h>

char * pln(int a, int b){
    if(a-b < 0){
        return "PROFIT";
    }
    if(a-b > 0){
        return "LOSS";
    }
    else{
        return "NEUTRAL";
    }
}

int main(void){
    int nT = 0;
    while (nT == 0 || nT < 0 || nT > 500){
        scanf("%i", &nT);
    }
    char * ans[nT];
    for(int i = 0; i <nT ; i++){
        int a = -1, b = -1;
        while(a < 0 || a > 100 ){
            scanf("%i", &a);
        }
        while(b < 0 || b > 100){
            scanf("%i", &b);
        }
        ans[i] = pln(a,b);
    }
    for(int i = 0; i < nT ; i++){
        printf("%s\n", ans[i]);
    }
}