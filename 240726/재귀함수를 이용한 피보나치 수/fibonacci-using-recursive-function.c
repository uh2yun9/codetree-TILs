#include <stdio.h>

int Fibo(int n)
{
    if (n == 1 || n == 2) {
        return 1;
    }
    return Fibo(n - 2) + Fibo(n - 1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);
    printf("%d", Fibo(n));
    return 0;
}