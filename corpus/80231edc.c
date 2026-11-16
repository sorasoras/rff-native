#include "tc_rt.h"

u32 fn_80231edc(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r7 = 0, r8 = 0;
    TcArgs a = {0};
    wr32(0x817fdf60u, 0x817fe000u);
    r8 = param_1 + 4u;
    r7 = 0u;
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    ctr = 0x40u;
    do {
        r7 = r7 + rd32(r8);
        r7 = r7 + rd32(r8 + 4u);
        r7 = r7 + rd32(r8 + 8u);
        r7 = r7 + rd32(r8 + 0xcu);
        r7 = r7 + rd32(r8 + 0x10u);
        r7 = r7 + rd32(r8 + 0x14u);
        r7 = r7 + rd32(r8 + 0x18u);
        r7 = r7 + rd32(r8 + 0x1cu);
        r7 = r7 + rd32(r8 + 0x20u);
        r7 = r7 + rd32(r8 + 0x24u);
        r7 = r7 + rd32(r8 + 0x28u);
        r7 = r7 + rd32(r8 + 0x2cu);
        r7 = r7 + rd32(r8 + 0x30u);
        r7 = r7 + rd32(r8 + 0x34u);
        r0 = rd32(r8 + 0x3cu);
        r7 = r7 + rd32(r8 + 0x38u);
        r8 = r8 + 0x40u;
        r7 = r7 + r0;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r7 = r7 + rd32(r8);
    r7 = r7 + rd32(r8 + 4u);
    r7 = r7 + rd32(r8 + 8u);
    r7 = r7 + rd32(r8 + 0xcu);
    r7 = r7 + rd32(r8 + 0x10u);
    r7 = r7 + rd32(r8 + 0x14u);
    r7 = r7 + rd32(r8 + 0x18u);
    wr32(param_1, r7);
    a.r[0] = 0x80386c20u;
    a.r[1] = 0x817fdf68u;
    a.r[2] = 2u;
    r3 = tc_call(0x80271af0u, &a);
    if (r3 == 0u) {
        a.r[0] = 0x817fdf68u;
        a.r[1] = param_1;
        a.r[2] = 0x1020u;
        r3 = tc_call(0x80271228u, &a);
        if (r3 != 0x1020u) {
            a.r[0] = 0x817fdf68u;
            (void)tc_call(0x80271ce4u, &a);
            r3 = 0u;
            return r3;
        }
        a.r[0] = 0x817fdf68u;
        r3 = tc_call(0x80271ce4u, &a);
        r3 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
    } else {
        r3 = 0u;
    }
    return r3;
}
