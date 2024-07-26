#include <stdio.h>

int add_1toN(int n, int sum)
{
    if (n == 1) {
        sum += n;
        return sum;
    }

    sum += n;
    return add_1toN(n - 1, sum);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    int sum = 0;
    scanf("%d", &n);
    printf("%d", add_1toN(n, sum));
    return 0;
}