#include "tc_rt.h"

void fn_8026e898(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_1 != 0u) {
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
                wr32(r3 + 0x100u, param_3);
                wr32(r3 + 0x104u, param_4);
                wr32(r3 + 0x108u, 0u);
                a.r[0] = r3;
                a.r[1] = param_1;
                a.r[2] = r31 + 1u;
                (void)tc_call(0x80004338u, &a);
                a.r[0] = r30;
                a.r[1] = param_2;
                a.r[2] = 0x8026da78u;
                a.r[3] = r30;
                (void)tc_call(0x8026f4e0u, &a);
            }
        }
    }
    return;
}
