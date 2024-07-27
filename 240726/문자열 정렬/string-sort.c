#include <stdio.h>
#include <string.h>

void sortString(char str[])
{
    int n = strlen(str);
    char temp;

    // 버블 정렬
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    char str[100];
    scanf("%s", str);
    sortString(str);
    printf("%s", str);
    return 0;
}
