#include "tc_rt.h"

void fn_802e88ec(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0x70u), &a);
    a.r[0] = 0x817fdfd8u;
    a.r[1] = param_1;
    a.r[2] = (u32)rd8(param_1 + 0x104u);
    a.r[3] = rd32(param_1 + 0x100u);
    (void)tc_call(0x802ea7ccu, &a);
    r5 = rd32(0x817fdfdcu);
    r4 = rd32(0x817fdfe0u);
    r0 = rd32(0x817fdfe4u);
    wr32(0x817fdfe8u, rd32(0x817fdfd8u));
    wr32(0x817fdfecu, r5);
    wr32(0x817fdff0u, r4);
    wr32(0x817fdff4u, r0);
    a.r[0] = param_1;
    r3 = tc_call(0x802e5074u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    wr32(0x817fdfd0u, r3);
    wr32(0x817fdfd4u, r4);
    r12 = rd32(param_1);
    wr32(0x817fdfc8u, r3);
    r12 = rd32(r12 + 0x7cu);
    wr32(0x817fdfccu, r4);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfd0u;
    a.r[2] = 0x817fdfe8u;
    a.r[3] = (u32)rd8(param_1 + 0xb9u);
    a.r[4] = 0u;
    a.f[0] = f1;
    f1 = tc_callf(r12, &a);
    r0 = (u32)rd8(param_1 + 0x104u);
    c0lt = (s32)r0 < 4;
    if (r0 == 4u) {
        a.r[0] = param_1;
        a.r[1] = 0x817fdfd0u;
        a.r[2] = rd32(param_1 + 0x100u);
        a.r[3] = 0x817fdfe8u;
        a.r[4] = (u32)rd8(param_1 + 0xb9u);
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x84u), &a);
    } else if (!c0lt) {
        if (r0 == 8u) {
            a.r[0] = param_1;
            a.r[1] = 0x817fdfd0u;
            a.r[2] = rd32(param_1 + 0x100u);
            a.r[3] = 0x817fdfe8u;
            a.r[4] = (u32)rd8(param_1 + 0xb9u);
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(param_1) + 0x88u), &a);
        }
    } else if (r0 == 1u) {
        a.r[0] = param_1;
        a.r[1] = 0x817fdfd0u;
        a.r[2] = rd32(param_1 + 0x100u);
        a.r[3] = 0x817fdfe8u;
        a.r[4] = (u32)rd8(param_1 + 0xb9u);
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x80u), &a);
    }
    return;
}
