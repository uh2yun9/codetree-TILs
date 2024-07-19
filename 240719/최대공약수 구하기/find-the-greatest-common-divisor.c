#include <stdio.h>

int gcd(int a, int b)
{
    int mod;
    mod = a % b;
    while (mod) {
        a = b;
        b = mod;
        mod = a % b;
    }
    printf("%d", b);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);
    gcd(n, m);
    return 0;
}