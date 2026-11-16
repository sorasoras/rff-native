#include "tc_rt.h"

void fn_8010b070(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r3 = tc_call(0x802f08ccu, &a);
    a.r[0] = r3;
    r3 = tc_call(0x802f1090u, &a);
    if (r3 == 0u) {
        wr32(param_1 + 0x229cu, 1u);
    } else {
        wr32(param_1 + 0x229cu, 0u);
    }
    a.r[0] = param_1 + 0x2290u;
    (void)tc_call(0x801cab80u, &a);
    a.r[0] = param_1 + 0x1a30u;
    (void)tc_call(0x801cb638u, &a);
    a.r[0] = param_1 + 0x19b8u;
    (void)tc_call(0x80162648u, &a);
    a.r[0] = param_1;
    f1 = tc_callf(0x8010a518u, &a);
    wr32(param_1 + 8u, 0x40u);
    wr32(param_1 + 0xcu, 0xffffffffu);
    a.r[0] = param_1 + 0x10u;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32(param_1 + 0x18u) + 0xcu), &a);
    a.r[0] = param_1 + 0x74u;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32(param_1 + 0x7cu) + 0xcu), &a);
    a.r[0] = param_1 + 0xe0u;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32(param_1 + 0xe8u) + 0xcu), &a);
    a.r[0] = param_1 + 0x1940u;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1 + 0x1948u) + 0xcu), &a);
    a.r[0] = rd32(param_1);
    (void)tc_call(0x803014bcu, &a);
    a.r[0] = rd32(param_1);
    r3 = tc_call(0x803014b4u, &a);
    r31 = r3;
    r30 = 0u;
    while ((s32)r30 < (s32)r31) {
        a.r[0] = rd32(param_1);
        a.r[1] = r30;
        a.r[2] = 0x817fdfc8u;
        (void)tc_call(0x803014ecu, &a);
        r0 = rd32(0x817fdfccu);
        c0lt = (s32)r0 < 3;
        if (r0 == 3u) {
            wr32(param_1 + 0xccu, rd32(param_1 + 0xccu) + 1u);
        } else if (!c0lt) {
            if ((s32)r0 < 7 && (s32)r0 < 5) {
                r3 = rd32(param_1);
                wr32(param_1 + 0x1924u, rd32(param_1 + 0x1924u) + 1u);
                a.r[0] = r3;
                a.r[1] = r30;
                r3 = tc_call(0x803014dcu, &a);
                if ((r3 & 1u) != 0u) {
                    wr32(param_1 + 0x1928u, rd32(param_1 + 0x1928u) + 1u);
                }
            }
        } else {
            c0lt = (s32)r0 < 1;
            if (r0 == 1u) {
                wr32(param_1 + 0xccu, rd32(param_1 + 0xccu) + 1u);
            } else if (!c0lt) {
                r3 = rd32(param_1);
                wr32(param_1 + 0x1924u, rd32(param_1 + 0x1924u) + 1u);
                a.r[0] = r3;
                a.r[1] = r30;
                r3 = tc_call(0x803014dcu, &a);
                if ((r3 & 1u) != 0u) {
                    wr32(param_1 + 0x1928u, rd32(param_1 + 0x1928u) + 1u);
                }
            } else if ((s32)r0 >= 0) {
                wr32(param_1 + 0x70u, rd32(param_1 + 0x70u) + 1u);
            }
        }
        r30 = r30 + 1u;
    }
    wr32(param_1 + 0x22a0u, 1u);
    return;
}
