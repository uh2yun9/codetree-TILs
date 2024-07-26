#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) 
{
    int mod;
    mod = a % b;
    while (mod) {
        a = b;
        b = mod;
        mod = a % b;
    }
    return b;
}

int lcm(int a, int b, int g)
{
    return (a * b) / gcd(a, b);
}

int arr_lcm(int n, int *arr)
{
    if (n == 1) {
        return arr[0];
    }

    int l = arr[0];
    for (int i = 1; i < n; i++) {
        l = lcm(l, arr[i]);
    }
    return l;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0, g = 0;
    int *arr;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("%d", arr_lcm(n, arr));
    free(arr);
    return 0;
}