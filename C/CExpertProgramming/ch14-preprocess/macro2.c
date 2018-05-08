#include "jxcutils.h"

#if defined(IA32)
#define CPU_FILE "linux/ia32.h"
#elif defined(IA64)
#define CPU_FILE "ia64.h"
#elif defined(AMD64)
#define CPU_FILE "amd64.h"
#endif

#include CPU_FILE

int main()
{

}
