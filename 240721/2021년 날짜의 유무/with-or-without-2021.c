#include <stdio.h>

int exist_date(int m, int d)
{
    if (m < 1 || m > 12) {
        return 0;
    }

    if (m == 4 || m == 6 || m || 9 || m == 11) {
        if (d < 1 || d > 30) {
            return 0;
        }
    } else if (m == 2) {
        if (d > 28) {
            return 0;
        }
    } else {
        if (d < 1 || d > 31) {
            return 0;
        }
    }
    return 1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int m = 0, d = 0;
    scanf("%d %d", &m, &d);
    if (exist_date(m, d)) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}