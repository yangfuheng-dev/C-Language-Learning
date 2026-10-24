/**
 * @file combination_calculator.c
 * @brief 实验03-模块化程序设计：根据 m 和 n 的关系计算特定分段函数（组合数）。
 * @author yangfuheng-dev
 * @date 2026-10-24
 * 
 * @details 
 * 1. 模块化设计：将四个不同的分支逻辑封装为四个独立函数，主函数仅负责条件判断与分发。
 * 2. 防溢出处理：由于 m, n <= 20，阶乘极易导致 32 位整数溢出。本代码采用 double 存储，
 *    并采用“先连乘计算分子，再依次连除分母”的策略，完美规避了溢出风险。
 * 
 * @note
 * 时间复杂度：O(m) （主要耗时在计算阶乘的循环，m 最大为 20，执行极快）
 * 空间复杂度：O(1) （仅使用了几个局部变量，无额外空间开销）
 */
#include<stdio.h>
void calculate0(){
  printf("0\n");
}
void calculate1(){
  printf("1\n");
}
double calculate2(int num1,int num2 ){
  double result=1.0;
  int i,j,k;
  for(i=1;i<=num1;i++){
    result=result*i*1.0;
  }
  for(j=1;j<=num1-num2;j++){
       result=result/j/1.0;
  }
  for(k=1;k<=num2;k++){
       result=result/k/1.0;
  }
  printf("%.0lf\n",result);
  return result;
}
void calculate3(){
  printf("-1\n");
}
int main(void){
  int m,n;
  scanf("%d %d",&m,&n);
    if(m>0&&n>0){
    if(m<n)
      calculate0();
  else if(m==n)
      calculate1();
   else if(m>n)
      calculate2(m,n);
    }
  else
    calculate3();
  return 0;
}


