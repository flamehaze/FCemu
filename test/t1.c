#include <stdio.h>
#include <memory.h>
#include <cpu.h>
#include "debug.h"


register_file reg;

int main()
{
	memset(&reg, 0, sizeof(reg));

	REG_SET_A(reg, 1);
	ASSERT( REG_GET_A(reg) == 1 );

	printf("Successfully.\n");

	return 0;
}
