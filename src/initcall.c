#include <common.h>

void alu_emu_init(void);

static const initcall_t init_fn_list[] = {
	alu_emu_init,
	0
};

void do_Init_call(void)
{
	initcall_t *fn = &init_fn_list[0];
	
	while (*fn) {
		(*fn)();
		++fn;
	}
	printf("Init call back done.\n");
}
