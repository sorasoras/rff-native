#include "tc_rt.h"

u32 fn_801928fc(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = rd32(param_1) + 0xc6u;
    a.r[1] = 2u;
    r3 = tc_call(0x800f89c4u, &a);
    r31 = r3;
    if (r3 == 0x63u) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = rd32(rd32(0x80571398u) + 0xc8u);
        (void)tc_call(0x80100bb4u, &a);
    } else {
        a.r[0] = rd32(0x80571398u);
        a.r[1] = r31;
        r3 = tc_call(0x801c09d4u, &a);
        r4 = 0u;
        if (r3 != 0x2e8u) {
            r3 = ((r3 << 3u) & 0xfffffff8u) - 0x7fb66fa0u;
            r4 = rd32(r3 + 0x820u);
        }
        r3 = rd32(0x80571398u);
        if (rd32(r3 + 0xc4u) == 8u) {
            a.r[0] = r3;
            a.r[1] = r31 + rd32(r3 + 0xc0u);
            r3 = tc_call(0x801c08e0u, &a);
            r4 = r3;
        }
        a.r[0] = r4;
        a.r[1] = 0x817fdfd8u;
        a.r[2] = 8u;
        (void)tc_call(0x800f8a84u, &a);
        wr16(0x817fdfe8u, 0u);
        a.r[0] = param_1;
        a.r[1] = 0x817fdfd8u;
        a.r[2] = 0u;
        (void)tc_call(0x80100670u, &a);
    }
    return 1u;
}
