#include "tc_rt.h"

u32 fn_802d2fa8(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r8 = 0, r30 = 0;
    TcArgs a = {0};
    r8 = rd32((u32)param_1 + 0xd4u);
    if (r8 == 0u) {
        r3 = 0u;
    } else {
        r3 = (u32)rd16((u32)param_1 + 0xf8u);
        r0 = ppc_cntlzw(r3);
        r3 = (r3 >> 1u) & 0x7fffffffu;
        r0 = (r3 - 1u) & 0xffffu & ~(0u - ((r0 >> 5u) & 1u)) & 0xffffu;
        if (param_3 >= r0) {
            r3 = 0u;
        } else {
            r0 = r0 - param_3;
            r30 = param_4;
            r0 = r0 & 0xffffu;
            if (param_4 > r0) {
                r30 = r0;
            }
            a.r[0] = r8 + ((param_3 << 1u) & 0x1fffeu);
            a.r[1] = param_2;
            a.r[2] = (r30 << 1u) & 0x1fffeu;
            (void)tc_call(0x80004338u, &a);
            r0 = param_3 + r30;
            r4 = rd32((u32)param_1 + 0xd4u);
            wr16((u32)param_1 + 0xfau, (u16)r0);
            r0 = (r0 << 1u) & 0x1fffeu;
            r3 = r30 & 0xffffu;
            wr16(r4 + r0, 0u);
        }
    }
    return r3;
}
