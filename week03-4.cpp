/// week03-4.cpp
///M90H044 �ƨg�{�]���ॴ����,�|�ܶýX
///�{���K�� CodeBlocks �A�g����
#include <stdio.h>
int main()
{
    int ans = 0;///���ץ[��o�̭�
    ///�j��e�� ans �O 0
    int n;///���@�Ӿ��n
    scanf("%d", &n);///Ū�Jn
    ///�H�����j��,�q1�}�l,<=
    for(int i=1 ; i<=n ; i++) {
        ans = ans+i;///�j�餤���ק�ans
    }
    printf("%d", ans);
}///�j��᭱,�L�Xans
