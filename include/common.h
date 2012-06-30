#ifndef __HEADER_COMMON__
#define __HEADER_COMMON__

#define MAX_INS_EMULATOR	16

/*==== Type Define ====*/

/* Callback functions for emulating related instruction */
typedef int (*emu_callback_t)(void); 

typedef void (*initcall_t)(void);

struct instruction_emulator {
	char *name;
	emu_callback_t func;
};

void mainloop(void);

/* Initialise callbacks */
void do_Init_call(void);

int register_emulator(struct instruction_emulator *);

int dispatch(void);



/*==== Extern symbol ====*/
/* stop the mainloop */
extern int should_stop;


#endif
