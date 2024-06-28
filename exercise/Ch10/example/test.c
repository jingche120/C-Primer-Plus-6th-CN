/*
 * author¡GJasonLin
 * Description:
 */
#include <stdio.h>

int main(){
    int *ptr;
    int torf[2][2] = {12, 14, 16};
    ptr = torf[0];
    printf("%p",ptr);

    return 0;
}