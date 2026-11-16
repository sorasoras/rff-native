#include "tc_rt.h"

u32 fn_80121d20(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 4u;
    a.r[1] = 1u;
    r3 = tc_call(0x800f857cu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r0 = rd32((u32)param_1 + 0x44cu);
    r31 = r3;
    if (r0 != 0u) {
        a.r[0] = r0;
        f1 = tc_callf(0x800fec80u, &a);
        r4 = tc_lastr4();
    }
    r3 = rd32((u32)param_1 + 0xdc8u);
    a.r[0] = r3;
    a.r[1] = r4;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3 + 0x28u) + 0x18u), &a);
    a.r[0] = (u32)param_1 + 0x744u;
    (void)tc_call(0x80190ff8u, &a);
    a.r[0] = (u32)param_1 + 0x914u;
    (void)tc_call(0x80209050u, &a);
    a.r[0] = (u32)param_1 + 0x44u;
    (void)tc_call(0x80119f48u, &a);
    a.r[0] = (u32)param_1 + 0x92cu;
    (void)tc_call(0x80123dd0u, &a);
    r3 = rd32((u32)param_1 + 0xdccu);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x801f86d8u, &a);
    }
    r27 = 0u;
    r28 = 0u;
    do {
        a.r[0] = (u32)param_1 + r28 + 0xd1cu;
        (void)tc_call(0x8020f030u, &a);
        r27 = r27 + 1u;
        r28 = r28 + 0x38u;
    } while ((s32)r27 < 3);
    (void)tc_call(0x80103018u, &a);
    if (rd32((u32)param_1 + 0xdc4u) == 2u) {
        r26 = 0u;
        r29 = 0u;
        r28 = 0u;
        do {
            r0 = 0u;
            r3 = (u32)(s16)rd16(rd32((u32)param_1 + 0xdd0u) + r28);
            if ((s32)r3 >= 462 && (s32)r3 <= 503) {
                r0 = 1u;
            }
            if (r0 != 0u) {
                r3 = r3 - 0x7fb6716eu;
                r3 = (u32)rd8(r3 + 0xd4u);
                r0 = (ppc_cntlzw(r3 - 1u) >> 5u) & 0x7ffffffu;
            } else {
                r0 = 0u;
            }
            if (r0 != 0u) {
                a.r[0] = rd32(rd32(rd32((u32)param_1 + 0xdc8u) + 0x2cu) + r29);
                a.r[1] = 1u;
                (void)tc_call(0x80161da4u, &a);
            }
            r26 = r26 + 1u;
            r28 = r28 + 2u;
            r29 = r29 + 4u;
        } while ((s32)r26 < 20);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80121e80u, &a);
    return r31;
}
