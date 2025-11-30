#include <stdio.h>
int main(){
    int n, i;
    int a = 0, b = 1, c;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n == 0){
        printf("Fibonacci(%d) = 0\n", n);
        return 0;
    }
    for(i = 2; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    printf("Fibonacci(%d) = %d\n", n, b);
    return 0;
}
