#include "tc_rt.h"

u32 fn_800f4210(f64 param_1, f64 param_2, f64 param_3, s32 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_4;
    a.r[1] = 1u;
    a.r[2] = 3u;
    a.r[3] = param_8;
    r3 = tc_call(0x800ce5b4u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.f[0] = (f64)rdf32(0x80573b80u);
        a.f[1] = param_2;
        a.f[2] = param_1;
        a.f[3] = param_3;
        a.r[0] = (u32)param_4 + 0x20u;
        a.r[1] = param_7;
        (void)tc_call(0x800cfd98u, &a);
        wr32((u32)param_4 + 0x44u, param_5);
        r3 = 1u;
        wr32((u32)param_4 + 0x4cu, 0u);
        wr32((u32)param_4 + 0x48u, param_6);
        wr32((u32)param_4 + 0x50u, 0u);
        wr8((u32)param_4 + 0x1cu, 0x7fu);
    }
    return r3;
}
