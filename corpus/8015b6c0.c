#include "tc_rt.h"

u32 fn_8015b6c0(void)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x80097da4u, &a);
    a.r[0] = r3;
    r3 = tc_call(0x80096e1cu, &a);
    if (r3 != 0u) {
        r3 = 0u;
    } else {
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3);
        a.r[0] = r3;
        r3 = tc_call(0x800a3460u, &a);
        if (r3 != 0u) {
            r3 = 0u;
        } else {
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x44u);
            if (rd32(r3 + 0x490u) != 0u) {
                r3 = 0u;
            } else {
                r3 = tc_call(0x80097da4u, &a);
                f1 = tc_lastf();
                r3 = rd32(r3 + 0x54u);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = r3;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                r3 = tc_call(0x8010c7ecu, &a);
                r3 = (ppc_cntlzw(r3 & 0xffffu) >> 5u) & 0x7ffffffu;
            }
        }
    }
    return r3;
}
