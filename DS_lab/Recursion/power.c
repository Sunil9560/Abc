#include <stdio.h>
int pwer(int x, int y)
{
    if (y == 1)
    {
        return x;
    }
    else
    {
        return x * pwer(x, y - 1);
    }
}
void main()
{
    int a, b;
    printf("Enter the values");
    scanf("%d%d", &a, &b);
    int ans;
    ans = pwer(a, b);
    printf("%d", ans);
}