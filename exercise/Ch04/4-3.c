/*
 * author�GJasonLin
 * Description:
 */
// 4-3 ??�@?�{�ǡA?���@?�B??�A�����H�p????�k���L
// �M�Z�H��???�k���L�C�ΤU�����榡?��?�X
// �]�t?���P�A��???�k?�ܪ��� ?�i�ण�P�^�G
// a.?�J21.3��2.1e+001�F
// b.?�J+21.290��2.129E+001�F
#include <stdio.h>

int main(){
    float num;
    printf("Please enter a n123umber:\n");
    scanf("%f",&num);
    printf("%.1f %.1e\n",num,num);
    printf("%.3f %.3e\n",num,num);
    return 0;
}