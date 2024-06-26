#include <stdio.h>
// ??一?程序把你的年???成天?，并?示???值。?里不用考 ??年的??。
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