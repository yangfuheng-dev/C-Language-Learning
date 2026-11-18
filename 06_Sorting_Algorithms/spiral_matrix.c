/**
 * @file spiral_matrix.c
 * @brief 螺旋矩阵（二维数组与边界控制）
 * @author yangfuheng-dev
 * 
 * @details 
 * 核心思想：边界收缩法（模拟法）。
 * 设定 top, bottom, left, right 四个边界，顺时针依次填充上、右、下、左四条边，
 * 每填完一条边，对应的边界向内收缩一格，直到所有元素填满。
 * 
 * @note 输出格式：使用 %4d 控制格式，保证每个数字占 4 个字符宽度右对齐，排版美观。
 */

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[35][35];
    
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int num = 1;
    
    while (num <= n * n) {
        for (int i = left; i <= right; i++) a[top][i] = num++;
        top++;
        
        for (int i = top; i <= bottom; i++) a[i][right] = num++;
        right--;
        
        for (int i = right; i >= left; i--) a[bottom][i] = num++;
        bottom--;
        
        for (int i = bottom; i >= top; i--) a[i][left] = num++;
        left++;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
