#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int n)
{
    if (n % 4 == 0) {
        return true;
    }
    if (n % 100 == 0 && n % 400 != 0) {
        return false;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int year = 0;
    scanf("%d", &year);
    if (is_leap_year) {
        printf("true");
    } else {
        printf("false");
    }
    return 0;
}