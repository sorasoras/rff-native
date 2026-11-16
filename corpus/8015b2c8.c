#include "tc_rt.h"

s32 fn_8015b2c8(s32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = (u32)param_2;
    r6 = param_4;
    wr32(0x817fdfe0u, 0x817fe000u);
    c0lt = param_2 < 388;
    r7 = 0u;
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if ((u32)param_2 == 0x184u) {
        r4 = rd32(param_3);
        r6 = rd32(param_3 + 4u);
        r7 = rd32(param_3 + 8u);
        wr32(0x817fdfe8u, rd32(param_3 + 0xcu));
    } else if (c0lt && param_2 >= 387) {
        r4 = rd32(param_3);
        r6 = rd32(param_3 + 4u);
        wr32(0x817fdfe8u, rd32(param_3 + 8u));
    }
    r0 = rd32((u32)param_1 + 0x87cu);
    if (r0 != 0u) {
        if (r0 != 1u) {
            r3 = 0u;
        } else {
            r3 = tc_call(0x80097da4u, &a);
            f1 = tc_lastf();
            r3 = rd32(r3 + 0x44u);
            a.r[0] = r3;
            a.r[1] = 4u;
            a.r[2] = 0x817fdfe8u;
            a.r[3] = 1u;
            a.r[4] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r3) + 8u), &a);
            if (r3 == 0u) {
                wr32((u32)param_1 + 0x87cu, 0u);
            }
        }
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = r4;
        a.r[2] = r6 & 0xffffu;
        a.r[3] = r7 & 0xffu;
        a.r[4] = 0xffffffffu;
        (void)tc_call(0x80159bfcu, &a);
        r3 = 1u;
        wr32((u32)param_1 + 0x87cu, 1u);
    }
    return (s32)r3;
}
