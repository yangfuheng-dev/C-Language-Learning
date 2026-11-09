/**
 * @file move_zeroes.c
 * @brief 转移0元素（将所有 0 移到末尾，非 0 元素保持原序）
 * @author yangfuheng-dev
 * 
 * @details 
 * 核心思想：原地双指针覆盖法（不使用辅助数组）。
 * 利用指针 k 记录非0元素应该存放的位置，遍历数组遇到非0元素即向前覆盖，
 * 遍历结束后，将 k 之后的所有位置填充为 0。
 * 
 * 时间复杂度：O(n)
 * 空间复杂度：O(1)
 */
#include<stdio.h>
  int main(void){
int a[100],t,n,i,j,k=0,flag;
scanf("%d",&n);
  for(i=0;i<n;i++){
  scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
  for(k=0;k<n;k++){
  flag=0;
    if(a[k]!=0&&k>=i&&a[i]==0){     //【补充点】k>=i防止重复
    flag=1;
      a[i]=a[k];
      a[k]=0;
      break;
    }
  }
    if(flag==0&&a[i]==0)           //【补充点】ai==0防止未改完
    break;
  }
  for(i=0;i<n-1;i++){
  printf("%d ",a[i]);
  }
    printf ("%d",a[n-1]);
  return 0;
  }
