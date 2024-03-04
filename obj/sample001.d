#include <sample001.oh>
#include <Out.oh>
static OOC_INT16 sample001__a;
static OOC_INT16 sample001__b;
static OOC_INT16 sample001__c;

/* run-time meta data */
static RT0__ModuleDesc _mid;
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"sample001", (RT0__Struct[]) { NULL }, 0 };

extern void OOC_sample001_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_Out_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_sample001_init();
  }
  _mid.openCount++;
}
extern void OOC_sample001_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_sample001_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_Out_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
