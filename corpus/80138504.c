#include "tc_rt.h"

s32 fn_80138504(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        a.r[0] = (u32)param_1 + 0x7c8u;
        a.r[1] = 0x8020ef0cu;
        a.r[2] = 0x38u;
        a.r[3] = 5u;
        f1 = tc_callf(0x8025571cu, &a);
        if (((u32)param_1 + 0x64cu) != 0u) {
            a.r[0] = (u32)param_1 + 0x69cu;
            a.r[1] = 0x80163f08u;
            a.r[2] = 0xcu;
            a.r[3] = 0xeu;
            f1 = tc_callf(0x8025571cu, &a);
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)param_1 + 0x47cu;
        a.r[1] = 0xffffffffu;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x80190c9cu, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)param_1 + 0x464u;
        a.r[1] = 0xffffffffu;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x80221a68u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)param_1 + 0x48u;
        a.r[1] = 0xffffffffu;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80119bacu, &a);
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
