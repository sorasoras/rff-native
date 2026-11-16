#include "tc_rt.h"

u32 fn_800d7910(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r3 = tc_call(0x80311554u, &a);
    r30 = r3;
    r3 = tc_call(0x8031f650u, &a);
    a.r[0] = 0x817fdfc8u;
    a.r[1] = r3;
    a.r[2] = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fcaa2a0u);
    a.r[3] = 0u;
    f1 = tc_callf(0x8031faccu, &a);
    r31 = rd32(0x817fdfc8u);
    if (r31 != 0u) {
        r10 = r31 & 0xff000000u;
        r4 = 1u;
        r5 = 1u;
        r6 = 1u;
        r7 = 1u;
        r8 = 1u;
        r9 = 1u;
        if ((r10 - 0x80000000u) != 0u && ((r31 & 0xff800000u) + 0x7f000000u) != 0u) {
            r9 = 0u;
        }
        if (r9 == 0u && ((r31 & 0xf8000000u) + 0x70000000u) != 0u) {
            r8 = 0u;
        }
        if (r8 == 0u && (r10 + 0x40000000u) != 0u) {
            r7 = 0u;
        }
        if (r7 == 0u && ((r31 & 0xff800000u) + 0x3f000000u) != 0u) {
            r6 = 0u;
        }
        if (r6 == 0u && ((r31 & 0xf8000000u) + 0x30000000u) != 0u) {
            r5 = 0u;
        }
        if (r5 == 0u && ((r31 & 0xffffc000u) + 0x20000000u) != 0u) {
            r4 = 0u;
        }
        if (r4 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x803568fcu;
            a.r[1] = 0x5fu;
            a.r[2] = 0x803568c8u;
            a.r[3] = r31;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            (void)tc_call(0x802e41c0u, &a);
        }
        a.r[0] = r30;
        a.r[1] = r31;
        a.r[2] = 0u;
        a.r[3] = 0u;
        r3 = tc_call(0x80311714u, &a);
        a.r[0] = 0x817fdfd8u;
        a.r[1] = r3;
        (void)tc_call(0x80320fa8u, &a);
        a.r[0] = 0x817fdfd8u;
        r3 = tc_call(0x80321010u, &a);
        if (r3 == 0u) {
            r3 = 0u;
            return r3;
        }
        a.r[0] = 0x817fdfd0u;
        a.r[1] = 0x817fdfd8u;
        (void)tc_call(0x80320f94u, &a);
        a.r[0] = param_3;
        a.r[1] = 0x817fdfd0u;
        a.r[2] = (u32)param_1;
        a.r[3] = param_2;
        (void)tc_call(0x800d83c0u, &a);
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
