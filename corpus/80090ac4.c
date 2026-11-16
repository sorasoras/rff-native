#include "tc_rt.h"

void fn_80090ac4(u32 param_r3)
{
    u32 c0lt = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8009000cu, &a);
    f1 = tc_lastf();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 0x367u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    wr32(param_r3 + 0xc48u, r3);
    a.r[0] = r3;
    r3 = tc_call(0x80037914u, &a);
    r28 = rd32(r3 + 8u);
    r29 = r3;
    r27 = 0u;
    while (r27 < r28) {
        a.r[0] = r29;
        a.r[1] = r27;
        r3 = tc_call(0x80037988u, &a);
        r4 = rd32(r3);
        c0lt = (s32)r4 < 1213745218;
        if (r4 == 0x48584842u) {
            a.r[0] = r3;
            r3 = tc_call(0x8003b444u, &a);
            wr32(param_r3 + 0xc50u, r3);
        } else if (!c0lt) {
            if (r4 == 0x48584d42u) {
                a.r[0] = r3;
                r3 = tc_call(0x8003e048u, &a);
                wr32(param_r3 + 0xc58u, r3);
            }
        } else {
            c0lt = (s32)r4 < 1213744962;
            if (r4 == 0x48584742u) {
                a.r[0] = r3;
                r3 = tc_call(0x80038ce4u, &a);
                wr32(param_r3 + 0xc54u, r3);
            } else if (c0lt && r4 == 0x48584142u) {
                a.r[0] = r3;
                r3 = tc_call(0x80031edcu, &a);
                wr32(param_r3 + 0xc5cu, r3);
            }
        }
        r27 = r27 + 1u;
    }
    a.r[0] = rd32(param_r3 + 0xc50u);
    a.r[1] = 0xffffffffu;
    r3 = tc_call(0x8003140cu, &a);
    r27 = r3;
    r3 = tc_call(0x8009000cu, &a);
    r6 = r3;
    if (r27 != 0u) {
        if (rd32(r3 + 0x10u) == 0u) {
            if (rd32(r3 + 0x20u) == 0u) {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r27;
                a.r[2] = r5;
                a.r[3] = r6;
                r3 = tc_call(0x80040cd8u, &a);
            } else {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = r27;
                r3 = tc_call(0x80094e80u, &a);
            }
        } else {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r27;
            a.r[2] = r5;
            a.r[3] = r6;
            r3 = tc_call(0x80040db8u, &a);
        }
    } else {
        r3 = 0u;
    }
    wr32(param_r3 + 0xc4cu, r3);
    a.r[0] = rd32(param_r3 + 0xc50u);
    a.r[1] = rd32(param_r3 + 0xc54u);
    a.r[2] = 0xffffffffu;
    a.r[3] = r3;
    (void)tc_call(0x80031268u, &a);
    a.r[0] = rd32(param_r3 + 0xc4cu);
    a.r[1] = rd32(param_r3 + 0xc58u);
    a.r[2] = 0xffffffffu;
    (void)tc_call(0x80040040u, &a);
    a.f[0] = (f64)rdf32(0x8057296cu);
    a.r[0] = rd32(param_r3 + 0xc4cu);
    a.r[1] = rd32(param_r3 + 0xc5cu);
    a.r[2] = 1u;
    (void)tc_call(0x80035740u, &a);
    return;
}
