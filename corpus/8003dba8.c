#include "tc_rt.h"

void fn_8003dba8(void)
{
    u32 c0lt = 0, r3 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80035df4u, &a);
    if (r3 == 0u || rd32(0x80571270u) != 0u) {
        (void)tc_call(0x80059ed4u, &a);
        r3 = tc_call(0x8003c220u, &a);
        if (r3 == 1u) {
            r29 = rd32(0x805710ecu);
            r30 = rd32(0x805710e8u);
            wr32(0x805710ecu, 0u);
            a.r[0] = 0u;
            (void)tc_call(0x8003d790u, &a);
            wr32(0x805710e8u, 0u);
            a.r[0] = 0u;
            (void)tc_call(0x8004e22cu, &a);
            (void)tc_call(0x8003c934u, &a);
            wr32(0x805710ecu, r29);
            a.r[0] = (((0u - r29) | r29) >> 0x1fu) & 1u;
            (void)tc_call(0x8003d790u, &a);
            wr32(0x805710e8u, r30);
            a.r[0] = (((0u - r30) | r30) >> 0x1fu) & 1u;
            (void)tc_call(0x8004e22cu, &a);
        }
        r3 = tc_call(0x8003c64cu, &a);
        c0lt = (s32)r3 < 2;
        if (r3 != 2u) {
            if (!c0lt) {
                return;
            }
            if ((s32)r3 < 1) {
                return;
            }
            a.r[0] = 1u;
            (void)tc_call(0x80043e0cu, &a);
        } else {
            a.r[0] = 0u;
            (void)tc_call(0x80043e0cu, &a);
        }
    }
    return;
}
