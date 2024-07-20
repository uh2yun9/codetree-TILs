#include <stdio.h>

int is_magic_number(int a, int b)
{
    int cnt = 0;
    int num = 0;
    for (num = a; num <= b; num++) {
        if (num % 3 == 0) {
            cnt++;
        } else if (((num / 10) % 3 == 0) || (num % 10) % 3 == 0) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d", is_magic_number(a, b));
    return 0;
}