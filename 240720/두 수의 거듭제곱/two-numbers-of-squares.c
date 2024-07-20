#include <stdio.h>

int square(int a, int b)
{
    int temp = a;
    for (int i = 1; i < b; i++) {
        a *= temp;
    }
    return a;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d", square(a, b));
    return 0;
}