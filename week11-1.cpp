///week11-1.cpp
///先把SOIT107_ADVENTURE_009的輔助鷹架做出來
#include <stdio.h>
int main()
{
    printf("請輸入 1422: ");
    int n;
    scanf("%d", &n);
    ///Q:
    int ans = 0;
    while(n>0){
        printf("現在剝出來的皮:%d\n", n%10);
        if(n%10 > ans) ans = n%10; ///剝皮法,剝出每一位數
        n = n / 10;
    }
    printf("找到最大的皮,是: %d\n", ans);
}
