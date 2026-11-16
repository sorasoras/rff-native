#include "tc_rt.h"

void fn_80047c7c(s32 param_1, s32 param_2, u32 param_3)
{
    u32 ca = 0, r0 = 0, r3 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    u64 t1 = 0, t2 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r28 = (u32)param_1;
    r27 = (u32)param_2;
    r29 = param_3;
    r31 = rd32(0x803c2750u);
    r30 = rd32(0x803c2754u);
    for (;;) {
        a.r[0] = r28;
        a.r[1] = r27;
        a.r[2] = r29;
        a.r[3] = 0x817fdfd8u;
        r3 = tc_call(0x800479f4u, &a);
        r0 = rd32(0x817fdfd8u);
        ca = (r30 + r3) < r30;
        r30 = r30 + r3;
        t1 = (u64)r31 + (u64)ca;
        r31 = (u32)t1;
        if (r0 == 0u) break;
        if (r0 != 1u) {
            r31 = (r29 << 1u) & 0xfffffffeu;
            a.r[0] = r28;
            a.r[1] = 0u;
            a.r[2] = r31;
            (void)tc_call(0x8000443cu, &a);
            if (r27 == 0u) break;
            a.r[0] = r27;
            a.r[1] = 0u;
            a.r[2] = r31;
            (void)tc_call(0x8000443cu, &a);
            break;
        }
        r0 = (r3 << 1u) & 0xfffffffeu;
        r29 = r29 - r3;
        r28 = r28 + r0;
        if (r27 != 0u) {
            r27 = r27 + r0;
        }
        a.r[0] = (u32)t1;
        a.r[1] = r30;
        (void)tc_call(0x80047944u, &a);
    }
    r3 = rd32(0x803c2754u);
    ca = (r3 + param_3) < r3;
    r3 = r3 + param_3;
    t2 = (u64)rd32(0x803c2750u) + (u64)ca;
    wr32(0x803c2754u, r3);
    wr32(0x803c2750u, (u32)t2);
    return;
}
