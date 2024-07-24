#include <stdio.h>

void print_1toN(int n, int s)
{
    if (s > n) {
        return;
    }

    printf("%d ", s);
    s++;
    print_1toN(n, s);
}

void print_Nto1(int n, int s)
{
    if (n < s) {
        return;
    }

    printf("%d ", n);
    n--;
    print_Nto1(n ,s);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    int s = 1;
    scanf("%d", &n);
    print_1toN(n, s);
    printf("\n");
    print_Nto1(n, s);
    return 0;
}