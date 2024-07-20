#include <stdio.h>

int is_whole_number(int num) {
    if (num % 2 == 0) {
        return 0;
    }
    if (num % 10 == 5) {
        return 0;
    }
    if (num % 3 == 0 && num % 9 != 0) {
        return 0;
    }
    return 1;
}

int count_whole_numbers(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (is_whole_number(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", count_whole_numbers(a, b));
    return 0;
}