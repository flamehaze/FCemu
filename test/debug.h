#ifndef __HEAD_DEBUG__
#define __HEAD_DEBUG__

#define ASSERT(x)  do	{ \
				if ( !(x) ) { \
					printf("ERROR in %s:%d.\n", __func__, __LINE__); \
					exit(0); \
				} \
			}while (0)
#endif
