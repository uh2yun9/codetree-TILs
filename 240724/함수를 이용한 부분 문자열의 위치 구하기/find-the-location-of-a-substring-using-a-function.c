#include <stdio.h>
#include <string.h>

int string_check(const char *input, const char *purpose) {
    int input_len = strlen(input);
    int purpose_len = strlen(purpose);

    for (int i = 0; i <= input_len - purpose_len; i++) {
        int j;
        for (j = 0; j < purpose_len; j++) {
            if (input[i + j] != purpose[j]) {
                break;
            }
        }
        if (j == purpose_len) {
            return i;
        }
    }
    return -1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    char input[1000];
    char purpose[1000];

    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // 개행 문자 제거

    fgets(purpose, sizeof(purpose), stdin);
    purpose[strcspn(purpose, "\n")] = '\0'; // 개행 문자 제거

    int result = string_check(input, purpose);
    if (result != -1) {
        printf("%d", result);
    } else {
        printf("%d", -1);
    }
    return 0;
}