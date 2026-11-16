#include "tc_rt.h"

void fn_8010c858(s32 param_1, s32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, s32 param_7)
{
    u32 ctr = 0, r0 = 0, r8 = 0, r10 = 0, r11 = 0, r12 = 0;
    TcArgs a = {0};
    r11 = (u32)param_2 * 0x480u;
    r12 = 0u;
    r10 = (u32)param_1 + r11;
    ctr = 8u;
    do {
        if ((rd32(r10 + 0x8cu) + 0x10000u) == 0xffffu) {
            r10 = r12 * 0x90u;
            r0 = (u32)param_1 + r11;
            wr32(r10 + r0, param_3);
            r8 = r10 + r0;
            wr32(r8 + 4u, param_4);
            wr32(r8 + 0x8cu, param_5);
            wr32(r8 + 0x88u, (u32)param_7);
            a.r[0] = r8 + 8u;
            a.r[1] = param_6;
            a.r[2] = ((u32)param_7 << 2u) & 0xfffffffcu;
            (void)tc_call(0x80004338u, &a);
            return;
        }
        r10 = r10 + 0x90u;
        r12 = r12 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
