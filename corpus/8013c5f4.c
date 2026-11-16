#include "tc_rt.h"

s32 fn_8013c5f4(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        a.r[0] = (u32)param_1 + 0x5a4u;
        a.r[1] = 0xffffffffu;
        f1 = tc_callf(0x80163f08u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)param_1 + 0x198u;
        a.r[1] = 0xffffffffu;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80119bacu, &a);
        a.r[0] = (u32)param_1 + 0x68u;
        a.r[1] = 0x800f7c1cu;
        a.r[2] = 0x8cu;
        a.r[3] = 2u;
        (void)tc_call(0x8025571cu, &a);
        if (param_2 > 0) {
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = (u32)param_1;
            (void)tc_call(0x801b3a38u, &a);
        }
    }
    return param_1;
}
