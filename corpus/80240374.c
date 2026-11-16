#include "tc_rt.h"

void fn_80240374(s32 param_1)
{
    u32 c0lt = 0, r0 = 0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r0 = rd32(0x800000ccu);
    c0lt = (s32)r0 < 2;
    if (r0 == 2u) {
        r0 = 1u;
        wr32(0x80571768u, 1u);
    } else if (!c0lt) {
        if (r0 == 5u) {
            r0 = 2u;
            wr32(0x80571768u, 2u);
        } else {
            r0 = 0u;
            wr32(0x80571768u, 0u);
        }
    } else {
        c0lt = (s32)r0 < 0;
        if (r0 == 0u) {
            r0 = 0u;
            wr32(0x80571768u, 0u);
        } else if (!c0lt) {
            r0 = 2u;
            wr32(0x80571768u, 2u);
        } else {
            r0 = 0u;
            wr32(0x80571768u, 0u);
        }
    }
    r0 = (((u32)param_1 << 5u) & 0x1fe0u) | r0;
    wr8(0x817fdff8u, 1u);
    wr8(0x817fdff9u, (u8)r0);
    a.r[0] = 0xe0u;
    a.r[1] = 0x817fdff8u;
    a.r[2] = 2u;
    (void)tc_call(0x8023fda4u, &a);
    a.r[0] = 2u;
    (void)tc_call(0x8023f958u, &a);
    return;
}
