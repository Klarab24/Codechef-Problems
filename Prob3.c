#include <stdio.h>
#include <stdlib.h>

int main(void){
    long int nT = 0;
    while (nT == 0 || nT < 0 || nT > 500){
        scanf("%li", &nT);
    }
    int ansa[nT];
    for(int i = 0; i <nT ; i++){
        int a = -1, b = -1, k = -1;
        while(a < 0 || a > 1000 ){
            scanf("%i", &a);
        }
        while(b < 0 || b > 100){
            scanf("%i", &b);
        }
        while(k < 0 || k > 100){
            scanf("%i", &k);
        }
        int diff = abs(b - a);
        if(diff == 0){
            ansa[i] = 0;
        }
        else{
            int ans = diff / k;
            if((diff % k) == 0){
                ansa[i] = ans;
            }
            else{
                ans++;
                ansa[i] = ans;
            }
        }
    }

    for(int i = 0; i < nT ; i++){
        printf("%s\n", ansa[i]);
    }
}