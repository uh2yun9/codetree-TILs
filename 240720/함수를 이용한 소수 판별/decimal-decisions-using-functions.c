#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n)
{
    if (n == 1) {
        return false;
    }
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int add_prime_number(int a, int b)
{
    int sum = 0;
    for (int i = a; i <= b; i++) {
        if (is_prime(i)) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d", add_prime_number(a, b));
    return 0;
}