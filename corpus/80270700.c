#include "tc_rt.h"

u32 fn_80270700(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r30 = param_3;
    r3 = tc_call(0x8022c2b0u, &a);
    if ((u32)param_2 != 0u && param_3 != 0u && (param_3 & (param_3 - 1u)) == 0u) {
        if (param_3 < 0x20u) {
            r30 = 0x20u;
        }
        r29 = ((u32)param_2 + 0x1fu) & 0xffffffe0u;
        if (param_1 >= 0 && param_1 < 8) {
            r4 = (((u32)param_1 << 4u) & 0xfffffff0u) - 0x7fafcd60u;
            if (rd32(r4) != 0u) {
                r8 = rd32(r4 + 0xcu);
                r6 = r30 - 1u;
                r5 = 0u;
                while (r8 != 0u) {
                    r7 = rd32(r8 + 4u);
                    r0 = r6 & (r30 - ((r8 + 0x10u) & r6));
                    if (r7 == r29 && r0 == 0u) {
                        r5 = r8;
                        break;
                    }
                    r0 = r29 + r0;
                    if (r7 >= r0 && (r5 == 0u || r7 < rd32(r5 + 4u))) {
                        r5 = r8;
                    }
                    r8 = rd32(r8 + 0xcu);
                }
                if (r5 == 0u) {
                    a.r[0] = r3;
                    (void)tc_call(0x8022c2d8u, &a);
                    return r31;
                }
                r7 = r30 - 1u;
                r8 = r7 & (r30 - ((r5 + 0x10u) & r7));
                r7 = r29 + r8;
                if (rd32(r5 + 4u) > (r7 + 0x10u)) {
                    r9 = r8 + (r5 + r29);
                    wr32(r9 + 0x10u, 0xbabe0000u);
                    wr32(r9 + 0x14u, rd32(r5 + 4u) - r29 - r8 - 0x10u);
                    r6 = rd32(r5 + 0xcu);
                    wr32(r9 + 0x1cu, r6);
                    r9 = r9 + 0x10u;
                    if (r6 != 0u) {
                        wr32(r6 + 8u, r9);
                    }
                    wr32(r5 + 0xcu, r9);
                    wr32(r5 + 4u, r7);
                }
                wr32(r5, 0xbabe0001u);
                r6 = rd32(r5 + 8u);
                if (r6 == 0u) {
                    wr32(r4 + 0xcu, rd32(r5 + 0xcu));
                } else {
                    wr32(r6 + 0xcu, rd32(r5 + 0xcu));
                }
                r4 = rd32(r5 + 0xcu);
                if (r4 != 0u) {
                    wr32(r4 + 8u, rd32(r5 + 8u));
                }
                wr32(r5 + 0xcu, 0u);
                r31 = r5 + r8 + 0x10u;
                wr32(r5 + 8u, 0u);
                if (r8 == 0u) {
                    a.r[0] = r3;
                    (void)tc_call(0x8022c2d8u, &a);
                    return r31;
                }
                wr32(r31 - 0x10u, 0xbabe0002u);
                wr32(r31 - 8u, r5);
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
                return r31;
            }
        }
        r31 = 0u;
    }
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return r31;
}
