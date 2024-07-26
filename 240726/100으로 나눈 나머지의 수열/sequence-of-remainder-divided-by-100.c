#include <stdio.h>

int F(int n)
{
    if (n == 1) return 2;
    if (n == 2) return 4;
    if (n >= 3) {
        return F(n - 1) * F(n - 2) % 100;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);
    printf("%d", F(n));
    return 0;
}