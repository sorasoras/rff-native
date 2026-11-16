#include "tc_rt.h"

void fn_8028bebc(s32 param_1)
{
    u32 r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x80539bc0u, 0u);
    wr8(0x80539bd0u, 0u);
    wr8(0x80539bd1u, 0u);
    wr8(0x80539bd2u, 0u);
    wr8(0x80539bd3u, 0u);
    wr8(0x80571b50u, 0u);
    (void)tc_call(0x802b73e0u, &a);
    (void)tc_call(0x8028b7a8u, &a);
    wr8(0x80539be8u, 0u);
    wr8(0x80539be9u, 5u);
    wr8(0x80571b51u, 0u);
    f1 = tc_callf(0x8028b784u, &a);
    r12 = rd32(0x80539be0u);
    if (r12 != 0u) {
        a.r[0] = 4u;
        a.r[1] = (u32)(s8)param_1;
        a.f[0] = f1;
        (void)tc_call(r12, &a);
    }
    return;
}
