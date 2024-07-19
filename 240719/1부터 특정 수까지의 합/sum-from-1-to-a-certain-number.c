#include <stdio.h>

int add(int n)
{
    int tot = 0;
    for (int i = 1; i <= n; i++) {
        tot += i;
    }
    tot = tot / 10;
    printf("%d", tot);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);
    add(n);
    return 0;
}