#include <stdio.h>

int F(int n, int sum)
{
    if (n % 2 != 0) {
        sum += n;
        if (n - 1 == 0) {
            return sum;
        }
        return F(n - 2, sum);
    } else {
        sum += n;
        if (n - 1 == 1) {
            return sum;
        }
        return F(n - 2, sum);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    int sum = 0;
    scanf("%d", &n);
    printf("%d", F(n, sum));
    return 0;
}