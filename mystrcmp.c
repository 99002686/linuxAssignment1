#include "mystring.h"

int mystrcmp(char *in1, char *in2)
{
    int iter, count=1;
    for(iter=0; in1[iter] && in2[iter];iter++)
    {
        if(in1[iter] != in2[iter])
            return -1;
        count++;
    }
    if(mystrlen(in1) > mystrlen(in2))
        return 1;
    if(mystrlen(in1) == count)
        return 0;
}