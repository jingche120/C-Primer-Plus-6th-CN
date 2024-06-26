/*
 * author：JasonLin
 * Description:
 */
// 4-3 ??一?程序，?取一?浮??，首先以小????法打印
// 然后以指???法打印。用下面的格式?行?出
// （系?不同，指???法?示的位 ?可能不同）：
// a.?入21.3或2.1e+001；
// b.?入+21.290或2.129E+001；
#include <stdio.h>

int main(){
    float num;
    printf("Please enter a n123umber:\n");
    scanf("%f",&num);
    printf("%.1f %.1e\n",num,num);
    printf("%.3f %.3e\n",num,num);
    return 0;
}