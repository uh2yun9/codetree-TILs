#include <stdio.h>

void is_maginc_number(int n) 
{
    int a = n / 10;
    int b = n % 10;

    if (n % 2 == 0) {
        if ((a + b) % 5 == 0) {
            printf("Yes");
        }
    } else {
        printf("No");
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);
    is_magic_number(n);
    return 0;
}