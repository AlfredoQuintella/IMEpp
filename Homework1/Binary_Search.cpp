#include <cstdio>

int Search(int arr[], int n, int t) {
    int a = 0, b = n - 1, c, result = -1;
    while (a <= b) {
        c = (a + b) / 2;

        if (arr[c] == t){
            result = c;
            b = c - 1;
        }
        if (arr[c] < t) 
            a = c + 1;
        else 
            b = c - 1;
    }
    return result;
}

int main() {
    int n, q, a;
    scanf("%d %d", &n, &q);
    int list1[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &list1[i]);
    }
    while (q--) {
        scanf("%d", &a);
        printf("%d ", Search(list1, n, a));
    }

    return 0;
}
