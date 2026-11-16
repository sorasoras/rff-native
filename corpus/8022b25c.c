#include "tc_rt.h"

u32 fn_8022b25c(u32 param_1)
{
    u32 c0lt = 0, c1gt = 0, r0 = 0;
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
    c1gt = param_1 > 5u;
    if (!c1gt) {
        wr16(0x80570a78u, (u16)param_1);
        if (param_1 >= 3u && !c1gt) {
            wr32(0x805714c8u, 0x8022b800u);
        }
    }
    return r0;
}
