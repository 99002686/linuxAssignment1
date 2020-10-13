#include "myutils.h"

int vsum (int arg1, ...)
{
    va_list arg;
    int iter, sum=0;
    va_start(arg, arg1);
    for(iter = arg1; iter >= 0; iter = va_arg(arg, int))
        sum += iter;
    va_end(arg);
    return sum;
}