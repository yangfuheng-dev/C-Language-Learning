/**
 * @file remove_duplicates.c
 * @brief 删除数组中的重复元素（不使用辅助数组，保留原顺序）
 * @author yangfuheng-dev
 * 
 * @details 
 * 核心思想：利用原地双指针覆盖法。
 * k 指针用来记录有效不重复元素的存放位置，i 指针负责向后探路。
 * 
 * 时间复杂度：O(n^2)
 * 空间复杂度：O(1)
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
}       //【补充点】快慢数组使用
}
  if(flag==0){
  a[k]=a[i];
    k++;
  }
}
  for(int i=0;i<k;i++){
  printf("%d ",a[i]);
  }
  return 0;
}
