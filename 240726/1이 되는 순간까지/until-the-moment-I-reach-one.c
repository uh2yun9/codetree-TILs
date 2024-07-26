#include <stdio.h>

int F(int n, int tot)
{
    if (n == 1) {
        return tot;
    }

    if (n % 2 == 0) {
        tot += 1;
        return F(n / 2, tot);
    } else {
        tot += 1;
        return F(n / 3, tot);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    int tot = 0;
    scanf("%d", &n);
    printf("%d", F(n, tot));
    return 0;
}