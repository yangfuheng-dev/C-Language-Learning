/**
 * @file bracket_matching.c
 * @brief 括号匹配问题（数据结构：栈的经典应用）
 * @author yangfuheng-dev
 * 
 * @details 
 * 1. 核心思想：利用数组模拟“栈”（后进先出，LIFO）。
 * 2. 遇到左括号入栈；遇到右括号，检查栈顶元素是否与之匹配。
 * 3. 边界处理：处理了右括号多余（栈提前为空）、左括号多余（遍历结束栈不为空）、
 *    以及括号交叉（如 "(]"）等所有异常情况。
 * 
 * @note 时间复杂度：O(n) （只需遍历字符串一次）
 *       空间复杂度：O(n) （最坏情况下，例如全为左括号，需要存储 n 个字符）
 */
#include<stdio.h>
#include<stdbool.h>
bool judgment(){
  char stack[1000],c;
  int top=0;
while(scanf("%c",&c)!=EOF&&c!='@'){
  if (c == '(' || c == '[' || c == '{') {
  stack[top]=c;
  top++;     //【补充点1】：左匹配
} 
  else if(c == ')' || c == ']' || c == '}') {
    if(top==0)
      return false;
   char left = stack[top - 1];
            if ((c == ')' && left == '(') || 
                (c == ']' && left == '[') || 
                (c == '}' && left == '{')) {
                top--;     //【补充点2】；右匹配
            }
    else
      return false;
  }
}
  if(top==0)
    return true;
  else
 return false;
}
int main(void){
  if(judgment())
    printf("YES\n");
  else
    printf("NO\n");
  return 0;
}
