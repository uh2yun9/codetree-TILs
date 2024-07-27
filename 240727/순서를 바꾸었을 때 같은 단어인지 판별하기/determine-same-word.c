#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareChars(const void *a, const void *b) {
    return (*(char*)a - *(char*)b);
}

void sortString(char str[]) {
    int n = strlen(str);
    qsort(str, n, sizeof(char), compareChars);
}

int main() {
    char str1[100];
    char str2[100];

    scanf("%s", str1);
    scanf("%s", str2);

    sortString(str1);
    sortString(str2);

    if (strcmp(str1, str2) == 0)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}