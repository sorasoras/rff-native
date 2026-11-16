#include "tc_rt.h"

void fn_80046af0(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32(0x803c1de0u) != 0u && (u32)rd8(0x803c1de4u) != 0u) {
        r3 = rd32(0x80571050u);
        wr8(0x803c1de5u, 0u);
        wr8(0x803c1de4u, 0u);
        a.r[0] = r3;
        (void)tc_call(0x8023d914u, &a);
        if (rd32(0x803c1df0u) == 0u) {
            a.r[0] = 0x803c1d40u;
            (void)tc_call(0x8023961cu, &a);
            (void)tc_call(0x80048c64u, &a);
        }
        (void)tc_call(0x80048f40u, &a);
        if ((u32)rd8(0x803c1de7u) != 0u) {
            (void)tc_call(0x80048070u, &a);
            (void)tc_call(0x8004943cu, &a);
        }
        do {
            r3 = tc_call(0x8004715cu, &a);
        } while (r3 != 0u);
        wr32(0x803c1de8u, 0u);
        wr32(0x803c1decu, 0u);
    }
    return;
}
