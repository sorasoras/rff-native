#include "tc_rt.h"

void fn_803218f4(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r8 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = param_1 + 4u;
    r30 = 0u;
    while ((s32)r30 < (s32)rd32(param_1)) {
        r8 = 0u;
        if (((u32)rd8(r31 + 1u) & 1u) != 0u) {
            r8 = r31 + 0x18u;
        }
        r0 = (u32)rd8(r31);
        c0lt = (s32)r0 < 1;
        if (r0 == 1u) {
            r6 = rd32(r31 + 0x10u);
            r3 = rd32(rd32(r6 + 0xc8u) + 0x20u);
            a.r[0] = r3;
            a.r[1] = rd32(r31 + 0x14u);
            a.r[2] = r31 + 4u;
            a.r[3] = r6;
            a.r[4] = (u32)rd16(r31 + 2u);
            a.r[5] = r8;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3 + 0x1cu) + 0x14u), &a);
            r4 = tc_lastr4();
            r3 = rd32(r31 + 0x10u);
            r0 = rd32(r3 + 0x10u) - 1u;
            wr32(r3 + 0x10u, r0);
            if (r0 == 0u && rd32(r3 + 0xcu) == 2u) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3 + 0x1cu) + 8u), &a);
            }
        } else if (c0lt && (s32)r0 >= 0) {
            r6 = rd32(r31 + 0x10u);
            a.r[0] = rd32(rd32(r6 + 0xc8u) + 0x20u);
            a.r[1] = rd32(r31 + 0x14u);
            a.r[2] = r31 + 4u;
            a.r[3] = r6;
            a.r[4] = (u32)rd16(r31 + 2u);
            a.r[5] = r8;
            f1 = tc_callf(0x803127c4u, &a);
            r4 = tc_lastr4();
            r3 = rd32(r31 + 0x10u);
            r0 = rd32(r3 + 0x10u) - 1u;
            wr32(r3 + 0x10u, r0);
            if (r0 == 0u && rd32(r3 + 0xcu) == 2u) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3 + 0x1cu) + 8u), &a);
            }
        }
        r31 = r31 + 0x30u;
        r30 = r30 + 1u;
    }
    wr32(param_1, 0u);
    return;
}
