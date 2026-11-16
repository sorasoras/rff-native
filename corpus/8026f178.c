#include "tc_rt.h"

u32 fn_8026f178(void)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    if (rd32(0x80571a94u) == 0u) {
        wr32(0x80571a94u, 1u);
        (void)tc_call(0x8026ec7cu, &a);
        r3 = tc_call(0x8026ed38u, &a);
        r29 = r3;
        r31 = r3 + 0x1000u;
        r3 = tc_call(0x8026ed30u, &a);
        if (r31 > r3) {
            r30 = 0xffffffeau;
        } else {
            a.r[0] = r29;
            a.r[1] = 0x1000u;
            r3 = tc_call(0x802705d0u, &a);
            wr32(0x80570c3cu, r3);
            a.r[0] = r31;
            (void)tc_call(0x8026ed40u, &a);
            a.r[0] = 0x1bu;
            a.r[1] = 0x8026efccu;
            (void)tc_call(0x8022c2fcu, &a);
            a.r[0] = 0x10u;
            (void)tc_call(0x8022c6c0u, &a);
            a.r[0] = 1u;
            a.r[1] = 0x38u;
            (void)tc_call(0x8026ed20u, &a);
            (void)tc_call(0x80270af4u, &a);
        }
    }
    return r30;
}
