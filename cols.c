#include <stdio.h>
int main() {
    int m, n;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);
    int a[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element %d%d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        int t = a[i][0];
        a[i][0] = a[i][n-1];
        a[i][n-1] = t;
    }
    printf("\nMatrix after swapping first and last columns:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
