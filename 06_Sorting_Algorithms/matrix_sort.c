/**
 * @file matrix_sort.c
 * @brief 二维数组排序（不使用辅助数组）
 * @author yangfuheng-dev
 *
 * @details
 * 核心思想：一维化冒泡 + 下标换算。
 * 将 m 行 n 列二维数组视为长度为 m*n 的一维序列进行冒泡排序，
 * 通过 r1 = j / n、c1 = j % n 把"第 j 个数"换算成 a[行][列]，相邻两数比较交换，
 * 排完仍按 m 行每行 n 列输出。
 *
 * @note 排序函数形参依次为行数 m、列数 n、数组 a[][100]，仅用单个变量 t 交换，
 *       不借助任何辅助数组；二维数组形参第二维写死 100，与主函数保持一致。
 */
#include<stdio.h>
void sort(int m, int n, int a[][100]) {
	int i, j, t,r1,r2,c1,c2,total=m*n;
	for (i = 0;i < total - 1;i++) {
		for (j = 0;j < total - 1;j++) {
			r1 = j / n, c1 = j % n, r2 = (j + 1) / n, c2 = (j + 1) % n;     //【补充点】；行列转换，j/n转换为二维数组行数，j%n转换为二维数组列数
			if (a[r1][c1] > a[r2][c2]) {
				t = a[r1][c1];
				a[r1][c1] = a[r2][c2];
				a[r2][c2] = t;
			}
		}
	}
}
int main() {
    int m, n;
    scanf("%d%d", &m, &n);

    int a[100][100];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    sort(m, n, a);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
