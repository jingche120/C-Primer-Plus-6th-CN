/*
 * author：JasonLin
 * Description:
 */
// ??一?程序，提示用??入天?，然后?其??成周?和天?。
// 例如，用??入18，???成2周4天。以下面的格式?示?果：
// 18 days are 2 weeks, 4 days.
// 通?while循??用?重复?入天?，?用??入一?非正值?（如0 或-20），循??束。
#include <stdio.h>

int main(){
    int date;
    printf("請輸入天數，將他轉成週數/日 若輸入0則終止\n");
    scanf("%d",&date);
    while (date != 0)
    {
        int weeks = date/7;
        if (weeks>=2){
            printf("%d days are %d weeks, %d days \n",date,weeks,date-7*weeks);
            printf("請輸入天數，將他轉成週數/日 若輸入0則終止\n");
            scanf("%d",&date);
        }else{
            printf("%d days is %d weeks, %d days \n",date,weeks,date-7*weeks);
            printf("請輸入天數，將他轉成週數/日 若輸入0則終止\n");
            scanf("%d",&date);
        }

    };

    return 0;
}