/// week10-2.cpp
/// 秅σ刚は计и璶ユ%10/10ブ猭
#include <stdio.h>
int main()
{
    printf("叫块计(ex. 379): ");
    int n;
    scanf("%d", &n);
    printf("块 %d\n", n);
    ///printf("计琌 %d\n", n%10);
    ///printf("计琌 %d\n", n/10 %10);
    ///printf("κ计琌 %d\n", n/10/10 %10);
    while(n>0){
        printf("瞷р %d ブ %d\n", n, n%10);
        n = n/10;
    }
}
