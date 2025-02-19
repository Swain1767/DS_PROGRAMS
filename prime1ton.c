#include<stdio.h>

int main() {
    int n, i, j, count;
    
    printf("Enter max number: ");
    scanf("%d", &n);

for(i = 2; i <= n; i++) {
        count = 1;  

        for(j = 2; j <= i / 2; j++) {  
            if(i % j == 0) {
                count= 0;  
                break;
            }
        }
        
        if(count) {
            printf("%d ", i);
        }
    }

    return 0;
}
