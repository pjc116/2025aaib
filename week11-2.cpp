///week11-2.cpp
///函式宣告、函式定義、函式呼叫(函釋/函數)
#include <stdio.h>

int addnum(int a, int b) ///宣告2個參數的形狀名字
{///前面是 函數/函式 的定義
    printf("現在進入addnum()函式裡, a:%d b:%d\n",a,b);
    int x;
    x = a + b;
    printf("兩樹相加後, 得到數值%d將return回傳\n", x);
    return x; ///回傳給剛剛叫用的地方
}

int main()
{
    int ans = addnum(10, 30);///我們使用呼叫剛剛「自訂函式」
    printf("%d", ans);
}
