#include "tc_rt.h"

void fn_801867a0(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r4 = param_2;
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfd8u, 0u);
    if (rd32(param_1 + 0xa08u) != 0x21u) {
        a.r[0] = param_1;
        f1 = tc_callf(0x80186de0u, &a);
        r4 = tc_lastr4();
        wrf32d(param_1 + 0xad0u, f1);
    }
    if (param_2 > 0xau) {
        r3 = rd32(param_1 + 0xac0u);
        if (r3 != 0u) {
            if (rd32(param_1 + 0xab4u) != 1u) {
                a.r[0] = r3;
                (void)tc_call(0x80157e6cu, &a);
            } else {
                a.r[0] = r3;
                (void)tc_call(0x80157f30u, &a);
            }
            wr32(param_1 + 0xac0u, 0u);
        }
        r0 = rd32(param_1 + 0xe38u);
        wr32(param_1 + 0xab8u, 0u);
        wr32(param_1 + 0xab4u, 0xbu);
        wr32(param_1 + 0xabcu, 0u);
        if (r0 != 0u) {
            a.r[0] = param_1 + 0xdf0u;
            (void)tc_call(0x800a21f4u, &a);
        }
        a.r[0] = 0u;
        (void)tc_call(0x80043a3cu, &a);
    } else {
        r3 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fc90a24u);
        sw_ = r3;
        switch (sw_) {
        case 0x80186800u:
            wr32(param_1 + 0xab4u, 0u);
            break;
        case 0x80186838u:
            r0 = rd32(param_1 + 0xac0u);
            r4 = 1u;
            wr32(param_1 + 0xab4u, 1u);
            wr32(param_1 + 0xab8u, 3u);
            if (r0 == 0u) {
                a.r[0] = param_1;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                r7 = rd32(r3 + 4u);
                r0 = rd32(r3 + 8u);
                wr32(0x817fdfc0u, rd32(r3));
                f1 = (f64)rdf32(0x805751b8u);
                wr32(0x817fdfc4u, r7);
                f3 = (f64)rdf32(0x817fdfc0u);
                wr32(0x817fdfc8u, r0);
                f2 = (f64)rdf32(0x817fdfc4u);
                f0 = (f64)rdf32(0x817fdfc8u);
                wrf32d(param_1 + 0xac4u, f3);
                wrf32d(param_1 + 0xac8u, f2);
                wrf32d(param_1 + 0xaccu, f0);
                a.f[0] = f1;
                a.r[0] = 0x14u;
                a.r[1] = param_1 + 0xac4u;
                a.r[2] = 0x804b15c0u;
                a.r[3] = 0x804890c8u;
                r3 = tc_call(0x800d7768u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                wr32(param_1 + 0xac0u, r3);
            }
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            a.f[0] = (f64)rdf32(0x805751b8u);
            a.r[0] = 0x1eu;
            a.r[1] = r3;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            (void)tc_call(0x800d783cu, &a);
            break;
        case 0x8018682cu:
            wr32(param_1 + 0xab4u, 2u);
            break;
        case 0x80186818u:
            wr32(param_1 + 0xab4u, 3u);
            wr32(param_1 + 0xab8u, 0x1eu);
            break;
        case 0x8018680cu:
            wr32(param_1 + 0xab4u, 4u);
            break;
        case 0x801868f4u:
            wr32(param_1 + 0xab4u, 5u);
            wr32(param_1 + 0xab8u, 0x14u);
            if (rd32(0x803541b8u) != 1u) break;
            a.f[0] = (f64)rdf32(0x805751bcu);
            a.r[0] = 0u;
            (void)tc_call(0x80079434u, &a);
            break;
        case 0x80186928u:
            wr32(param_1 + 0xab4u, 6u);
            wr32(param_1 + 0xab8u, 0x2du);
            if (rd32(0x803541b8u) == 1u) {
                a.f[0] = (f64)rdf32(0x805751c0u);
                a.r[0] = 0u;
                (void)tc_call(0x80079434u, &a);
            }
            a.f[0] = (f64)rdf32(0x805751c4u);
            a.f[1] = (f64)rdf32(0x805751c8u);
            a.f[2] = (f64)rdf32(0x805751c0u);
            a.f[3] = (f64)rdf32(0x805751ccu);
            a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
            f1 = tc_callf(0x80056b18u, &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            r7 = rd32(r3);
            f0 = (f64)rdf32(0x805751d0u);
            wr32(0x817fdfb8u, rd32(r3 + 4u));
            f1 = (f64)rdf32(0x805751b8u);
            f2 = (f64)rdf32(0x817fdfb8u);
            wr32(0x817fdfb4u, r7);
            f0 = (f64)(f32)(f2 + f0);
            wr32(0x817fdfbcu, rd32(r3 + 8u));
            wrf32d(0x817fdfb8u, f0);
            a.f[0] = f1;
            a.r[0] = 0x37u;
            a.r[1] = 0x817fdfb4u;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            (void)tc_call(0x800d783cu, &a);
            break;
        case 0x801869e0u:
            wr32(param_1 + 0xab4u, 7u);
            wr32(param_1 + 0xab8u, 0u);
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            a.f[0] = (f64)rdf32(0x805751b8u);
            a.r[0] = 0xa0u;
            a.r[1] = r3;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            (void)tc_call(0x800d783cu, &a);
            if (rd32(0x803541b8u) != 1u) break;
            a.f[0] = (f64)rdf32(0x805751d0u);
            a.r[0] = 0u;
            (void)tc_call(0x80079434u, &a);
            break;
        case 0x80186a48u:
            wr32(param_1 + 0xab4u, 8u);
            break;
        case 0x80186a54u:
            wr32(param_1 + 0xab4u, 9u);
            wr32(param_1 + 0xab8u, 0x69u);
            wrf32d(param_1 + 0xac4u, (f64)rdf32(0x804890d4u));
            wrf32d(param_1 + 0xac8u, (f64)rdf32(0x804890d8u));
            wrf32d(param_1 + 0xaccu, (f64)rdf32(0x804890dcu));
            a.r[0] = param_1;
            a.r[1] = 0x804890d4u;
            a.r[2] = 0x80490000u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
            f31 = f1;
            r3 = rd32(param_1 + 0xac8u);
            r0 = rd32(param_1 + 0xaccu);
            wr32(0x817fdfa8u, rd32(param_1 + 0xac4u));
            wr32(0x817fdfacu, r3);
            wr32(0x817fdfb0u, r0);
            a.f[0] = f1;
            f1 = tc_callf(0x80262704u, &a);
            f30 = (f64)(f32)f1;
            a.f[0] = f31;
            f1 = tc_callf(0x80262b10u, &a);
            f5 = (f64)(f32)f1;
            f2 = (f64)rdf32(0x817fdfb0u);
            r3 = param_1 + 0xac4u;
            f4 = (f64)rdf32(0x817fdfa8u);
            f1 = (f64)rdf32(0x805751d4u);
            wrf32d(param_1 + 0xac4u, ppc_fmadds(f4, f30, (f64)(f32)(f2 * f5)));
            wrf32d(param_1 + 0xaccu, ppc_fmadds(f4, -f5, (f64)(f32)(f2 * f30)));
            a.f[0] = f1;
            a.r[0] = r3;
            a.r[1] = r3;
            f1 = tc_callf(0x802343c8u, &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            r4 = r3;
            r3 = param_1 + 0xac4u;
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r3;
            (void)tc_call(0x80234380u, &a);
            f1 = (f64)rdf32(0x805751b8u);
            wrf32d(param_1 + 0xac8u, ppc_fmadds((f64)rdf32(param_1 + 0xb4u), (f64)rdf32(0x805751d8u), (f64)rdf32(param_1 + 0xac8u)));
            a.f[0] = f1;
            a.r[0] = 0x27u;
            a.r[1] = param_1 + 0xac4u;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            (void)tc_call(0x800d783cu, &a);
            break;
        case 0x80186b58u:
            wr32(param_1 + 0xab4u, 0xau);
            wr32(param_1 + 0xab8u, 0x5au);
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            f0 = (f64)rdf32(0x805751d0u);
            wrf32d(param_1 + 0xac4u, (f64)rdf32(r3));
            f1 = (f64)rdf32(0x805751b8u);
            f2 = (f64)rdf32(r3 + 4u);
            wrf32d(param_1 + 0xac8u, f2);
            f0 = (f64)(f32)(f2 + f0);
            wrf32d(param_1 + 0xaccu, (f64)rdf32(r3 + 8u));
            wrf32d(param_1 + 0xac8u, f0);
            a.f[0] = f1;
            a.r[0] = 0x29u;
            a.r[1] = param_1 + 0xac4u;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            r3 = tc_call(0x800d783cu, &a);
            wr32(param_1 + 0xac0u, r3);
            break;
        default:
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            r3 = tc_call(sw_, &a);
            r0 = 0u;
            r4 = tc_lastr4();
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            r11 = 0u;
            r12 = 0u;
            f0 = 0.0;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            f9 = 0.0;
            f10 = 0.0;
            f11 = 0.0;
            f12 = 0.0;
            f13 = 0.0;
            ctr = 0u;
            return;
        }
    }
    return;
}
