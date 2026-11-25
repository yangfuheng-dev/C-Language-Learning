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
