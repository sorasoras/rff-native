#include "tc_rt.h"

void fn_800defa4(s32 param_1)
{
    u32 c0lt = 0, r3 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    r29 = (u32)param_1;
    r27 = 0u;
    do {
        r28 = r29;
        r26 = 0u;
        do {
            if (r27 == 0u) {
                c0lt = (s32)r26 < 1;
                if (r26 == 1u) {
                    a.r[0] = 0x2fu;
                    r3 = tc_call(0x8014d9a4u, &a);
                    if (r3 == 0u) {
                        wr32(r28 + 0x168u, 0u);
                    } else {
                        wr32(r28 + 0x168u, 1u);
                    }
                } else if (c0lt && (s32)r26 >= 0) {
                    a.r[0] = 0x2fu;
                    r3 = tc_call(0x8014d9a4u, &a);
                    if (r3 != 0u) {
                        wr32(r28 + 0x168u, 0u);
                    } else {
                        wr32(r28 + 0x168u, 1u);
                    }
                }
            }
            r26 = r26 + 1u;
            r28 = r28 + 8u;
        } while ((s32)r26 < 20);
        r27 = r27 + 1u;
        r29 = r29 + 0xa0u;
    } while ((s32)r27 < 2);
    return;
}
