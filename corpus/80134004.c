#include "tc_rt.h"

void fn_80134004(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r9 = 0;
    TcArgs a = {0};
    (void)param_1;
    r3 = rd32(param_2 + 8u);
    r9 = rd32(param_2);
    r0 = r3 - (u32)param_4;
    wr8((u32)param_3 + 0x1au, 1u);
    wr16((u32)param_3 + 0x18u, (u16)r9);
    wr8((u32)param_3 + 0x1bu, 1u);
    wr16((u32)param_3 + 0x1cu, 0x2e8u);
    wr8((u32)param_3 + 0x1eu, 1u);
    wr8((u32)param_3 + 0x1fu, 1u);
    wr8((u32)param_3 + 0x24u, (u8)r3);
    if ((s32)r0 >= 21) {
        wr32((u32)param_3 + 0x20u, 0u);
    } else {
        if ((s32)r0 >= 16) {
            wr32((u32)param_3 + 0x20u, 0x14u);
        } else {
            if ((s32)r0 >= 11) {
                wr32((u32)param_3 + 0x20u, 0x1eu);
            } else {
                if ((s32)r0 >= 6) {
                    wr32((u32)param_3 + 0x20u, 0x28u);
                } else {
                    if ((s32)r0 >= 1) {
                        wr32((u32)param_3 + 0x20u, 0x32u);
                    } else {
                        wr32((u32)param_3 + 0x20u, 0x64u);
                    }
                }
            }
        }
    }
    r7 = 0u;
    r6 = rd32(param_2 + 4u) + 0x1ceu;
    if ((s32)r6 >= 462 && (s32)r6 <= 503) {
        r7 = 1u;
    }
    if (r7 != 0u) {
        r6 = r6 - 0x1ceu;
        r3 = (ppc_cntlzw((u32)rd8(r6 - 0x7fb66eccu) - 1u) >> 5u) & 0x7ffffffu;
    } else {
        r3 = 0u;
    }
    if (r3 == 0u) {
        wr32((u32)param_3 + 0x20u, rd32((u32)param_3 + 0x20u) - 0x32u);
    }
    if ((s32)rd32((u32)param_3 + 0x20u) < 0) {
        wr32((u32)param_3 + 0x20u, 0u);
    }
    r3 = rd32(param_2 + 4u);
    r6 = 0u;
    wr8((u32)param_3 + 0x25u, (u8)r0);
    r4 = r3 + 0x1ceu;
    if ((s32)r4 >= 462 && (s32)r4 <= 503) {
        r6 = 1u;
    }
    if (r6 != 0u) {
        r3 = (ppc_cntlzw((u32)rd8(r4 - 0x7fb6709au) - 1u) >> 5u) & 0x7ffffffu;
    } else {
        r3 = 0u;
    }
    r0 = rd32((u32)param_3 + 0x20u);
    wr8((u32)param_3 + 0x26u, (u8)r3);
    if (r0 == 0u) {
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0x1bu;
        (void)tc_call(0x8010a75cu, &a);
        return;
    }
    a.r[0] = 0x804b9da0u;
    a.r[1] = 0xdu;
    (void)tc_call(0x8010a75cu, &a);
    return;
}
