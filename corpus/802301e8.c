#include "tc_rt.h"

void fn_802301e8(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    r31 = rd32(0x800000e4u);
    if (r31 == 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        a.r[0] = 0x817fdfb8u;
        (void)tc_call(0x8022671cu, &a);
        a.r[0] = 0x817fdfb8u;
        a.r[1] = r31;
        (void)tc_call(0x80226e04u, &a);
        a.r[0] = 0x817fdfb8u;
        a.r[1] = r31;
        (void)tc_call(0x80226e98u, &a);
        a.r[0] = 0x817fdfb8u;
        a.r[1] = tc_lastr4();
        a.r[2] = param_1;
        a.r[3] = param_2;
        a.r[4] = 0x802301c4u;
        (void)tc_call(0x8022697cu, &a);
        a.r[0] = r31;
        (void)tc_call(0x8022fe50u, &a);
        a.r[0] = 0x817fdfb8u;
        (void)tc_call(0x80226a70u, &a);
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
