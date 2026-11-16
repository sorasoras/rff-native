#include "tc_rt.h"

void fn_8024cbdc(void)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    f1 = tc_callf(0x8024ce10u, &a);
    if (rd32(0x80571930u) != 1u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = rd32(0x80570b80u);
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80226610u, &a);
        r3 = tc_call(0x8022c2b0u, &a);
        r31 = r3;
        a.r[0] = 7u;
        a.r[1] = 0x8024ce60u;
        (void)tc_call(0x8022c2fcu, &a);
        a.r[0] = 0x1000000u;
        (void)tc_call(0x8022c6c0u, &a);
        wr16(0xcc00500au, (u16)(((u32)rd16(0xcc00500au) & 0xffffff57u) | 0x800u));
        wr16(0xcc00500au, (u16)((u32)rd16(0xcc00500au) & 0xffffff53u));
        wr32(0x80571940u, 0u);
        wr32(0x8057194cu, 0u);
        wr32(0x80571944u, 0u);
        wr32(0x80571948u, 0u);
        wr32(0x80571930u, 1u);
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
