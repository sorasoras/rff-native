#include "tc_rt.h"

void fn_802f838c(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 c0eq = 0, r3 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if ((u32)(s8)rd8(0x80571d90u) == 0u) {
        wr32(0x805483c0u, 0u);
        wr32(0x805483c4u, 0u);
        wr32(0x805483b8u, 0u);
        wr32(0x805483bcu, 0u);
        wr32(0x805483c0u, 0x805483c0u);
        wr32(0x805483c4u, 0x805483c0u);
        wr8(0x805483c8u, 0u);
        wr32(0x805483ccu, 0u);
        a.r[0] = 0x805483b8u;
        a.r[1] = 0x802f7568u;
        a.r[2] = 0x805483a8u;
        (void)tc_call(0x802551b8u, &a);
        wr8(0x80571d90u, 1u);
    }
    a.r[0] = 0x805483b8u;
    r3 = tc_call(0x802facacu, &a);
    c0eq = r3 == 0u;
    r30 = r3;
    if (c0eq) {
        r30 = 0u;
    } else {
        if (!c0eq) {
            a.r[0] = r3;
            (void)tc_call(0x802f8e78u, &a);
            a.r[0] = r30 + 0x1cu;
            (void)tc_call(0x802fad50u, &a);
            f0 = (f64)rdf32(0x805775b8u);
            wr32(r30 + 0x2cu, 0u);
            wrf32d(r30 + 0x30u, f0);
            wr8(r30 + 0x35u, 0u);
            wr8(r30 + 0x36u, 0u);
            wr8(r30 + 0x37u, 0u);
            wr8(r30 + 0xbcu, 0u);
            wr8(r30 + 0xbdu, 0u);
            wr16(r30 + 0xbeu, 0u);
            wr16(r30 + 0xc0u, 0u);
            wr32(r30 + 0xecu, 0u);
            wr32(r30 + 0xf4u, 0u);
            wr32(r30 + 0xf8u, 0u);
        }
    }
    r29 = r30 + 0xf4u;
    wr32(0x817fdfd8u, 0x805483c0u);
    a.r[0] = 0x805483bcu;
    a.r[1] = 0x817fdfd8u;
    a.r[2] = r29;
    (void)tc_call(0x802deba4u, &a);
    if (r30 == 0u) {
        return;
    }
    wr8(r30 + 0x37u, 1u);
    r3 = tc_call(0x8030de70u, &a);
    a.r[0] = r3;
    a.r[1] = param_1;
    a.r[2] = param_2;
    a.r[3] = param_3;
    a.r[4] = 0x802f8240u;
    a.r[5] = r30;
    r3 = tc_call(0x8030e018u, &a);
    if (r3 == 0u) {
        if ((u32)(s8)rd8(0x80571d90u) == 0u) {
            wr32(0x805483c0u, 0u);
            wr32(0x805483c4u, 0u);
            wr32(0x805483b8u, 0u);
            wr32(0x805483bcu, 0u);
            wr32(0x805483c0u, 0x805483c0u);
            wr32(0x805483c4u, 0x805483c0u);
            wr8(0x805483c8u, 0u);
            wr32(0x805483ccu, 0u);
            a.r[0] = 0x805483b8u;
            a.r[1] = 0x802f7568u;
            a.r[2] = 0x805483a8u;
            (void)tc_call(0x802551b8u, &a);
            wr8(0x80571d90u, 1u);
        }
        a.r[0] = 0x805483bcu;
        a.r[1] = r29;
        (void)tc_call(0x802debd0u, &a);
        if (r30 != 0u) {
            a.r[0] = 0x805483b8u;
            a.r[1] = r30;
            (void)tc_call(0x802fad08u, &a);
        }
    } else {
        wr32(r30 + 0xecu, r3);
        a.r[0] = r30;
        a.r[1] = param_4;
        a.r[2] = param_5;
        (void)tc_call(0x802f76bcu, &a);
    }
    return;
}
