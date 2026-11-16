#include "tc_rt.h"

void fn_800f2d8c(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x20cu);
    if (r4 != 0xffffffffu) {
        a.r[0] = 0x804b9e80u;
        a.r[1] = r4;
        f1 = tc_callf(0x801206f4u, &a);
        r4 = tc_lastr4();
        wr32((u32)param_1 + 0x20cu, 0xffffffffu);
    }
    r31 = rd32((u32)param_1 + 0x208u);
    if (r31 != 0u) {
        r3 = tc_call(0x800545e4u, &a);
        r6 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r31;
            a.r[2] = r5;
            a.r[3] = r6;
            f1 = tc_callf(0x80040e98u, &a);
            r4 = tc_lastr4();
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = r31;
                f1 = tc_callf(0x80094ec0u, &a);
                r4 = tc_lastr4();
            } else {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r31;
                a.r[2] = r5;
                a.r[3] = r6;
                f1 = tc_callf(0x80040e98u, &a);
                r4 = tc_lastr4();
            }
        }
        wr32((u32)param_1 + 0x208u, 0u);
    }
    wr32((u32)param_1 + 0x1f4u, 0u);
    a.r[0] = (u32)param_1 + 0x148u;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x148u) + 0x18u), &a);
    a.r[0] = (u32)param_1 + 0x210u;
    (void)tc_call(0x800dbcacu, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80062284u, &a);
    return;
}
