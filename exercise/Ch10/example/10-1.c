/*
 * author�GJasonLin
 * Description:
 */
// �C�L�C�Ӥ몺�Ѽ�
#include <stdio.h>
#define Months 12
int main(){
    int days[Months]={31,28,31,30,31,30,31,31,30,31,30,31};
    for(int index =1;index<=Months;index++){
        printf("%d�릳%d��\n",index,days[index-1]);
    }
    return 0;
}