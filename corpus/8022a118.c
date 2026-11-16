#include "tc_rt.h"

void fn_8022a118(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c1lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = 0x817fdfccu;
    a.r[1] = 0x817fdfc8u;
    f1 = tc_callf(0x8022d8a4u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0x817fdfd0u;
    a.r[1] = 0x80570a68u;
    a.r[2] = param_1;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x8025b994u, &a);
    r31 = 0u;
    if (param_3 != 0u) {
        r3 = param_3;
        while (rd32(r3) != 0u) {
            r3 = r3 + 4u;
            r31 = r31 + 1u;
        }
    }
    a.r[0] = ((r31 + 2u) << 2u) & 0xfffffffcu;
    a.r[1] = 1u;
    r3 = tc_call(0x80227210u, &a);
    r6 = r31 + 1u;
    c1lt = (s32)r6 < 1;
    wr32(r3, 0x817fdfd0u);
    r4 = 1u;
    if ((s32)r6 > 1) {
        r7 = r31 - 7u;
        if ((s32)r31 > 8) {
            r8 = 0u;
            r9 = 0u;
            if (!c1lt && (s32)r6 <= 2147483646) {
                r9 = 1u;
            }
            if (r9 != 0u) {
                r5 = 1u;
                r6 = (r31 + 1u) & 0x80000000u;
                if ((r6 - 0x80000000u) == 0u && r6 != (r31 & 0x80000000u)) {
                    r5 = 0u;
                }
                if (r5 != 0u) {
                    r8 = 1u;
                }
            }
            if (r8 != 0u) {
                r5 = param_3 + 4u;
                r6 = r3 + 4u;
                ctr = ((r7 + 6u) >> 3u) & 0x1fffffffu;
                if ((s32)r7 > 1) {
                    do {
                        r4 = r4 + 8u;
                        wr32(r6, rd32(r5 - 4u));
                        wr32(r6 + 4u, rd32(r5));
                        wr32(r6 + 8u, rd32(r5 + 4u));
                        wr32(r6 + 0xcu, rd32(r5 + 8u));
                        wr32(r6 + 0x10u, rd32(r5 + 0xcu));
                        wr32(r6 + 0x14u, rd32(r5 + 0x10u));
                        wr32(r6 + 0x18u, rd32(r5 + 0x14u));
                        r0 = rd32(r5 + 0x18u);
                        r5 = r5 + 0x20u;
                        wr32(r6 + 0x1cu, r0);
                        r6 = r6 + 0x20u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r5 = r31 + 1u;
        r7 = (r4 << 2u) & 0xfffffffcu;
        r6 = param_3 + r7;
        r7 = r3 + r7;
        ctr = r5 - r4;
        if ((s32)r4 < (s32)r5) {
            do {
                r0 = rd32(r6 - 4u);
                r6 = r6 + 4u;
                wr32(r7, r0);
                r7 = r7 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    a.r[0] = 0xffffffffu;
    a.r[1] = param_2;
    a.r[2] = rd32(0x817fdfccu);
    a.r[3] = rd32(0x817fdfc8u);
    a.r[4] = 0u;
    a.r[5] = r31 + 1u;
    a.r[6] = r3;
    (void)tc_call(0x802298d0u, &a);
    return;
}
