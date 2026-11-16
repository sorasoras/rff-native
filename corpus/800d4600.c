#include "tc_rt.h"

void fn_800d4600(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    a.r[0] = param_r3;
    r3 = tc_call(0x800d5790u, &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        a.r[0] = param_r3;
        a.r[1] = 0x817fdfc4u;
        a.r[2] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_r3 + 0x738u) + 0x10u), &a);
        wr32(0x817fdfbcu, rd32(0x817fdfc4u));
        r3 = tc_call(0x80052c3cu, &a);
        r0 = (u32)rd8(0x817fdfbdu);
        wr8(r3 + 0x24u, rd8(0x817fdfbcu));
        r4 = (u32)rd8(0x817fdfbeu);
        wr8(r3 + 0x25u, (u8)r0);
        r0 = (u32)rd8(0x817fdfbfu);
        wr8(r3 + 0x26u, (u8)r4);
        wr8(r3 + 0x27u, (u8)r0);
        a.r[0] = param_r3 + 0x4bcu;
        (void)tc_call(0x800d3298u, &a);
    } else {
        r3 = tc_call(0x80052c3cu, &a);
        r30 = r3;
        a.r[0] = param_r3;
        f1 = tc_callf(0x800d59e8u, &a);
        f30 = f1;
        a.r[0] = param_r3;
        f1 = tc_callf(0x800d59f0u, &a);
        f31 = f1;
        a.r[0] = param_r3;
        r3 = tc_call(0x800d56bcu, &a);
        wrf32d(r30 + 0xcu, f30);
        r31 = r3;
        r28 = 0u;
        wrf32d(r30 + 0x10u, f31);
        wrf32d(r30 + 0x18u, f30);
        wrf32d(r30 + 0x1cu, f31);
        while (r28 < r31) {
            a.r[0] = param_r3;
            a.r[1] = r28;
            r3 = tc_call(0x800d5504u, &a);
            r29 = r3;
            a.r[0] = param_r3;
            a.r[1] = r28;
            r3 = tc_call(0x800d58e4u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                a.r[0] = param_r3;
                a.r[1] = 0x817fdfc0u;
                a.r[2] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(param_r3 + 0x738u) + 0x10u), &a);
            } else {
                a.r[0] = param_r3;
                a.r[1] = 0x817fdfc0u;
                f1 = tc_callf(0x800d5b50u, &a);
            }
            wr32(0x817fdfb8u, rd32(0x817fdfc0u));
            r0 = (u32)rd8(0x817fdfb9u);
            wr8(r30 + 0x24u, rd8(0x817fdfb8u));
            r5 = (u32)rd8(0x817fdfbau);
            wr8(r30 + 0x25u, (u8)r0);
            r0 = (u32)rd8(0x817fdfbbu);
            wr8(r30 + 0x26u, (u8)r5);
            wr8(r30 + 0x27u, (u8)r0);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r30;
            a.r[1] = r29;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x800cbc94u, &a);
            wrf32d(r30 + 0x18u, (f64)rdf32(r30 + 0xcu));
            f30 = (f64)rdf32(r30 + 0x1cu);
            a.r[0] = param_r3;
            f1 = tc_callf(0x800d3b00u, &a);
            f31 = (f64)(f32)(f30 + f1);
            f1 = tc_callf(0x800d3b08u, &a);
            r28 = r28 + 1u;
            wrf32d(r30 + 0x1cu, (f64)(f32)(f1 + f31));
        }
    }
    return;
}
