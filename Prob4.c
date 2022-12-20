#include <stdio.h>
// Scalene Triangle one
int main(void) {
	// your code goes here
	int testCases = 0;
	scanf("%i", &testCases);
	int ans[100] = { 0 };
	for(int i = 0 ; i < testCases ; i++){
	    int arr[3];
	    for(int j = 0; j < 3 ; j++){
	        scanf("%i",&arr[j]);
	        if(j>0){
	            if(arr[j] == arr[j-1]){
	                ans[i]+=1;
	            }
	        }
	    }
	}
	for(int i = 0 ; i < testCases ; i++){
	    if(ans[i] > 0){
	        printf("NO\n");
	    }
	    else{
	        printf("Yes\n");
	    }
	}
	return 0;
}

