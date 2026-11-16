#include "tc_rt.h"

u32 fn_8022b208(void)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    r3 = (u32)rd16(0x80570a78u);
    if (r3 == 0xffffu) {
        r0 = rd32(0x800000ccu);
        c0lt = (s32)r0 < 0;
        if (r0 != 0u) {
        } else {
            r0 = ((u32)rd16(0xcc00206eu) >> 1u) & 1u;
            wr16(0x80570a78u, (u16)r0);
            wr32(0x805714c8u, 0x8022b704u);
            return r0 & 0xffffu;
        }
        r0 = 0u;
        wr16(0x80570a78u, 0u);
        wr32(0x805714c8u, 0x8022b704u);
        return r0 & 0xffffu;
    }
    return r3;
}
