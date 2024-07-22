#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char str[])
{
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    char str[100];
    scanf("%s", str);
    if (isPalindrome(str)) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}