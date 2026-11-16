#include "tc_rt.h"

void fn_800f7294(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    r4 = rd32(param_1);
    if (r4 != 0u) {
        r6 = rd32(r4);
        if (r6 != 0u) {
            if (rd32(r6 + 0x10u) != 0u) {
                r3 = rd32(r6);
                r5 = rd32(r6 + 0xcu);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            } else {
                if (rd32(r6 + 0x20u) != 0u) {
                    a.r[0] = r6 + 0x24u;
                    a.r[1] = r4;
                    (void)tc_call(0x80094ec0u, &a);
                } else {
                    r3 = rd32(r6);
                    r5 = rd32(r6 + 0xcu);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    (void)tc_call(0x80040e98u, &a);
                }
            }
        }
        wr32(param_1, 0u);
    }
    return;
}
