#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,t,sum=0; 
    scanf("%d",&t);
    
    while(t--){
        sum=0; 
        scanf("%d",&n);
        for(int j=3; j<n; j++)
        {
            if(j%3==0 || j%5==0)
            {
                sum = sum+j; 
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
