#include "tc_rt.h"

void fn_8016d4d0(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r5 = (u32)param_3;
    r6 = rd32((u32)param_2 + 0xda4u);
    r30 = rd32(param_1);
    if (r6 == 0u || (u32)param_3 != rd32(r6 + 4u)) {
        if (r6 != 0u) {
            a.r[0] = (u32)param_2;
            a.r[1] = rd32(r6 + 4u);
            f1 = tc_callf(0x800b3290u, &a);
            r5 = 0u;
            r6 = 0u;
        }
        r3 = rd32((u32)param_2 + 0xda4u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = (u32)param_2;
            a.r[2] = r5;
            a.r[3] = r6;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0x10u), &a);
            r3 = rd32((u32)param_2 + 0xda4u);
            a.r[0] = r3;
            a.r[1] = (u32)param_2;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3) + 0x1cu), &a);
            r4 = (u32)param_2 + ((rd32(rd32((u32)param_2 + 0xda4u) + 4u) << 2u) & 0xfffffffcu);
            wr32(r4 + 0xdacu, rd32(r4 + 0xdacu) + 1u);
            r0 = rd32((u32)param_2 + 0xda4u);
            wr32((u32)param_2 + 0xeb4u, rd32((u32)param_2 + 0xcecu));
            wr32((u32)param_2 + 0xda8u, r0);
        }
        if (param_3 >= 36) {
            r0 = rd32((u32)param_2 + ((((u32)param_3 - 0x24u) << 2u) & 0xfffffffcu) + 0x32cu);
        } else if (param_3 >= 0) {
            r0 = rd32(r30 + (((u32)param_3 << 2u) & 0xfffffffcu) + 0x128u);
        } else {
            r0 = 0u;
        }
        wr32((u32)param_2 + 0xda4u, r0);
        a.r[0] = (u32)param_2;
        f1 = tc_callf(0x800b2fc8u, &a);
        r3 = rd32((u32)param_2 + 0xda4u);
        a.r[0] = r3;
        a.r[1] = (u32)param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3) + 0x18u), &a);
        r3 = rd32((u32)param_2 + 0xda4u);
        a.r[0] = r3;
        a.r[1] = (u32)param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 8u), &a);
    }
    return;
}
