#ifndef __HEADER_CPU__
#define __HEADER_CPU__
#include <type.h>

#define MSR_C_MASK	0x01
#define MSR_Z_MASK	0x02
#define MSR_I_MASK	0x04
#define MSR_D_MASK	0x08
#define MSR_B_MASK	0x10
#define MSR_V_MASK	0x40
#define MSR_N_MASK	0x80

struct _register_file {
	u8 A;
	u8 Y;
	u8 X;
	union {
		struct {
			u8 pcl;
			u8 pch;
		} pcp;
		u16 pc;
	} PC;
	u8 S; // low 8 bit
	u8 MSR;
};
typedef struct _register_file register_file;


#define REG_GET_A(x)	((x).A)
#define REG_SET_A(x, v)	do \
			{ (x).A = (u8)(v); } \
			while (0)

#define REG_GET_Y(x)	((x).Y)
#define REG_SET_Y(x, v)	do \
			{ (x).Y = (u8)(v); } \
			while (0)

#define REG_GET_X(x)	((x).X)
#define REG_SET_X(x, v)	do \
			{ (x).X = (u8)(v); } \
			while (0)

#define REG_GET_PC(x)	((x).PC.pc)
#define REG_GET_PCL(x)	((x).PC.pcp.pcl)
#define REG_GET_PCH(x)	((x).PC.pcp.pch)

#define REG_SET_PC(x, v)	do \
				{ (x).PC.pc = (u16)(v); } \
				while (0)
#define REG_SET_PCL(x, v)	do \
				{ (x).PC.pcp.pcl = (u8)(v;) } \
				while (0)
#define REG_SET_PCH(x, v)	do \
				{ (x).PC.pcp.pch = (u8)(v); } \
				while (0)

#define REG_GET_S(x)	((x).S)
#define REG_SET_S(x, v)	do \
			{ (x).S = (u8)(v); } \
			while (0)

#define REG_GET_MSR(x)	((x).MSR)
#define REG_SET_MSR(x, v)	do \
				{ (x).MSR = (u8)(v); } \
				while (0)


#define MSR_GET_C(x)	(REG_GET_MSR(x) & MSR_C_MASK)
#define MSR_SET_C(x)	do {  \
				REG_SET_MSR(x, \
				REG_GET_MSR(x) | MSR_C_MASK); \
			} while (0)
#define MSR_CLR_C(x)	do {  \
				REG_SET_MSR(x, \
				REG_GET_MSR(x) & (~MSR_C_MASK); \
			} while (0)

#define MSR_GET_Z(x)	(REG_GET_MSR(x) & MSR_Z_MASK)
#define MSR_SET_Z(x)	do {  \
				REG_SET_MSR(x, \
				REG_GET_MSR(x) | MSR_Z_MASK); \
			} while (0)
#define MSR_CLR_Z(x)	do {  \
				REG_SET_MSR(x, \
				REG_GET_MSR(x) & (~MSR_Z_MASK); \
			} while (0)

#define MSR_GET_I(x)	(REG_GET_MSR(x) & MSR_I_MASK)
#define MSR_SET_I(x)	do {  \
				REG_SET_MSR(x, \
				REG_GET_MSR(x) | MSR_I_MASK); \
			} while (0)
#define MSR_CLR_I(x)	do {  \
				REG_SET_MSR(x, \
				REG_GET_MSR(x) & (~MSR_I_MASK); \
			} while (0)

#define MSR_GET_D(x)	(REG_GET_MSR(x) & MSR_D_MASK)
#define MSR_SET_D(x)	do {  \
				REG_SET_MSR(x, \
				REG_GET_MSR(x) | MSR_D_MASK); \
			} while (0)
#define MSR_CLR_D(x)	do {  \
				REG_SET_MSR(x, \
				REG_GET_MSR(x) & (~MSR_D_MASK); \
			} while (0)

#define MSR_GET_B(x)	(REG_GET_MSR(x) & MSR_B_MASK)
#define MSR_SET_B(x)	do {  \
				REG_SET_MSR(x, \
				REG_GET_MSR(x) | MSR_B_MASK); \
			} while (0)
#define MSR_CLR_B(x)	do {  \
				REG_SET_MSR(x, \
				REG_GET_MSR(x) & (~MSR_B_MASK); \
			} while (0)

#define MSR_GET_V(x)	(REG_GET_MSR(x) & MSR_V_MASK)
#define MSR_SET_V(x)	do {  \
				REG_SET_MSR(x, \
				REG_GET_MSR(x) | MSR_V_MASK); \
			} while (0)
#define MSR_CLR_V(x)	do {  \
				REG_SET_MSR(x, \
				REG_GET_MSR(x) & (~MSR_V_MASK); \
			} while (0)

#define MSR_GET_N(x)	(REG_GET_MSR(x) & MSR_N_MASK)
#define MSR_SET_N(x)	do {  \
				REG_SET_MSR(x, \
				REG_GET_MSR(x) | MSR_N_MASK); \
			} while (0)
#define MSR_CLR_N(x)	do {  \
				REG_SET_MSR(x, \
				REG_GET_MSR(x) & (~MSR_N_MASK); \
			} while (0)


#endif
