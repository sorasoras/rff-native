#include "tc_rt.h"

u32 fn_80145edc(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r5 = 0, r28 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = param_2;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    a.r[0] = param_1;
    (void)tc_call(0x8019be38u, &a);
    if (rd32(param_1 + 0xa20u) == 0u) {
        if (rd32(param_1 + 0x110u) == 0u) {
            return r31;
        }
        r3 = rd32(param_1 + 0xa08u);
        wr32(param_1 + 0xa0cu, 0x21u);
        wr32(param_1 + 0xa08u, 0x21u);
        r28 = (ppc_cntlzw(r3 - 5u) >> 5u) & 0x7ffffffu;
        wr32(param_1 + 0xa10u, 0x21u);
        wr32(param_1 + 0xa14u, 0u);
        a.r[0] = param_1;
        r3 = tc_call(0x80146460u, &a);
        if (r3 == 0u) {
            r31 = 0u;
            a.f[0] = (f64)rdf32(0x805745d0u);
            a.r[0] = param_1;
            a.r[1] = 1u;
            a.r[2] = 0u;
            (void)tc_call(0x800bf1d4u, &a);
            wr32(param_1 + 0x9cu, rd32(param_1 + 0x9cu) & 0xfbffffffu);
            return r31;
        }
        wr8(0x80488d68u, 0u);
        f1 = (f64)rdf32(0x805745d0u);
        wr32(param_1 + 0xa20u, 1u);
        a.r[0] = param_1;
        a.r[1] = 0x32u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
        r5 = 0u;
        if (r28 != 0u) {
            r5 = (u32)rd8(((rd32(param_1 + 0x5c0u) - 0x1f8u) * 0x14u) - 0x7fb60831u);
        }
        a.r[0] = rd32(0x805706e8u);
        a.r[1] = (u32)(s8)rd8(param_1 + 0xa43u);
        a.r[2] = r5;
        (void)tc_call(0x8014278cu, &a);
        a.f[0] = (f64)rdf32(param_1 + 0xa30u);
        a.f[1] = (f64)rdf32(param_1 + 0xa38u);
        a.f[2] = (f64)rdf32(0x805745d4u);
        a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
        a.r[1] = param_1 + 0xbcu;
        a.r[2] = 1u;
        f1 = tc_callf(0x8008a2fcu, &a);
        wrf32d(param_1 + 0xa34u, f1);
        a.r[0] = param_1;
        a.r[1] = 0x3cu;
        a.r[2] = param_1 + 0xa30u;
        a.r[3] = 0x804890c8u;
        f1 = tc_callf(0x8019fc4cu, &a);
        a.r[0] = param_1;
        a.r[1] = 0xc0au;
        a.r[2] = param_1 + 0xa30u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0xbcu), &a);
        if ((rd32(0x80492c58u) & 0x40u) == 0u) {
            return r31;
        }
        f0 = (f64)rdf32(0x805745d8u);
        wrf32d(0x817fdfe0u, f0);
        wrf32d(0x817fdfdcu, f0);
        wrf32d(0x817fdfd8u, f0);
        a.r[0] = param_1;
        a.r[1] = 0x817fdfd8u;
        (void)tc_call(0x8019fbdcu, &a);
        a.f[0] = (f64)rdf32(0x805745dcu);
        a.r[0] = 0xc1u;
        a.r[1] = 0x817fdfd8u;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        r3 = tc_call(0x800d7768u, &a);
        wr32(param_1 + 0xa3cu, r3);
    } else {
        a.r[0] = param_1;
        (void)tc_call(0x801462d8u, &a);
        r3 = tc_call(0x80142864u, &a);
        if (r3 == 7u) {
            a.r[0] = param_1;
            a.r[1] = 1u;
            (void)tc_call(0x801465c4u, &a);
            a.r[0] = param_1;
            (void)tc_call(0x800c4b50u, &a);
            r31 = 0u;
            (void)tc_call(0x801427f4u, &a);
        } else {
            if (r3 != rd32(param_1 + 0xa24u)) {
                wr32(param_1 + 0xa24u, r3);
                a.r[0] = param_1;
                (void)tc_call(0x80146114u, &a);
            }
        }
    }
    return r31;
}
