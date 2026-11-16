#include "tc_rt.h"

s32 fn_8026b4c0(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    wr32(0x817fdae0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r29 = 0u;
    if (rd32(0x80571a20u) == 0u) {
        r3 = 0xffffd8efu;
    } else {
        for (;;) {
            a.r[0] = 0x805031b0u;
            r3 = tc_call(0x8026b890u, &a);
            if (r3 >= param_2) break;
            r29 = 0u;
            r3 = tc_call(0x8026b9e8u, &a);
            r28 = r3;
            if (r3 != 0u) {
                a.r[0] = 0x817fdae8u;
                a.r[1] = param_2;
                r3 = tc_call(0x8026ba8cu, &a);
                r29 = r3;
                if (r3 == 0u) {
                    a.r[0] = 0x805031b0u;
                    a.r[1] = 0x817fdae8u;
                    a.r[2] = r28;
                    (void)tc_call(0x8026b738u, &a);
                }
            }
        }
        if (r29 == 0u) {
            a.r[0] = 0x805031b0u;
            a.r[1] = param_1;
            a.r[2] = param_2;
            (void)tc_call(0x8026b630u, &a);
        }
        r3 = r29;
    }
    return (s32)r3;
}
