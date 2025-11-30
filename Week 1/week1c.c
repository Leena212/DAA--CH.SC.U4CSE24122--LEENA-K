#include <stdio.h>
int sumCubes(int n){
    int sum = 0, i;
    for(i = 1; i <= n; i++){
        sum = sum + i*i*i;
    }
    return sum;
}
int main(){
    int n;
    printf("Enter the number of natural numbers: ");
    scanf("%d", &n);
    int result = sumCubes(n);
    printf("Sum of cubes = %d\n", result);
    return 0;
}