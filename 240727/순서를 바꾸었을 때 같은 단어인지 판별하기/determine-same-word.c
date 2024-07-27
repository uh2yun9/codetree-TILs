#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareChars(const void *a, const void *b)
{
    return (*(char*)a - *(char*)b);
}

void sortString(char str[])
{
    int n = strlen(str);
    qsort(str, n, sizeof(char), compareChars);
}

void compareString(char a[], char b[])
{
    sortString(a);
    sortString(b);

    if (strcmp(a, b) == 0) {
        printf("Yes");
    } else {
        printf("No");
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    char sa[100];
    char sb[100];
    scanf("%s", sa);
    scanf("%s", sb);
    
    compareString(sa, sb);
    return 0;
}