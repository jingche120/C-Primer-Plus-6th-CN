/*
 * author�GJasonLin
 * Description:
 */
// ??�@?�{�ǡA��Τ�?��ܪ�????���Τp?�M��?��ܪ�??�C
// �ϥ�#define��const?�ؤ@?���60����?�`�q��const?�q�C
// �q?while�`??��?���`?�J�ȡA�����??�J�p�_�ε��_0���Ȥ~����`?�C
#include <stdio.h>
#define mins_to_hours 60
int main(){
    int min;
    printf("�п�J�h�֤����A�N�L�ন�p��/�� �Y��J0�h�פ�\n");
    scanf("%d",&min);
    while (min != 0)
    {
        int hours = min/mins_to_hours;
        printf("%d�p��/%d��\n",hours,min-hours*mins_to_hours);
        printf("�п�J�h�֤����A�N�L�ন�p��/�� �Y��J0�h�פ�\n");
        scanf("%d",&min);
    }
    

    return 0;
}