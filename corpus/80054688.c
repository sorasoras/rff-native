#include "tc_rt.h"

s32 fn_80054688(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32(0x80572310u);
    f0 = (f64)rdf32(0x80572314u);
    wrf32d((u32)param_1 + 0x13cu, f1);
    wrf32d((u32)param_1 + 0x138u, f1);
    wrf32d((u32)param_1 + 0x134u, f1);
    wrf32d((u32)param_1 + 0x148u, f1);
    wrf32d((u32)param_1 + 0x144u, f1);
    wrf32d((u32)param_1 + 0x140u, f1);
    wrf32d((u32)param_1 + 0x164u, f0);
    wrf32d((u32)param_1 + 0x174u, f1);
    wrf32d((u32)param_1 + 0x184u, f1);
    wrf32d((u32)param_1 + 0x168u, f1);
    wrf32d((u32)param_1 + 0x178u, f0);
    wrf32d((u32)param_1 + 0x188u, f1);
    wrf32d((u32)param_1 + 0x16cu, f1);
    wrf32d((u32)param_1 + 0x17cu, f1);
    wrf32d((u32)param_1 + 0x18cu, f0);
    wrf32d((u32)param_1 + 0x170u, f1);
    wrf32d((u32)param_1 + 0x180u, f1);
    wrf32d((u32)param_1 + 0x190u, f1);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80054710u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8004cdecu, &a);
    return param_1;
}
