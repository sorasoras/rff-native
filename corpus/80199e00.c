#include "tc_rt.h"

void fn_80199e00(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0x15u;
    (void)tc_call(0x80141274u, &a);
    r3 = rd32((u32)param_1 + 0xc0u);
    wr32((u32)param_1 + 0x74u, 0u);
    wr32((u32)param_1 + 0x3ecu, 0u);
    wr32((u32)param_1 + 0x108u, 0u);
    wr32((u32)param_1 + 0x19cu, 0u);
    wr32((u32)param_1 + 0x230u, 0u);
    if ((r3 + 0x10000u) != 0xffffu) {
        a.r[0] = r3;
        (void)tc_call(0x8004bc54u, &a);
        wr32((u32)param_1 + 0xc0u, 0xffffffffu);
    }
    r3 = rd32((u32)param_1 + 0x438u);
    if ((r3 + 0x10000u) != 0xffffu) {
        a.r[0] = r3;
        (void)tc_call(0x8004bc54u, &a);
        wr32((u32)param_1 + 0x438u, 0xffffffffu);
    }
    r3 = rd32((u32)param_1 + 0x48u);
    if ((r3 + 0x10000u) != 0xffffu) {
        a.r[0] = r3;
        (void)tc_call(0x8004bc54u, &a);
        wr32((u32)param_1 + 0x48u, 0xffffffffu);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8019ad04u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8019bd50u, &a);
    return;
}
