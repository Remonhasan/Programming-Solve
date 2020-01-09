// Remon Hasan , 21st sep '19
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n, d, height[1000];
    scanf("%d%d", &n, &d);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &height[i]);
    }

    sort(height, height + n);

    int i1 = 0, i2 = 1, ways = 0;
    while (i2 < n)
    {
        if (height[i2] - height[i1] <= d)
        {
            ways += (i2 - i1);
            ++i2;
        }
        else
        {
            ++i1;
        }
    }
    ways *= 2;

    printf("%d\n", ways);
    return 0;
}
