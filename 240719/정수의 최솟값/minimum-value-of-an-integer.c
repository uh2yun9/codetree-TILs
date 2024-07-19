#include <stdio.h>

int minimum(int a, int b, int c)
{
    int min = 0;
    if (min = (a > b ? b : a)) {
        if (min > c) {
            min = c;
        }
    }
    return min;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    int min = minimum(a, b, c);
    printf("%d", min);
    return 0;
}