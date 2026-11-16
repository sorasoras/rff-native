#include "tc_rt.h"

void fn_801f7cb8(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
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
    a.r[1] = 0x817fdfb8u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(param_r3 + 0x738u) + 0x10u), &a);
    a.r[0] = param_r3;
    a.r[1] = 0x817fdfb4u;
    (void)tc_call(0x800d5b50u, &a);
    wr32(0x817fdfb0u, rd32(0x817fdfb8u));
    r3 = tc_call(0x80052c3cu, &a);
    r0 = (u32)rd8(0x817fdfb1u);
    wr8(r3 + 0x24u, rd8(0x817fdfb0u));
    r4 = (u32)rd8(0x817fdfb2u);
    wr8(r3 + 0x25u, (u8)r0);
    r0 = (u32)rd8(0x817fdfb3u);
    wr8(r3 + 0x26u, (u8)r4);
    wr8(r3 + 0x27u, (u8)r0);
    a.r[0] = param_r3 + 0x4bcu;
    (void)tc_call(0x800d3298u, &a);
    a.r[0] = param_r3;
    r3 = tc_call(0x800d56bcu, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        a.r[0] = param_r3;
        a.r[1] = 0x817fdfb8u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_r3 + 0x738u) + 0x10u), &a);
        a.r[0] = param_r3;
        f1 = tc_callf(0x801f81f0u, &a);
        f30 = f1;
        a.r[0] = param_r3;
        f1 = tc_callf(0x800d5a00u, &a);
        f31 = f1;
        a.r[0] = param_r3;
        f1 = tc_callf(0x800d59f0u, &a);
        f31 = (f64)(f32)(f1 + f31);
        a.r[0] = param_r3;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(param_r3 + 0x738u) + 0x20u), &a);
        f31 = (f64)(f32)(f31 + f1);
        r3 = tc_call(0x80052c3cu, &a);
        wrf32d(r3 + 0xcu, f30);
        r29 = r3;
        wrf32d(r3 + 0x10u, f31);
        wrf32d(r3 + 0x18u, f30);
        wrf32d(r3 + 0x1cu, f31);
        a.r[0] = param_r3;
        r3 = tc_call(0x800d56bcu, &a);
        r30 = r3;
        r27 = 0u;
        while (r27 < r30) {
            a.r[0] = param_r3;
            a.r[1] = r27;
            r3 = tc_call(0x800d5504u, &a);
            r28 = r3;
            a.r[0] = param_r3;
            a.r[1] = r27;
            r3 = tc_call(0x800d58e4u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                wr32(0x817fdfacu, rd32(0x817fdfb8u));
                r0 = (u32)rd8(0x817fdfadu);
                wr8(r29 + 0x24u, rd8(0x817fdfacu));
                r3 = (u32)rd8(0x817fdfaeu);
                wr8(r29 + 0x25u, (u8)r0);
                r0 = (u32)rd8(0x817fdfafu);
                wr8(r29 + 0x26u, (u8)r3);
                wr8(r29 + 0x27u, (u8)r0);
            } else {
                wr32(0x817fdfa8u, rd32(0x817fdfb4u));
                r0 = (u32)rd8(0x817fdfa9u);
                wr8(r29 + 0x24u, rd8(0x817fdfa8u));
                r3 = (u32)rd8(0x817fdfaau);
                wr8(r29 + 0x25u, (u8)r0);
                r0 = (u32)rd8(0x817fdfabu);
                wr8(r29 + 0x26u, (u8)r3);
                wr8(r29 + 0x27u, (u8)r0);
            }
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r29;
            a.r[1] = r28;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x800cbc94u, &a);
            a.r[0] = param_r3;
            r3 = tc_call(0x800d5a0cu, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 == 1u) {
                f30 = (f64)rdf32(r29 + 0x18u);
                a.r[0] = param_r3;
                a.r[1] = r4;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(param_r3 + 0x738u) + 0x1cu), &a);
                wrf32d(r29 + 0x18u, (f64)(f32)(f30 + f1));
            } else {
                wrf32d(r29 + 0x18u, (f64)rdf32(r29 + 0xcu));
                f30 = (f64)rdf32(r29 + 0x1cu);
                a.r[0] = param_r3;
                f1 = tc_callf(0x800d3b00u, &a);
                f31 = (f64)(f32)(f30 + f1);
                f1 = tc_callf(0x800d3b08u, &a);
                wrf32d(r29 + 0x1cu, (f64)(f32)(f1 + f31));
            }
            r27 = r27 + 1u;
        }
    }
    return;
}
