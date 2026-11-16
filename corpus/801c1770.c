#include "tc_rt.h"

void fn_801c1770(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0xfcu);
    if ((s32)r4 >= 0) {
        a.r[0] = 0x804b9e80u;
        a.r[1] = r4;
        (void)tc_call(0x801206f4u, &a);
        wr32((u32)param_1 + 0xfcu, 0xffffffffu);
    }
    r3 = rd32((u32)param_1 + 0xe4u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x80157e6cu, &a);
        wr32((u32)param_1 + 0xe4u, 0u);
        a.f[0] = (f64)rdf32(0x80575cd8u);
        a.r[0] = 0x42u;
        a.r[1] = (u32)param_1 + 8u;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        (void)tc_call(0x800d783cu, &a);
    }
    if (rd32((u32)param_1 + 0x48u) != 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80070068u, &a);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801c1554u, &a);
    }
    return;
}
