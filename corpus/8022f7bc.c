#include "tc_rt.h"

void fn_8022f7bc(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = r3;
    r30 = rd32(0x800000e4u);
    a.r[0] = r30;
    (void)tc_call(0x80228148u, &a);
    if (((u32)rd16(r30 + 0x2cau) & 1u) != 0u) {
        r4 = rd32(r30 + 0x2fcu);
        r3 = rd32(r30 + 0x300u);
        if (r4 == 0u) {
            wr32(0x800000e0u, r3);
        } else {
            wr32(r4 + 0x300u, r3);
        }
        if (r3 == 0u) {
            wr32(0x800000dcu, r4);
        } else {
            wr32(r3 + 0x2fcu, r4);
        }
        wr16(r30 + 0x2c8u, 0u);
    } else {
        wr16(r30 + 0x2c8u, 8u);
        wr32(r30 + 0x2d8u, param_1);
    }
    a.r[0] = r30;
    (void)tc_call(0x8022d710u, &a);
    a.r[0] = r30 + 0x2e8u;
    (void)tc_call(0x802300d0u, &a);
    wr32(0x8057150cu, 1u);
    if (rd32(0x8057150cu) != 0u) {
        a.r[0] = 0u;
        (void)tc_call(0x8022f310u, &a);
    }
    a.r[0] = r29;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
