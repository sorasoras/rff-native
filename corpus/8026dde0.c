#include "tc_rt.h"

void fn_8026dde0(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0eq = 0, r3 = 0, r5 = 0, r6 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r29 = 0u;
    if (param_1 != 0u && param_3 != 0u && (s32)rd32(0x80570c28u) >= 0 && (param_2 & 0x1fu) == 0u) {
        a.r[0] = param_1;
        a.r[1] = 0x40u;
        r3 = tc_call(0x8026ed48u, &a);
        r31 = r3;
        if (r3 != 0x40u) {
            a.r[0] = rd32(0x80571a6cu);
            a.r[1] = 0x140u;
            a.r[2] = 0x20u;
            r3 = tc_call(0x80270904u, &a);
            r29 = r3;
            if (r3 != 0u) {
                r30 = (r3 + 0x3fu) & 0xffffffe0u;
                a.r[0] = r30;
                a.r[1] = param_1;
                a.r[2] = r31 + 1u;
                (void)tc_call(0x80004338u, &a);
                wr32(r29, r30);
                wr32(r29 + 4u, 0x40u);
                r30 = (r30 + 0x5fu) & 0xffffffe0u;
                wr32(r29 + 8u, r30);
                wr32(r29 + 0xcu, 4u);
                if (param_2 == 0u) {
                    r5 = 1u;
                    r6 = 1u;
                } else {
                    r5 = 2u;
                    r6 = 2u;
                    wr32(r30, rd32(param_3));
                    wr32(r29 + 0x10u, param_2);
                    wr32(r29 + 0x14u, rd32(param_3) * 0xdu);
                    wr32(r29 + 0x18u, r30);
                    wr32(r29 + 0x1cu, 4u);
                }
                a.r[0] = rd32(0x80570c28u);
                a.r[1] = 4u;
                a.r[2] = r5;
                a.r[3] = r6;
                a.r[4] = r29;
                r3 = tc_call(0x802701f8u, &a);
                if (r3 == 0u) {
                    wr32(param_3, rd32(r30));
                }
            }
        }
    }
    c0eq = r29 == 0u;
    if (!c0eq && !c0eq) {
        a.r[0] = rd32(0x80571a6cu);
        a.r[1] = r29;
        (void)tc_call(0x80270908u, &a);
    }
    return;
}
