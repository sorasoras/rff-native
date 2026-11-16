#include "tc_rt.h"

void fn_802dc3dc(u32 param_r3)
{
    u32 r3 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r27 = r3;
    if (rd32(param_r3 + 0x404u) != 0u) {
        r28 = 0u;
        r29 = 0u;
        do {
            r26 = rd32(0x80547c1cu) + r29;
            if (rd32(r26 + 8u) == param_r3) {
                a.r[0] = rd32(r26 + 4u);
                (void)tc_call(0x802db360u, &a);
                a.r[0] = rd32(rd32(r26 + 4u) + 0x18u);
                (void)tc_call(0x802dc040u, &a);
                a.r[0] = rd32(r26 + 4u);
                (void)tc_call(0x802434b8u, &a);
                wr32(r26 + 8u, 0u);
            }
            r28 = r28 + 1u;
            r29 = r29 + 0x4cu;
        } while ((s32)r28 < 16);
    }
    a.r[0] = param_r3;
    (void)tc_call(0x802dc06cu, &a);
    a.r[0] = r27;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
