#include "tc_rt.h"

u32 fn_8022db80(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[7] = param_r10;
    r3 = tc_call(0x80239710u, &a);
    if (r3 != 2u) {
        r3 = 3u;
    } else {
        if ((u32)param_1 == 1u) {
            a.r[0] = 0x817fdfe8u;
            r3 = tc_call(0x8022eaa0u, &a);
            if (r3 != 0u && rd32(0x817fdfe8u) == 0u) {
                r3 = 1u;
                return r3;
            }
        }
        r3 = 2u;
    }
    return r3;
}
