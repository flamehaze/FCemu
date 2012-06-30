#include <type.h>
#include <cpu.h>
#include <common.h>

register_file cpu_reg;
int should_stop = 0;

void init_reg(void)
{
	memset(&cpu_reg, 0, sizeof(register_file));
}


void mainloop(void)
{
	char ch;

	init_reg();
	/* Involve all init routines.  */
	do_Init_call();

	while (!should_stop) {
		//TODO: handler interrupts

		/* use a register emulator to emulate one instruction */
		dispatch();

		/* Temporary for pause. */
		scanf("%c", &ch);
	}
}
