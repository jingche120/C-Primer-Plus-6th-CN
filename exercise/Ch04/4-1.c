/*
 * author�GJasonLin
 * Description:
 */
// 4-1 �g�@�ӵ{�ǡA���ܨϥΪ̿�J�W�M�m�A�M��H�u�W,�m�v���榡�C�L�X�ӡC
#include <stdio.h>

int main(){
    char first_name[40];
    char last_name[40];
    printf("�Ф��O��J�ϥΪ̩m�P�W�r");
    // �r�ꥻ���N�O���СA�ҥH����&
    scanf("%s",first_name);
    scanf("%s",last_name);
    printf("---------------------------\n");
    printf("�m: %s\n",&first_name);
    printf("�W: %s\n",&last_name);


    return 0;
}