#include "tc_rt.h"

void fn_80139464(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    if (rd32(0x80571138u) == 0u) {
        r3 = 0x2au;
    } else {
        r4 = rd32(rd32((u32)param_1 + 0x1cu) + 0x430u);
        if ((rd32(0x8049dfa4u) & (((r4 & 0x20u) != 0u) ? 0u : (1u << (r4 & 0x1fu)))) == 0u) {
            r3 = 0x28u;
        } else {
            r3 = 0x29u;
            r31 = 1u;
        }
    }
    a.r[0] = 0xdu;
    a.r[1] = r3 + 0x32u;
    a.r[2] = 0u;
    r3 = tc_call(0x801412f8u, &a);
    r30 = r3;
    r3 = tc_call(0x80052e18u, &a);
    r29 = r3;
    wr32(rd32((u32)param_1 + 0x1cu) + 0x5c0u, r3);
    a.r[0] = r3;
    a.r[1] = r30;
    a.r[2] = 0xffffffffu;
    (void)tc_call(0x801f8638u, &a);
    a.r[0] = r29;
    (void)tc_call(0x801f891cu, &a);
    a.r[0] = r29;
    a.r[1] = 1u;
    (void)tc_call(0x801f897cu, &a);
    a.r[0] = r29;
    a.r[1] = r31;
    (void)tc_call(0x801f8a7cu, &a);
    return;
}
