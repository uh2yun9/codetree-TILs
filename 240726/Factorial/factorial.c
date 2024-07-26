#include <stdio.h>

int factorial(int n)
{
    if (n == 1) {
        return 1;
    }
    return factorial(n - 1) * n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}