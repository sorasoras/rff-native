#include "tc_rt.h"

void fn_8021a0bc(u32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr8(param_1 + 1u, 0u);
    wr32(param_1 + 0x6cu, 0u);
    wr32(param_1 + 0x20u, 0xffffffffu);
    wr32(param_1 + 0x34u, 0xffffffffu);
    a.r[0] = param_1;
    (void)tc_call(0x80219c1cu, &a);
    if ((u32)rd8(param_1) != 0u) {
        a.r[0] = rd32(param_1 + 0x68u);
        r3 = tc_call(0x80074e90u, &a);
        if (r3 == 0u) {
            r3 = tc_call(0x80218620u, &a);
            r0 = rd32(param_1 + 0x34u);
            if (r3 != 0xffffffffu && r3 == r0) {
                r0 = rd32(param_1 + 0x3cu);
                wr32(0x817fdfecu, rd32(param_1 + 0x38u));
                wr32(0x817fdff0u, r0);
                wr32(0x817fdff4u, rd32(param_1 + 0x40u));
                wr8(0x817fdfe8u, 0u);
                a.r[0] = param_1;
                a.r[1] = 0x817fdfecu;
                a.r[2] = 0x817fdfe8u;
                (void)tc_call(0x802187c4u, &a);
            }
        } else {
            r3 = tc_call(0x80218620u, &a);
            if (r3 != rd32(param_1 + 0x34u)) {
                a.r[0] = param_1;
                a.r[1] = rd32(param_1 + 0x68u);
                (void)tc_call(0x80218828u, &a);
            }
        }
    }
    if (rd32(param_1 + 0x68u) == 9u && rd32(param_1 + 0x54u) != 0u) {
        wr8(rd32(param_1 + 0x64u), 1u);
    }
    return;
}
