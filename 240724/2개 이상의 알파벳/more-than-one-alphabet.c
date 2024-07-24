#include <stdio.h>
#include <string.h>

int string_check(char str[])
{
    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = i + 1; str[j] != '\0'; j++) {
            if (str[i] != str[j]) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    // 여기에 코드를 작성해주세요.
    char str[100];
    scanf("%s", str);
    if (string_check(str)) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}