/**
 * @file remove_duplicates_v2.c
 * @brief 删除数组中的重复元素（双指针优化版）
 * @author yangfuheng-dev
 * 
 * @details 
 * 核心思想：原地双指针覆盖法。
 * 利用 k 指针记录不重复元素的位置，i 指针向后探路。
 * 时间复杂度：O(n)，空间复杂度：O(1)。
 */
#include<stdio.h>
  int main(void){
int a[100],n,t,flag=0,k=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
  scanf("%d",&a[i]);

  }
for(int i=0;i<n;i++){
  flag=0;
for(int j=0;j<k;j++){
if(a[i]==a[j]){
flag=1;
  break;
}
}
  if(flag==0){
  a[k]=a[i];             //【补充点】：快慢数组
    k++;
  }
}
  for(int i=0;i<k;i++){
  printf("%d ",a[i]);
  }
  return 0;
}
