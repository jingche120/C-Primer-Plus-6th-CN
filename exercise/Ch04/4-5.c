/*
 * author�GJasonLin
 * Description:
 */
// 4-5 �g�@�ӵ{�ǡA���ܨϥΪ̿�J�H���줸�C��]Mb/s�^����쪺�U���t��
// �M�H���줸�ա]MB�^����쪺�ɮפj�p�C
// �{�������p���ɮת��U���ɶ��C // �`�N�A�o��1�줸�յ���8�줸�C�ϥ�float�����A�å�/�@�������C
// �{���n�H�U�����榡�C�L 3 ���ܼƪ��ȡ]�U���t�סB�ɮפj�p�M�U���ɶ��^�A
// ��ܤp���I�᭱���Ʀr�G // At 18.12 megabits per second, a file of 2.20 megabytes
// downloads in 0.97 seconds.
#include <stdio.h>

int main(){
    float speed;
    float size;
    float total;
    printf("�п�J��J�H���줸�C��]Mb/s�^����쪺�U���t��: \n");
    scanf("%f",&speed);
    printf("�п�J��J�H���줸�ա]MB�^����쪺�ɮפj�p \n");
    scanf("%f",&size);
    total = size/speed;
    printf("�U���t��%f�B�ɮפj�p%f �M�U���ɶ�%.2f",speed,size,total);

    return 0;
}