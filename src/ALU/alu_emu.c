#include <cpu.h>
#include <type.h>
#include <common.h>
#include <stdio.h>

int alu_emu_entry(void)
{
	//TODO
	return 1;

}


static struct instruction_emulator alu_emu = {
	.name = "ALU",
	.func = alu_emu_entry
};

/* initcall */
void alu_emu_init(void)
{
	printf("ALU emulator initialised.\n");
	register_emulator(&alu_emu);
}
