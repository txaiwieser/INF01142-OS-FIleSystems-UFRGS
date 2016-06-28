#include "t2fs_aux.h"
#include <string.h>


int strncpy2(char *dst, const char *org, int n)
{
	int i = 0;
    while (org[i] != STR_END && i < n - 1)
    {
        dst[i] = org[i];
        i++;

    }
    dst[i] = STR_END;
	return 0;
}



int readSuperblock()// É utilizada na função TEST_INIT_PARTINFO()
{

}


int allocNewBlock()// Seria usada na função create2.
{

}



