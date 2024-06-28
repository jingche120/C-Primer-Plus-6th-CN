/*
 * author：JasonLin
 * Description:
 */
// 列印每個月的天數
#include <stdio.h>
#define Months 12
int main(){
    int days[Months]={31,28,31,30,31,30,31,31,30,31,30,31};
    for(int index =1;index<=Months;index++){
        printf("%d月有%d天\n",index,days[index-1]);
    }
    return 0;
}