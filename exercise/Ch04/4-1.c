/*
 * author：JasonLin
 * Description:
 */
// 4-1 寫一個程序，提示使用者輸入名和姓，然後以「名,姓」的格式列印出來。
#include <stdio.h>

int main(){
    char first_name[40];
    char last_name[40];
    printf("請分別輸入使用者姓與名字");
    // 字串本身就是指標，所以不用&
    scanf("%s",first_name);
    scanf("%s",last_name);
    printf("---------------------------\n");
    printf("姓: %s\n",&first_name);
    printf("名: %s\n",&last_name);


    return 0;
}