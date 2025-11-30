#include <stdio.h>
int sum(int n){
    int sum1 = 0, i;
    for(i = 1; i <= n; i++){
        sum1 = sum1 + i;
    }
    printf("%d", sum1);
}
int main(){
    int n;
    printf("Enter the number of natural numbers: ");
    scanf("%d", &n);
    sum(n);
    return 0;
}
