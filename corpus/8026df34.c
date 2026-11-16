#include "tc_rt.h"

void fn_8026df34(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
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
            r30 = r3;
            if (r3 != 0u) {
                wr32(r3 + 0x100u, param_4);
                wr32(r3 + 0x104u, param_5);
                r29 = (r3 + 0x3fu) & 0xffffffe0u;
                wr32(r3 + 0x108u, 2u);
                wr32(r3 + 0x10cu, param_3);
                a.r[0] = r29;
                a.r[1] = param_1;
                a.r[2] = r31 + 1u;
                (void)tc_call(0x80004338u, &a);
                wr32(r30, r29);
                wr32(r30 + 4u, 0x40u);
                r4 = (r29 + 0x5fu) & 0xffffffe0u;
                wr32(r30 + 8u, r4);
                wr32(r30 + 0xcu, 4u);
                if (param_2 == 0u) {
                    r5 = 1u;
                    r6 = 1u;
                } else {
                    r5 = 2u;
                    r6 = 2u;
                    wr32(r4, rd32(param_3));
                    wr32(r30 + 0x10u, param_2);
                    wr32(r30 + 0x14u, rd32(param_3) * 0xdu);
                    wr32(r30 + 0x18u, r4);
                    wr32(r30 + 0x1cu, 4u);
                }
                a.r[0] = rd32(0x80570c28u);
                a.r[1] = 4u;
                a.r[2] = r5;
                a.r[3] = r6;
                a.r[4] = r30;
                a.r[5] = 0x8026da78u;
                a.r[6] = r30;
                (void)tc_call(0x80270114u, &a);
            }
        }
    }
    return;
}
