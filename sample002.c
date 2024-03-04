/* voc 2.1.0 [2024/02/26] for clang LP64 on freebsd xtpam */

#define SHORTINT INT8
#define INTEGER  INT16
#define LONGINT  INT32
#define SET      UINT32

#include "SYSTEM.h"
#include "Math.h"
#include "Out.h"
#include "Reals.h"


static INT16 sample002_a, sample002_b, sample002_c;
static REAL sample002_x, sample002_y, sample002_z, sample002_sinX, sample002_cosX, sample002_tanX, sample002_w;
static INT16 sample002_i, sample002_j;
static CHAR sample002_date[30];





export int main(int argc, char **argv)
{
	__INIT(argc, argv);
	__MODULE_IMPORT(Math);
	__MODULE_IMPORT(Out);
	__MODULE_IMPORT(Reals);
	__REGMAIN("sample002", 0);
/* BEGIN */
	sample002_a = 1;
	sample002_b = 2;
	sample002_c = 28;
	__MOVE("03/03/2024", sample002_date, 11);
	Out_Ln();
	Out_String((CHAR*)"==============", 15);
	Out_Ln();
	Out_String((CHAR*)" Hello World! ", 15);
	Out_Ln();
	Out_String((CHAR*)"==============", 15);
	Out_Ln();
	Out_Ln();
	Out_Ln();
	Out_String((CHAR*)"  Count         Value: x      sine(x)        cos(x)       tan(x) ", 66);
	Out_Ln();
	Out_String((CHAR*)" -------       ----------    ---------      --------     --------", 66);
	Out_Ln();
	Reals_SetExpo(&sample002_x, 3);
	sample002_i = 0;
	while (sample002_i <= 100) {
		sample002_j = sample002_i - 1;
		sample002_x = __DIV(sample002_i, 5);
		sample002_sinX = Math_sin(sample002_x);
		sample002_cosX = Math_cos(sample002_x);
		sample002_tanX = Math_tan(sample002_x);
		Out_Int(sample002_i, 6);
		Out_Real(sample002_x, 20);
		Out_Real(sample002_sinX, 20);
		Out_Real(sample002_cosX, 20);
		Out_Real(sample002_tanX, 20);
		Out_Ln();
		sample002_i += 5;
	}
	Out_Ln();
	Out_Ln();
	Out_Ln();
	Out_String((CHAR*)"Compile Date: ", 15);
	Out_Ln();
	if (__STRCMP(sample002_date, "2022-12-25") < 0) {
		Out_String((CHAR*)"Compiled before Christmas day 2022", 35);
		Out_Ln();
	} else {
		Out_String((CHAR*)"Compiled after Christmas day 2022", 34);
		Out_Ln();
	}
	if (__STRCMP(sample002_date, "2023-12-25") < 0) {
		Out_String((CHAR*)"Compiled before Christmas day 2023", 35);
		Out_Ln();
	} else {
		Out_String((CHAR*)"Compiled after Christmas day 2023", 34);
		Out_Ln();
	}
	Out_Ln();
	Out_String((CHAR*)"The numbers are ", 17);
	Out_Int(sample002_a, 2);
	Out_Int(sample002_b, 2);
	Out_Int(sample002_c, 3);
	Out_Ln();
	Out_Ln();
	__FINI;
}
