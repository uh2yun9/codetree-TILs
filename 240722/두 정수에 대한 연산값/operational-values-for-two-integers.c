#include <stdio.h>

void calculate(int *a, int *b)
{
    if (*a > *b) {
        *a += 25;
        *b *= 2;
    } else {
        *a *= 2;
        *b += 25;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b =0;
    scanf("%d %d", &a, &b);
    calculate(&a, &b);
    printf("%d %d", a, b);
    return 0;
}