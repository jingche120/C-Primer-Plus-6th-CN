#include <stdio.h>
// ??�@?�{�ǧ�A���~???����?�A�}?��???�ȡC?�����Φ� ??�~��??�C
int change(int year){
    int val;
    val = year*365;
    return val;
}
    
int main(){
    int x;
    printf("%d",change(25));
    return 0;
}