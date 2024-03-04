/* voc 2.1.0 [2024/02/26] for clang LP64 on freebsd xtpam */

#define SHORTINT INT8
#define INTEGER  INT16
#define LONGINT  INT32
#define SET      UINT32

#include "SYSTEM.h"
#include "Out.h"


static INT16 sample001_a, sample001_b, sample001_c;





export int main(int argc, char **argv)
{
	__INIT(argc, argv);
	__MODULE_IMPORT(Out);
	__REGMAIN("sample001", 0);
/* BEGIN */
	sample001_a = 1;
	sample001_b = 2;
	sample001_c = 28;
	Out_String((CHAR*)"The numbers are ", 17);
	Out_Int(sample001_a, 2);
	Out_Int(sample001_b, 2);
	Out_Int(sample001_c, 3);
	Out_Ln();
	Out_Ln();
	__FINI;
}
