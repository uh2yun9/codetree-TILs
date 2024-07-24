#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char text[1000], pattern[1000];

bool IsSubStr(int start_idx)
{
    int n = (int)strlen(text);
    int m = (int)strlen(pattern);

    if (start_idx + m - 1 >= n) {
        return false;
    }

    for (int j = 0; j < m; j++) {
        if (text[start_idx + j] != pattern[j]) {
            return false;
        }
    }
    return true;
}

int FindIndex()
{
    int n = (int)strlen(text);
    for (int i = 0; i < n; i++) {
        if (IsSubStr(i)) {
            return i;
        }
    }
    return -1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%s", text);
    scanf("%s", pattern);
    printf("%d", FindIndex());
    return 0;
}