#include "tc_rt.h"

void fn_80041468(void)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x80045e74u, &a);
    if (r3 == 0u) {
        a.r[0] = (u32)rd8(0x8034f818u);
        a.r[1] = (u32)rd8(0x8034f819u);
        a.r[2] = (u32)rd8(0x8034f81au);
        a.r[3] = (u32)rd8(0x8034f81bu);
        a.r[4] = 0xffffffu;
        (void)tc_call(0x80044e78u, &a);
        a.r[0] = 0x803bf0c0u;
        (void)tc_call(0x800470a8u, &a);
        a.r[0] = 0x803bf0d0u;
        (void)tc_call(0x800470f0u, &a);
        r4 = rd32(0x8034f7f4u);
        r3 = rd32(0x803bf0c4u);
        wr32(0x8034f7e0u, (((u32)rd16(r4 + 4u) - rd32(0x803bf0c0u)) >> 1u) & 0x7fffffffu);
        wr32(0x8034f7e4u, (((u32)rd16(r4 + 6u) - r3) >> 1u) & 0x7fffffffu);
        r3 = tc_call(0x80046208u, &a);
        f1 = tc_lastf();
        if (rd32(0x8034f7f0u) < r3) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80335be8u;
            a.r[1] = 0x16fu;
            a.r[2] = 0x80335c61u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802285e4u, &a);
        }
        a.r[0] = rd32(0x8034f7ecu);
        f1 = tc_callf(0x80046330u, &a);
        if (rd32(0x803bf0dcu) != 1u) {
            r3 = tc_call(0x802302b4u, &a);
            f1 = tc_lastf();
            r4 = rd32(0x803bf0dcu);
            wr32(0x8034f7e8u, r3 - (ppc_divwu(r3, r4) * r4));
        } else {
            wr32(0x8034f7e8u, 0u);
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0u;
        a.r[1] = rd32(0x8034f800u);
        a.r[2] = rd32(0x8034f7e8u);
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x80046734u, &a);
        f1 = tc_lastf();
        if (r3 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80335be8u;
            a.r[1] = 0x17cu;
            a.r[2] = 0x80335c87u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802285e4u, &a);
        }
        wr32(0x8034f808u, 4u);
        (void)tc_call(0x800415d0u, &a);
    }
    return;
}
