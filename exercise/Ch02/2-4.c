// ??一?程序，生成以下?出：
// For　he's　a　jolly　good　fellow!
// For　he's　a　jolly　good　fellow!
// For　he's　a　jolly　good　fellow!
// Which　nobody　can　deny!
// 除了 main()函?以外，?程序?要?用??自定?函?：一?名?jolly()，用于打印前3?消息，?用一次打印一?；
// 另一?函?名?deny()，打印最后一?消息。

#include <stdio.h>
void jolly(){
    printf("For　he's　a　jolly　good　fellow!\n");
}
void deny(){
    printf("Which　nobody　can　deny!\n");
}

int main(){
    jolly();
    jolly();
    jolly();
    deny();
    return 0;
}