#include "tc_rt.h"

void fn_8026e4b0(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0eq = 0, r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r28 = 0u;
    if (param_1 != 0u && (s32)rd32(0x80570c28u) >= 0 && param_2 != 0u && param_3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = 0x40u;
        r3 = tc_call(0x8026ed48u, &a);
        r31 = r3;
        if (r3 != 0x40u) {
            a.r[0] = rd32(0x80571a6cu);
            a.r[1] = 0x140u;
            a.r[2] = 0x20u;
            r3 = tc_call(0x80270904u, &a);
            r28 = r3;
            if (r3 != 0u) {
                r29 = (r3 + 0x37u) & 0xffffffe0u;
                a.r[0] = r29;
                a.r[1] = param_1;
                a.r[2] = r31 + 1u;
                (void)tc_call(0x80004338u, &a);
                wr32(r28, r29);
                wr32(r28 + 4u, 0x40u);
                r30 = (r29 + 0x5fu) & 0xffffffe0u;
                wr32(r28 + 8u, r30);
                r29 = (r30 + 0x23u) & 0xffffffe0u;
                wr32(r28 + 0xcu, 4u);
                wr32(r28 + 0x10u, r29);
                wr32(r28 + 0x14u, 4u);
                a.r[0] = rd32(0x80570c28u);
                a.r[1] = 0xcu;
                a.r[2] = 1u;
                a.r[3] = 2u;
                a.r[4] = r28;
                r3 = tc_call(0x802701f8u, &a);
                if (r3 == 0u) {
                    wr32(param_2, rd32(r30));
                    wr32(param_3, rd32(r29));
                }
            }
        }
    }
    c0eq = r28 == 0u;
    if (!c0eq && !c0eq) {
        a.r[0] = rd32(0x80571a6cu);
        a.r[1] = r28;
        (void)tc_call(0x80270908u, &a);
    }
    return;
}
