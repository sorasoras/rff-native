#include "tc_rt.h"

u32 fn_802a97d8(u32 param_1)
{
    u32 ctr = 0, r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0x80540a28u;
    ctr = 4u;
    do {
        if ((u32)rd8(r31) == 0u) {
            a.r[0] = r31;
            a.r[1] = 0u;
            a.r[2] = 0x5cu;
            (void)tc_call(0x8000443cu, &a);
            wr8(r31, 1u);
            a.r[0] = r31 + 0x2au;
            a.r[1] = param_1;
            a.r[2] = 6u;
            f1 = tc_callf(0x80004338u, &a);
            wr32(r31 + 4u, 0u);
            wr16(r31 + 0x28u, 0xffffu);
            wr32(r31 + 0x50u, 0u);
            wr16(r31 + 0x32u, 0xffffu);
            wr32(r31 + 0x20u, r31);
            wr16(r31 + 0x38u, 0u);
            wr16(r31 + 0x58u, rd16(0x805411dau));
            wr8(r31 + 0x31u, 0u);
            wr16(0x805411d8u, (u16)((u32)rd16(0x805411d8u) + 1u));
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            (void)tc_call(0x802a80d0u, &a);
            r3 = r31;
            return r3;
        }
        r31 = r31 + 0x5cu;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r3 = 0u;
    return r3;
}
