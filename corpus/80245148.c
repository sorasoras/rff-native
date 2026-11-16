#include "tc_rt.h"

s32 fn_80245148(s32 param_1, u32 param_2, s32 param_3)
{
    u32 ctr = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r31 = 0;
    TcArgs a = {0};
    r4 = param_2;
    r31 = rd32(0x80571860u) - 0x24u;
    if ((s32)r31 < 0) {
        r31 = r31 + rd32(0x80571864u);
    }
    r31 = r31 - rd32(0x8057185cu);
    if ((s32)r31 < 0) {
        r31 = r31 + rd32(0x80571864u);
    }
    if (param_3 <= (s32)r31) {
        r31 = (u32)param_3;
    }
    r7 = rd32(0x8057185cu);
    r5 = ((u32)param_1 * 0x168u) - 0x7fb168c0u;
    ctr = r31;
    if ((s32)r31 > 0) {
        do {
            r6 = (r7 << 1u) & 0xfffffffeu;
            r7 = r7 + 1u;
            wr16(r4, rd16(r6 + r5));
            r4 = r4 + 2u;
            if ((s32)r7 >= (s32)rd32(0x80571864u)) {
                r7 = 0u;
            }
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    a.r[0] = ((u32)param_1 * 0x168u) - 0x7fb168c0u;
    a.r[1] = (rd32(0x80571864u) << 1u) & 0xfffffffeu;
    (void)tc_call(0x8022770cu, &a);
    return (s32)r31;
}
