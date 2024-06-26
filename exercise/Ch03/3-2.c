/**
 * ??一?程序，要求提示?入一?ASCII?值（如，66），然后打印?入的字符
*/

#include <stdio.h>

int main(){
    int ascii_value;
    printf("請輸入一個ASCII碼值（如，66）：\n");
    scanf("%d",&ascii_value);
    printf("%c",ascii_value);
    return 0;
}