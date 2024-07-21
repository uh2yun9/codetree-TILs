#include <stdio.h>

int is_leap_year(int y)
{
    if (y % 4 == 0) {
        if (y % 100 == 0) {
            if (y % 400 == 0) {
                return 1;
            }
            return 0;
        }
        return 1;
    }
}

int exist_date(int y, int m, int d)
{
    if (y > 3000) {
        return 0;
    }

    if (is_leap_year(y)) { // 윤년인 경우
        if (m == 2) {
            if (d < 1 || d > 29) {
            return 0;
            }
        }
    } else { // 윤년이 아닌 경우
        if (m == 2) {
            if (d < 1 || d > 28) {
                return 0;
            }
        }
    }

    if (m < 1 || m > 12) {
        return 0;
    }

    if (m == 4 || m == 6 || m == 9 || m == 11) {
        if (d < 1 || d > 30) {
            return 0;
        }
    } else {
        if (d < 1 || d > 31) {
            return 0;
        }
    }
    return 1;
}

void is_season(int y, int m, int d)
{
    if (exist_date(y, m, d)) {
        if (m >= 3 && m <= 5) {
            printf("Spring");
        } else if (m >= 6 && m <= 8) {
            printf("Summer");
        } else if (m >= 9 && m <= 11) {
            printf("Fall");
        } else if (m == 12 || (m >= 1 && m <= 2)) {
            printf("Winter");
        } else {
            printf("%d", -1);
        }
    } else {
        printf("%d", -1);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int y = 0, m = 0, d = 0;
    scanf("%d %d %d", &y, &m, &d);
    is_season(y, m, d);
    return 0;
}
