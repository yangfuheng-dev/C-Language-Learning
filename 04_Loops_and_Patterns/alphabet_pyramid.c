/**
 * @file alphabet_pyramid.c
 * @brief 打印字母金字塔（练习嵌套循环与边界控制）
 * @author yangfuheng-dev
 */

#include <stdio.h>

void move(int num) {
    for (int i = 1; i <= num; i++) {
        
        // 【避坑点】：空格数必须是递减的 (num - i)，千万别写成常数，否则会左对齐！
        for (int j = 1; j <= num - i; j++) {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }
        
        for (int j = i - 1; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
        }
        
        printf("\n"); 
    }
}

int main() {
    int n;
    scanf("%d", &n);
    move(n);
    return 0;
}
