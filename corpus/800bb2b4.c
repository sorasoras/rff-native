#include "tc_rt.h"

void fn_800bb2b4(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r5 = rd32(0x80571140u);
    if (r5 != 0u && (rd32((u32)param_1 + 0x498u) != rd32(r5 + 0x1bcu) || rd32((u32)param_1 + 0x49cu) != rd32(0x80571144u))) {
        r4 = rd32((u32)param_1 + 0x47cu);
        if ((r4 + 0x10000u) != 0xffffu) {
            wr32((u32)param_1 + 0x430u, 0u);
            a.r[0] = r4;
            (void)tc_call(0x8004bc54u, &a);
            wr32((u32)param_1 + 0x47cu, 0xffffffffu);
        }
        r5 = rd32(rd32(0x80571140u) + 0x1bcu);
        wr32((u32)param_1 + 0x498u, r5);
        wr32((u32)param_1 + 0x49cu, rd32(0x80571144u));
        wr32(0x817fdfe8u, r5);
        a.r[0] = 0x817fdfe8u;
        r3 = tc_call(0x801496d4u, &a);
        r30 = r3;
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[1] = r30;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0xffffffffu;
        r3 = tc_call(0x80050dd4u, &a);
        r30 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x80045be0u, &a);
        a.r[0] = r3;
        a.r[1] = 0u;
        r3 = tc_call(0x8004bf2cu, &a);
        wr32((u32)param_1 + 0x47cu, r3);
        wr32((u32)param_1 + 0x420u, r3);
        wr32((u32)param_1 + 0x430u, 0u);
        r3 = tc_call(0x800545e4u, &a);
        r6 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r30;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = r30;
                (void)tc_call(0x80094ec0u, &a);
            } else {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r30;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            }
        }
    }
    return;
}
