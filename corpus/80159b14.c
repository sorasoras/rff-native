#include "tc_rt.h"

void fn_80159b14(s32 param_1)
{
    u32 r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    r31 = (u32)param_1 + 0x6acu;
    r30 = (u32)param_1 + 0x9cu;
    r29 = 0u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x80159058u, &a);
        a.r[0] = r30;
        (void)tc_call(0x8015ba5cu, &a);
        r29 = r29 + 1u;
        r30 = r30 + 0x17cu;
        r31 = r31 + 0x3cu;
    } while ((s32)r29 < 4);
    r31 = (u32)param_1 + 0xcu;
    r29 = 0u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x8015a7ccu, &a);
        r29 = r29 + 1u;
        r31 = r31 + 0x24u;
    } while ((s32)r29 < 4);
    a.r[0] = (u32)param_1 + 0x7bcu;
    a.r[1] = 0u;
    a.r[2] = 0x80u;
    (void)tc_call(0x8000443cu, &a);
    a.r[0] = (u32)param_1 + 0x83cu;
    a.r[1] = 0u;
    a.r[2] = 0x40u;
    (void)tc_call(0x8000443cu, &a);
    a.r[0] = (u32)param_1 + 0x6a0u;
    a.r[1] = 0x1cu;
    (void)tc_call(0x802de7dcu, &a);
    f0 = (f64)rdf32(0x80574960u);
    wr32((u32)param_1 + 0x79cu, 0u);
    wr32((u32)param_1 + 0x7a8u, 0xffffffffu);
    wr32((u32)param_1 + 0x7a4u, 0xffffffffu);
    wrf32d((u32)param_1 + 0x7b4u, f0);
    wr32((u32)param_1 + 0x7b8u, 0u);
    wr32((u32)param_1 + 0x87cu, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8015b9e4u, &a);
    return;
}
