#include "tc_rt.h"

void fn_8009e734(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r25 = 0, r26 = 0, r27 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r5 = rd32((u32)param_1 + 0x10u);
    r4 = rd32(r5 + 0x10u);
    a.r[0] = r4 + (((rd32((u32)param_1 + 0x24u) & 0xffffu) + 2u) & 0xffffu);
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32((u32)param_1 + 0xcu)), &a);
    f1 = tc_lastf();
    r31 = r3 & 0xffffu;
    r27 = (r3 << 1u) & 0xfffeu;
    r30 = 0u;
    r29 = 0u;
    while (r29 < r31) {
        r5 = rd32(rd32((u32)param_1 + 0x10u) + 0x10u);
        r4 = ((rd32((u32)param_1 + 0x24u) & 0xffffu) + 2u) & 0xffffu;
        a.r[0] = r5 + ((((((r4 + 2u) & 0xffffu) + r27) & 0xffffu) + ((r29 << 1u) & 0xfffeu)) & 0xffffu);
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32((u32)param_1 + 0xcu)), &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x817fdfdcu;
        a.r[2] = 0x817fdfd8u;
        a.r[3] = r3 & 0xffffu;
        a.r[4] = 0u;
        (void)tc_call(0x8009db3cu, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = rd32(0x817fdfd8u);
        r3 = tc_call(0x8009c430u, &a);
        f1 = tc_lastf();
        if ((u32)(s8)r3 == 0u) {
            while (r29 != 0u) {
                r29 = r29 - 1u;
                a.r[0] = (u32)param_1;
                a.r[1] = 0x817fdfd8u;
                (void)tc_call(0x8009c4e4u, &a);
            }
            break;
        }
        r29 = r29 + 1u;
        r30 = r30 + rd32(0x817fdfd8u);
    }
    if (rd32((u32)param_1 + 0x58u) == 4u) {
        r26 = 0u;
        r25 = 0u;
        a.r[0] = rd32((u32)param_1 + 0xcu);
        a.r[1] = r30 - 1u;
        r3 = tc_call(0x8009c3acu, &a);
        f1 = tc_lastf();
        r30 = r3;
        r27 = 0u;
        while (r27 < r31) {
            wr32(0x817fdfd8u, 0u);
            a.r[0] = (u32)param_1;
            a.r[1] = 0x817fdfd8u;
            f1 = tc_callf(0x8009c4e4u, &a);
            r4 = rd32(0x817fdfd8u);
            if (r4 >= 1u && r30 >= r25 && r30 < (r25 + r4)) {
                r26 = r31 - r27 - 1u;
            }
            r25 = r25 + r4;
            r27 = r27 + 1u;
        }
        r5 = rd32(rd32((u32)param_1 + 0x10u) + 0x10u);
        r4 = ((rd32((u32)param_1 + 0x24u) & 0xffffu) + 2u) & 0xffffu;
        a.r[0] = r5 + ((((r4 + 2u) & 0xffffu) + ((r26 << 1u) & 0xfffeu)) & 0xffffu);
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32((u32)param_1 + 0xcu)), &a);
        wr32((u32)param_1 + 0x24u, r3 & 0xffffu);
    }
    return;
}
