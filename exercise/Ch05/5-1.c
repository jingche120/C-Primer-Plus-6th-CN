/*
 * author：JasonLin
 * Description:
 */
// ??一?程序，把用分?表示的????成用小?和分?表示的??。
// 使用#define或const?建一?表示60的符?常量或const?量。
// 通?while循??用?重复?入值，直到用??入小于或等于0的值才停止循?。
#include <stdio.h>
#define mins_to_hours 60
int main(){
    int min;
    printf("請輸入多少分鐘，將他轉成小時/分 若輸入0則終止\n");
    scanf("%d",&min);
    while (min != 0)
    {
        int hours = min/mins_to_hours;
        printf("%d小時/%d分\n",hours,min-hours*mins_to_hours);
        printf("請輸入多少分鐘，將他轉成小時/分 若輸入0則終止\n");
        scanf("%d",&min);
    }
    

    return 0;
}