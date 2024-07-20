#include <stdio.h>
#include <stdbool.h>

bool Contains369(int n)
{
    while (n > 0) {
        if (n % 10 == 3 || n % 10 == 6 || n % 10 == 9) {
            return true;
        }
        n /= 10;
    }
    return false;
}

bool Is369Number(int n)
{
    return Contains369(n) || (n % 3 == 0);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0;
    int cnt = 0;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        if (Is369Number(i)) {
            cnt++;
        }
    }
    
    printf("%d", cnt);
    return 0;
}