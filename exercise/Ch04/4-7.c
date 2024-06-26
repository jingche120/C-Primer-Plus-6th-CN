/*
 * author：JasonLin
 * Description:
 */
// 4-7
// ??一?程序，?一?double?型的?量?置?1.0/3.0，
// 一?float?型的?量?置?1.0/3.0。
// 分??示?次?算的?果各3次：一次?示小??后面6位?字；
// 一次?示小??后面12位?字；
// 一次?示小??后面16位?字。
// 程序中要包含float.h?文件，并?示FLT_DIG和DBL_DIG的值。
// 1.0/3.0 的值与?些值一致?？
#include <stdio.h>
#include <float.h>
int main(){
    double dnum = 1.0/3.0;
    float  fnum = 1.0/3.0;
    printf("double類型%.6f float類型%.6f\n",dnum,fnum);
    printf("double類型%.12f float類型%.12f\n",dnum,fnum);
    printf("double類型%.18f float類型%.18f\n",dnum,fnum);
    printf("FLT_DIG is %d\n", FLT_DIG);
    printf("DBL_DIG is %d\n", DBL_DIG);


    return 0;
}
