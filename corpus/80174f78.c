#include "tc_rt.h"

u32 fn_80174f78(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x11cu);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = (u32)param_1;
        a.r[2] = 5u;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(r0) + 0x7cu), &a);
    }
    a.r[0] = (u32)param_1;
    a.r[1] = rd32((u32)param_1 + 0x130u);
    r3 = tc_call(0x800dacf8u, &a);
    if (r3 == 0xffffffffu) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800dad3cu, &a);
        a.r[0] = rd32((u32)param_1 + 0x130u);
        (void)tc_call(0x8014d968u, &a);
    } else {
        if (r3 == 0u) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x800dad3cu, &a);
        }
    }
    return 0u;
}
