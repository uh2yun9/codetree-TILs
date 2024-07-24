#include <stdio.h>

void recursive_print(int n)
{
    if (n == 0) {
        return;
    }
    printf("%d ", n);
    recursive_print(n - 1);
    printf("%d ", n);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);
    recursive_print(n);
    return 0;
}