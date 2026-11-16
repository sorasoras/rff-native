#include "tc_rt.h"

u32 fn_8013a780(s32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    (void)tc_call(0x80103018u, &a);
    a.r[0] = (u32)param_1 + 0x5b0u;
    a.r[1] = 1u;
    r3 = tc_call(0x800f857cu, &a);
    r30 = r3;
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8013a61cu, &a);
    r29 = 0u;
    r31 = 0u;
    do {
        r3 = rd32((u32)param_1 + r31 + 0x44u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x8013b6ecu, &a);
        }
        r29 = r29 + 1u;
        r31 = r31 + 4u;
    } while ((s32)r29 < 4);
    r29 = 0u;
    r31 = 0u;
    do {
        a.r[0] = (u32)param_1 + r31 + 0x68u;
        (void)tc_call(0x8013afe4u, &a);
        r29 = r29 + 1u;
        r31 = r31 + 0x8cu;
    } while ((s32)r29 < 2);
    if (rd32((u32)param_1 + 0x5f0u) == (u32)rd8(0x80492821u)) {
        r3 = rd32((u32)param_1 + 0x180u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x800fec80u, &a);
        }
    }
    if (rd32((u32)param_1 + 0x184u) != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x5a0u);
        a.r[1] = 1u;
        (void)tc_call(0x801f0fa0u, &a);
    }
    a.r[0] = (u32)param_1 + 0x54u;
    (void)tc_call(0x8013bcccu, &a);
    a.r[0] = (u32)param_1 + 0x198u;
    (void)tc_call(0x80119f48u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8013a88cu, &a);
    return r30;
}
