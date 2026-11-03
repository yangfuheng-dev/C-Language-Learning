```c
/**
 * @file sorting_comparison.c
 * @brief 实验04：三种排序算法的实现与性能对比
 * @author yangfuheng-dev
 */
```
#include <stdio.h>

void rank1(int arr[]){
    int compare = 0, change = 0, t;
    for(int i = 0; i < 9; i++){
        int min_idx = i;     //用于寻找最小量
        for(int j = i + 1; j < 10; j++){
            compare++;
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        t = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = t;
        change++;
    }
    printf("%d %d ", compare, change);
}

void rank2(int arr[]){
    int compare = 0, change = 0, t;
    for(int i = 0; i < 10; i++){
        int flag = 0;    //防止过度循环，用于无交换退出循环
        for(int j = 0; j < 9; j++){
            compare++;
            if(arr[j] > arr[j+1]){
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
                change++;
                flag = 1;
            }
        }
        if(flag == 0) break; 
    }
    printf("%d %d ", compare, change);
}

void rank3(int arr[]){
    int compare = 0, change = 0;
    for(int i = 1; i < 10; i++){
        int key = arr[i];   //用于保留前面数字防止覆盖
        int j = i - 1;
        while(j >= 0){
            compare++; 
            if(arr[j] > key){
                arr[j + 1] = arr[j];
                change++;
                j--;
            } else {
                break;
            }
        }
        if(j < 0){
            compare++;
        }
        if(j != i - 1) { 
            change++; 
        }
        arr[j + 1] = key;    //填补上面a[j]空位
    }
    printf("%d %d\n", compare, change); 
}

int main(void){
    int a1[10], a2[10], a3[10];
    for (int i = 0; i < 10; i++){
        scanf("%d", &a1[i]);
        a2[i] = a1[i];    //数组传址，备份防止上面排好影响后面
        a3[i] = a1[i];    //同上
    }
    rank1(a1);
    rank2(a2);
    rank3(a3);
    return 0;
}
