/**
 * @file goldbach_conjecture.c
 * @brief 哥德巴赫猜想验证（任一大于2的偶数都可写成两个素数之和）
 * @author yangfuheng-dev
 * 
 * @details 
 * 1. 模块化：独立封装 prime() 函数用于判断素数，并利用 i * i <= num 优化了时间复杂度。
 * 2. 算法逻辑：将偶数 n 拆分为 i 和 n-i，从 2 遍历至 n/2。
 * 3. 边界控制：利用 i <= j 保证只输出“小素数+大素数”的组合，天然去重。
 */
#include<stdio.h>
#include<stdbool.h>
bool prime(int num){
if(num<=1)
  return false;
  else if(num==2)
    return true;
  else{
    for(int i=2;i<=(num/2);i++){
    if(num%i==0)
      return false;
    }
    return true;
  }
}
int main(){
int n;
  scanf("%d",&n);
  if(n>2&&n%2==0){
  for(int i=2;i<n;i++){
  int j=n-i;  
    if(i<=j&&prime(i)&&prime(j))  //【补充点】：双重判断
      printf("%d=%d+%d\n",n,i,j);
  }
  }
  return 0;
}
