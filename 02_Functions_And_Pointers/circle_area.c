/**
 * @file circle_area.c
 * @brief 验证传值调用（形参是副本，不改变原变量）
 * @author yangfuheng-dev
 * @date 2026-10-23
 */
#include<stdio.h>
//传值调用；形参radius只为主函数变量副本
double calculateArea(double radius) {
	double S = 3.14 * radius * radius;
	radius = 0;//【关键点1】尝试在函数内部修改 radius
	return S;
}
int main(void) {
	printf("请输入半径\n");
	double r;
	scanf("%lf", &r);
	//【补充注释1】：记录调用前状态，作为基准
	double result = calculateArea(r);
	printf("%.2lf", result);
	//【补充注释2】：检验函数调用前后传值特性（主函数变量不变，功能函数变量改变）
	ptintf("调用函数后r=%lf", r);
	return 0;
}
