#include <stdio.h>

#define swap(t, x, y)    {  t _z;   \
                            _z = y; \
                            y = x;  \
                            x = _z; }
#define dprintf(expr)  printf(#expr " = %d\n", expr)


int main()
{
    int a = 1;
    int b = 2;
    swap(int, a, b);
    dprintf(a);
    dprintf(b);
    return 0;
}