#include <stdio.h>
int main() {
    int m, n;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &m, &n);
    int a[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter %d%dth element: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int i = 0, j = m - 1;
    for (int k = 0; k < n; k++) {
        int t = a[i][k];
        a[i][k] = a[j][k];
        a[j][k] = t;
    }
    printf("\nMatrix after swapping first and last row:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
