#include "tc_rt.h"

u32 fn_800510bc(s32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r29 = 0;
    TcArgs a = {0};
    r6 = rd32((u32)param_1 + 8u);
    r29 = (u32)param_1 + rd32((u32)param_1 + 4u);
    a.r[0] = (u32)param_1;
    a.r[1] = r29;
    a.r[2] = 0x10u;
    (void)tc_call(0x80004338u, &a);
    r0 = r6;
    r5 = r29 + 0x10u;
    r6 = r5;
    ctr = r0;
    if (r0 > 0u) {
        do {
            r0 = rd32(r6);
            r10 = 0u;
            r7 = (u32)param_1 + r0;
            r0 = rd32((u32)param_1 + r0);
            r8 = r7 + 0x10u;
            r9 = (u32)param_1 + r0;
            while (r10 < rd32(r7 + 4u)) {
                r11 = r8;
                r12 = 0u;
                while (r12 < rd32(r7 + 0xcu)) {
                    r4 = rd32(r11);
                    r0 = rd32(r9 + r4);
                    if (r0 == 0u) {
                        wr32(r9 + r4, 0u);
                    } else {
                        r0 = (u32)param_1 + r0;
                        wr32(r9 + r4, r0);
                    }
                    r12 = r12 + 1u;
                    r11 = r11 + 4u;
                }
                r10 = r10 + 1u;
                r9 = r9 + rd32(r7 + 8u);
            }
            r6 = r6 + 4u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    r3 = (u32)param_1 + rd32(r5);
    if (param_2 != 0u) {
        wr32(param_2, rd32(r3));
        wr32(param_2 + 4u, rd32(r3 + 4u));
        wr32(param_2 + 8u, rd32(r3 + 8u));
        wr32(param_2 + 0xcu, rd32(r3 + 0xcu));
    }
    r3 = rd32(r3 + 4u);
    return r3;
}
