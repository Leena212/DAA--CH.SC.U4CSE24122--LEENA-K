#include <stdio.h>
int sumSquares(int n){
    int sum1 = 0, i;
    for(i = 1; i <= n; i++){
        sum1 = sum1 + i * i;
    }
    printf("Sum of squares = %d", sum1);
    return sum1;
}
int main(){
    int n;
    printf("Enter the number of natural numbers: ");
    scanf("%d", &n);
    sumSquares(n);
    return 0;
}
