
// week06-3.cpp
// SOIT107_Base_008
# include <stdio.h>
int main()
{
    int N, n, ans = 1, i;
    scanf("%d", &N);
    printf("Enter the number of values to be processed: ");
    for(i=0; i<N; i++)
    {
        scanf("%d", &n);
        printf("Enter a value: ");
        ans = ans * n;
    }
    printf("Product of the %d values is %d", N, ans);
}
