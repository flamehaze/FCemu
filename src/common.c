#include <cpu.h>
#include <type.h>
#include <common.h>

struct instruction_emulator emu_list[MAX_INS_EMULATOR];
static int emu_current_count = 0;


/* register an emulator function, it should return 0 if emulated an instruction, 
   or return -1 if there is somethin wrong. Otherwise, the function needs to return >0 */
int register_emulator(struct instruction_emulator *emu)
{
	if (emu_current_count == MAX_INS_EMULATOR)
		return -1;

	emu_list[emu_current_count].func = emu->func;
	emu_list[emu_current_count].name = emu->name;
	++emu_current_count;

	return 0;
}

int dispatch(void)
{
	int idx, ret;
	emu_callback_t func;

	for (idx = 0; idx < emu_current_count; idx++) {
		func = emu_list[idx].func;
		/* return -1 means something wrong happens,
		   return 0 means emulates successfully,
		   return 1 means need to delivery to others.*/
		ret = func();
		if (ret <= 0)
			break;
	}

	if (ret > 0)
		printf("Can not find any emulator for this instruction.\n");
	else if (ret < 0)
		printf("Find emulator, but failed somehow.\n");

	return ret;
}
