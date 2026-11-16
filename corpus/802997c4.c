#include "tc_rt.h"

void fn_802997c4(void)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    r6 = rd32(0x80348438u);
    r5 = rd32(0x8034843cu);
    r4 = rd32(0x80348440u);
    r3 = rd32(0x80348444u);
    wr16(0x8053f24eu, 0xffffu);
    wr32(0x8053f250u, r6);
    wr32(0x8053f254u, r5);
    wr32(0x8053f258u, r4);
    wr32(0x8053f25cu, r3);
    wr8(0x8053f261u, 2u);
    return;
}
