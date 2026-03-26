#include <stdio.h>

int main ()
{
    int pi[10], i;
    int topo = 0;

    pi[topo] = 4;
    topo = 1;
    pi[topo] = 12;
    topo = 2;
    pi[topo] = 1;
    topo = 3;
    pi[topo] = 9;
    topo = 4;
    pi[topo] = 19;

    for (i = topo; i >= 0; i--) {
        printf("%d\n", pi[i]);
    }


    return 0;

}