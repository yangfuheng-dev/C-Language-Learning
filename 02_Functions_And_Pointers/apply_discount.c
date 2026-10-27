/**
 * @file apply_discount.c
 * @brief 验证传址调用（通过指针修改原变量）
 * @author yangfuheng-dev
 * @date 2026-10-24
 */
#include<stdio.h>
double applyDiscount(double* price) {
	if (*price > 100.0)
		*price = *price * 0.8;
	else
		printf("不符合折扣要求\n");
	printf("商品最终价格为%.2lf\n", *price);
	return *price;
}
int main(void) {
	double myPrice;
	printf("请输入商品价格\n");
	scamf("%lf", &myPrice);
	applyDiscount(&myPrice);
	printf("%.2lf\n", myPrice);//【补充点】：检验传址特性（主函数与功能函数变量同时改变）
	return 0;
}
