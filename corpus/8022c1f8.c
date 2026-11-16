#include "tc_rt.h"

void fn_8022c1f8(u32 param_1, u32 param_2)
{
    u32 c0lt = 0, r0 = 0, r5 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r0 = (u32)rd16(0x80570a78u);
    if (r0 == 0xffffu) {
        r0 = rd32(0x800000ccu);
        c0lt = (s32)r0 < 0;
        if (r0 == 0u) {
            r0 = ((u32)rd16(0xcc00206eu) >> 1u) & 1u;
            wr16(0x80570a78u, (u16)r0);
        } else {
            r0 = 0u;
            wr16(0x80570a78u, 0u);
        }
        r0 = r0 & 0xffffu;
        wr32(0x805714c8u, 0x8022b704u);
    }
    a.r[0] = r0 & 0xffffu;
    a.r[1] = param_1;
    a.r[2] = 0x817fdfecu;
    a.r[3] = 0x817fdfe8u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(0x805714c8u), &a);
    if (param_2 != 0u) {
        r5 = rd32(0x817fdfecu);
        wr32(param_2, (u32)rd8(rd32(0x817fdfe8u) + (r5 + (u32)rd16(r5 + 0x22u))));
    }
    return;
}
