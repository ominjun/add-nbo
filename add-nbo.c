#include <stdint.h>
#include "add-nbo.h"

void mynth32(uint32_t * changed)
{
        uint32_t buffer;
        buffer = ((*changed)>>24 & 0xff)<<0;
        buffer += (((*changed)>>16)&0xff)<<8;
        buffer += (((*changed)>>8)&0xff)<<16;
        buffer += (((*changed)>>0)&0xff)<<24;
        * changed = buffer;
}

