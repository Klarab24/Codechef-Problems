#include <stdio.h>
#include <stdlib.h>

int main(void){
    long int nT = 0;
    scanf("%li", &nT);
    for(int i = 0; i < nT ; i++){
        int a, b, k;
        scanf("%i %i %i", &a, &b, &k);
        int diff = abs(b - a);
        if(diff == 0){
            printf("0\n");
        }
        else{
            int ans = diff / k;
            if((diff % k) == 0){
                printf("%i\n", ans);
            }
            else{
                ans++;
                printf("%i\n", ans);
            }
        }
    }
}