#include <stdio.h>

int square(int a, int b)
{
    int temp = 1;
    for (int i = 1; i <= b; i++) {
        temp *= a;
    }
    return temp;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d", square(a, b));
    return 0;
}
