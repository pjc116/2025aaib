/// week03-4.cpp
///M90H044 瘋狂程設不能打中文,會變亂碼
///程式貼到 CodeBlocks 再寫註解
#include <stdio.h>
int main()
{
    int ans = 0;///答案加到這裡面
    ///迴圈前面 ans 是 0
    int n;///有一個整數n
    scanf("%d", &n);///讀入n
    ///人類的迴圈,從1開始,<=
    for(int i=1 ; i<=n ; i++) {
        ans = ans+i;///迴圈中間修改ans
    }
    printf("%d", ans);
}///迴圈後面,印出ans
