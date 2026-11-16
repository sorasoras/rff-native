#include "tc_rt.h"

u32 fn_8010ba74(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    r31 = rd32(param_2 + 4u);
    r30 = rd32(param_2);
    if ((s32)r31 >= 20000) {
        r3 = tc_call(0x80097da4u, &a);
        wr32(rd32(r3 + 0x1cu) + 0x10u, r31);
        a.r[0] = r31 - 0x4e20u;
        r3 = tc_call(0x8014d8ecu, &a);
    } else {
        if ((s32)r31 >= 10000) {
            r3 = tc_call(0x80097da4u, &a);
            wr32(rd32(r3 + 0x1cu) + 0x10u, r31);
            a.r[0] = r31 - 0x2710u;
            r3 = tc_call(0x8014d8acu, &a);
        } else {
            r3 = tc_call(0x80097da4u, &a);
            wr32(rd32(r3 + 0x1cu) + 0x14u, r31);
            a.r[0] = r31;
            r3 = tc_call(0x8014d9a4u, &a);
            r3 = (ppc_cntlzw(r30 - r3) >> 5u) & 0x7ffffffu;
        }
    }
    return r3;
}
