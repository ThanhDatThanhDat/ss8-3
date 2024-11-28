#include <stdio.h>

int main() {
    int n;

    printf("Nhap vao mot so nguyen n: ");
    scanf("%d", &n);

    int arr[n][n];
    printf("Nhap cac phan tu cho ma tran %dx%d:\n", n, n);
    int i, j; 
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
  
    printf("\nMa tran vuong %dx%d là:\n", n, n); 
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

