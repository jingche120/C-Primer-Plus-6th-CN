/*
 * author�GJasonLin
 * Description:
 */
// 4-7
// ??�@?�{�ǡA?�@?double?����?�q?�m?1.0/3.0�A
// �@?float?����?�q?�m?1.0/3.0�C
// ��??��?��?�⪺?�G�U3���G�@��?�ܤp??�Z��6��?�r�F
// �@��?�ܤp??�Z��12��?�r�F
// �@��?�ܤp??�Z��16��?�r�C
// �{�Ǥ��n�]�tfloat.h?���A�}?��FLT_DIG�MDBL_DIG���ȡC
// 1.0/3.0 �����O?�ǭȤ@�P?�H
#include <stdio.h>
#include <float.h>
int main(){
    double dnum = 1.0/3.0;
    float  fnum = 1.0/3.0;
    printf("double����%.6f float����%.6f\n",dnum,fnum);
    printf("double����%.12f float����%.12f\n",dnum,fnum);
    printf("double����%.18f float����%.18f\n",dnum,fnum);
    printf("FLT_DIG is %d\n", FLT_DIG);
    printf("DBL_DIG is %d\n", DBL_DIG);


    return 0;
}
