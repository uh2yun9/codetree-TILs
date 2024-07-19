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
    return b;
}

int lcm(int a, int b, int gcd)
{
    int c = a * b;
    c = c / gcd;
    return c;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);
    int g = gcd(n, m);
    printf("%d", lcm(n, m, g));
    return 0;
}