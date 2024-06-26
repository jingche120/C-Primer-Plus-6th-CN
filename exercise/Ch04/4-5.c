/*
 * author：JasonLin
 * Description:
 */
// 4-5 寫一個程序，提示使用者輸入以兆位元每秒（Mb/s）為單位的下載速度
// 和以兆位元組（MB）為單位的檔案大小。
// 程式中應計算檔案的下載時間。 // 注意，這裡1位元組等於8位元。使用float類型，並用/作為除號。
// 程式要以下面的格式列印 3 個變數的值（下載速度、檔案大小和下載時間），
// 顯示小數點後面兩位數字： // At 18.12 megabits per second, a file of 2.20 megabytes
// downloads in 0.97 seconds.
#include <stdio.h>

int main(){
    float speed;
    float size;
    float total;
    printf("請輸入輸入以兆位元每秒（Mb/s）為單位的下載速度: \n");
    scanf("%f",&speed);
    printf("請輸入輸入以兆位元組（MB）為單位的檔案大小 \n");
    scanf("%f",&size);
    total = size/speed;
    printf("下載速度%f、檔案大小%f 和下載時間%.2f",speed,size,total);

    return 0;
}