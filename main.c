#include <stddef.h>
#include <stdio.h>
#include <stdint.h>
#include "add-nbo.h"

int main(int argc, char* argv[])
{
	uint32_t add1, add2, sum;
	FILE * fs;

	fs = fopen(argv[1], "r");
	fread(&add1, sizeof(uint32_t), 1, fs);	
	fs = fopen(argv[2], "r");
        fread(&add2, sizeof(uint32_t), 1, fs);

	mynth32(&add1);
	mynth32(&add2);

	sum = add1 + add2;

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n)", add1, add1, add2, add2, sum, sum);

	return 0;
}
