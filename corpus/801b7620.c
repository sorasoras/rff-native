#include "tc_rt.h"

void fn_801b7620(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r30 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801b7544u, &a);
    r30 = r3;
    a.r[0] = r3;
    a.r[1] = rd32(r3 + 0x3ecu);
    a.r[2] = 0u;
    (void)tc_call(0x80119fb0u, &a);
    wr32(r30 + 0x3e8u, 0u);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801b7544u, &a);
    r30 = r3;
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = rd32(r3 + 0x3e8u);
    (void)tc_call(0x80119fb0u, &a);
    wr32(r30 + 0x3ecu, 0u);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44cu;
    (void)tc_call(0x8014b8d8u, &a);
    r0 = rd32((u32)param_1 + 0x78u);
    wr32((u32)param_1 + 0x74u, 0u);
    if (r0 == 0u) {
        a.r[0] = 0xdu;
        a.r[1] = 0x5eu;
        a.r[2] = 0u;
        r3 = tc_call(0x801412f8u, &a);
        r30 = r3;
        r3 = tc_call(0x80052e18u, &a);
        wr32((u32)param_1 + 0x74u, r3);
        if (r3 == 0u) {
            (void)tc_call(0x80052dc0u, &a);
            r3 = tc_call(0x80052e18u, &a);
            wr32((u32)param_1 + 0x74u, r3);
        }
        a.r[0] = rd32((u32)param_1 + 0x74u);
        a.r[1] = r30;
        a.r[2] = 0xffffffffu;
        (void)tc_call(0x801f8638u, &a);
        a.r[0] = rd32((u32)param_1 + 0x74u);
        a.r[1] = 0u;
        (void)tc_call(0x801f89b0u, &a);
    }
    return;
}
