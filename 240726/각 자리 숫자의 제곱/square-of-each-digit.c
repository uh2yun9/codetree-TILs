#include <stdio.h>

int add_square(int n)
{
    if (n < 10) {
        return n * n;
    }

    return add_square(n / 10) + ((n % 10) * (n % 10));
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);
    printf("%d", add_square(n));
    return 0;
}