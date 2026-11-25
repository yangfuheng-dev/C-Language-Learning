/**
 * @file cut_bar.c
 * @brief 递归截木条：按 2/5 位置四舍五入截断，统计最终木条根数
 * @author yangfuheng-dev
 *
 * @details
 * 核心思想：递归 + 四舍五入。
 * 长度 n 的木条在 2/5 处截为两段，短木条 = (n*2+2)/5（四舍五入），长木条 = n - 短木条；
 * 长度仍大于 k 则继续递归截断，否则返回 1（该段即最终 1 根），两段根数相加即为答案。
 *
 * @note 出口 n<=k 返回根数 1（不是长度）；(n*2+2)/5 中加 2 即除数 5 的一半，
 *       使余数 >=3 时正确进位，实现四舍五入；全程无辅助数组。
 */
#include<stdio.h>
int cut(int n, int k) {
	if (n <= k)
		return 1;
	return cut((n * 2+2) / 5, k) +cut(n - (n * 2+2) / 5, k);     //【补充点】:四舍五入通用格式：a/b四舍五入=（a+b/2）b
}
int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	printf("%d", cut(n, k));
	return 0;
}
