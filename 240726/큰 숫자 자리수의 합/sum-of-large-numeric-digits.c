#include <stdio.h>

int F(int n)
{
    if (n / 10 == 0) {
        return n;
    }

    return (n % 10) + F(n / 10);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    int val = a * b * c;
    printf("%d", F(val));
    return 0;
}