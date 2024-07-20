#include <stdio.h>

int is_prime(int n)
{
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int is_even(int n)
{
    if ((n / 10 + n % 10) % 2 == 0) {
        return 1;
    }
    return 0;
}

int count_magic_number(int a, int b)
{
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (is_prime(i)) {
            if (is_even(i)) {
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d", count_magic_number(a, b));
    return 0;
}