#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void genericSwap(vois *pa,void *pb, int size)
{
    void *temp= malloc(size);
    memcpy(temp, pa, size);
    memcpy(pa, pb, size);
    memcpy(pb, temp,size);
    free(temp);
}
