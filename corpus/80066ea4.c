#include "tc_rt.h"

void fn_80066ea4(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8006c5ecu, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    (void)tc_call(0x8019bf38u, &a);
    wr32((u32)param_1 + 0xa08u, 0x21u);
    wr32((u32)param_1 + 0xa0cu, 0x21u);
    wr32((u32)param_1 + 0xa10u, 0x21u);
    wr32((u32)param_1 + 0xa14u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8014660cu, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8006c878u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801a0954u, &a);
    a.r[0] = (u32)param_1;
    f1 = tc_callf(0x80186ca4u, &a);
    r3 = rd32((u32)param_1 + 0x15c8u);
    wr32((u32)param_1 + 0xa80u, 0u);
    if (r3 != 0u) {
        a.r[0] = r3;
        f1 = tc_callf(0x80157e6cu, &a);
        wr32((u32)param_1 + 0x15c8u, 0u);
    }
    r4 = rd32((u32)param_1 + 0x15c4u);
    if (r4 != 0xffffffffu) {
        a.r[0] = 0x804b9e80u;
        a.r[1] = r4;
        f1 = tc_callf(0x801206f4u, &a);
        r4 = tc_lastr4();
        wr32((u32)param_1 + 0x15c4u, 0xffffffffu);
    }
    a.r[0] = (u32)param_1 + 0x890u;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x890u) + 0x18u), &a);
    r3 = rd32((u32)param_1 + 0x15e4u);
    if (r3 != 0u) {
        if (rd32(((rd32(r3 + 8u) << 2u) & 0xfffffffcu) - 0x7fca9e94u) != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x80157e6cu, &a);
        }
        wr32((u32)param_1 + 0x15e4u, 0u);
    }
    wr32((u32)param_1 + 0x1648u, 0u);
    return;
}
