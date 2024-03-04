#include <sample001.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_sample001_init(void) {
  register OOC_INT64 i0;

  sample001__a = 1;
  sample001__b = 2;
  sample001__c = 1;
  Out__String((OOC_CHAR8*)"The numbers are ", 17);
  i0 = sample001__a;
  Out__Int(i0, 0);
  Out__Ln();
  i0 = sample001__b;
  Out__Int(i0, 0);
  Out__Ln();
  i0 = sample001__c;
  Out__Int(i0, 0);
  Out__Ln();
  Out__Ln();
  return;
  ;
}

void OOC_sample001_destroy(void) {
}

/* --- */
