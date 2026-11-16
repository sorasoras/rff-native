#include "tc_rt.h"

u32 fn_800c0f50(s32 param_1)
{
    u32 r3 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = 0x14u;
    a.r[0] = 0x80475e24u;
    r3 = tc_call(0x8017dc4cu, &a);
    if (r3 != 0u) {
        a.r[0] = 0x80475e24u;
        r3 = tc_call(0x8017dc60u, &a);
        if (r3 != 0u) {
            a.r[0] = 0x80475e24u;
            (void)tc_call(0x8017dc34u, &a);
            r30 = 0u;
            a.f[0] = (f64)rdf32(0x80572ea8u);
            a.r[0] = (u32)param_1;
            a.r[1] = 1u;
            a.r[2] = 0u;
            (void)tc_call(0x800bf1d4u, &a);
            wr32((u32)param_1 + 0xa5cu, 1u);
        }
    }
    return r30;
}
