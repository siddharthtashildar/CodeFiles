#include <stdio.h>

int main()
{
    int t, b;
    scanf("%d %d", &t, &b);
    int m;
    scanf("%d", &m);
    while (m--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        if ((x + y >= b) && (x + y <= 2 * t - b) && (y - x <= b) && (y - x >= -b))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}