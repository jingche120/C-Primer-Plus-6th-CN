/*
 * author�GJasonLin
 * Description:
 */
// ??�@?�{�ǡA���ܥ�??�J��?�A�M�Z?��??���P?�M��?�C
// �Ҧp�A��??�J18�A???��2�P4�ѡC�H�U�����榡?��?�G�G
// 18 days are 2 weeks, 4 days.
// �q?while�`??��?���`?�J��?�A?��??�J�@?�D����?�]�p0 ��-20�^�A�`??���C
#include <stdio.h>

int main(){
    int date;
    printf("�п�J�ѼơA�N�L�ন�g��/�� �Y��J0�h�פ�\n");
    scanf("%d",&date);
    while (date != 0)
    {
        int weeks = date/7;
        if (weeks>=2){
            printf("%d days are %d weeks, %d days \n",date,weeks,date-7*weeks);
            printf("�п�J�ѼơA�N�L�ন�g��/�� �Y��J0�h�פ�\n");
            scanf("%d",&date);
        }else{
            printf("%d days is %d weeks, %d days \n",date,weeks,date-7*weeks);
            printf("�п�J�ѼơA�N�L�ন�g��/�� �Y��J0�h�פ�\n");
            scanf("%d",&date);
        }

    };

    return 0;
}