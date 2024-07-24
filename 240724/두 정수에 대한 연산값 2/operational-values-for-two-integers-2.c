#include <stdio.h>

void calculate(int *a, int *b)
{
    if (*a > *b) {
        *a *= 2;
        *b += 10;
    } else {
        *a += 10;
        *b *= 2;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    calculate(&a, &b);
    printf("%d %d", a, b);
    return 0;
}