#include "tc_rt.h"

void fn_80075094(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r31 = rd32(0x80571144u);
    wr32(0x80486da8u, rd32(0x80486da8u) & 0xfffffffdu);
    if ((r31 + 0x10000u) == 0xffffu || r31 < 0x46u) {
        a.r[0] = rd32((rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u);
        r3 = tc_call(0x8007d150u, &a);
        if (r3 == 0u) {
            r0 = 3u;
        } else {
            r0 = rd32(r3 + 4u);
        }
        if (r0 != 1u) {
            if ((r31 + 0x10000u) != 0xffffu) {
                a.r[0] = 0x8049c500u;
                a.r[1] = r31;
                r3 = tc_call(0x800c8794u, &a);
                r30 = r3;
            } else {
                a.r[0] = rd32((rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u);
                r3 = tc_call(0x8007d150u, &a);
                if (r3 == 0u) {
                    r0 = 3u;
                } else {
                    r0 = rd32(r3 + 4u);
                }
                if (r0 == 2u) {
                    a.r[0] = 0xbu;
                    a.r[1] = 0x18u;
                    a.r[2] = 0u;
                    r3 = tc_call(0x801412f8u, &a);
                    r27 = r3;
                    r3 = tc_call(0x80052c3cu, &a);
                    r28 = r3 + 0x90u;
                    a.r[0] = rd32(0x803d2a48u);
                    a.r[1] = r28;
                    a.r[2] = r27;
                    a.r[3] = 0x400u;
                    (void)tc_call(0x800ce3e4u, &a);
                    a.r[0] = r28;
                    a.r[1] = 2u;
                    a.r[2] = 0xffffffffu;
                    a.r[3] = 0u;
                    a.r[4] = 0x80u;
                    a.r[5] = 0u;
                    a.r[6] = 3u;
                    (void)tc_call(0x80052ea0u, &a);
                    wr32(0x80571144u, 0x46u);
                    return;
                }
                r0 = (u32)rd8(0x8049912eu);
                if (r0 != 0x1eu) {
                    if (r0 != 0x1fu) {
                        return;
                    }
                    r30 = 0x61u;
                } else {
                    r30 = 0x60u;
                }
            }
            r29 = 0u;
            if ((r31 + 0x10000u) != 0xffffu) {
                a.r[0] = 0x8049c500u;
                a.r[1] = r31;
                r3 = tc_call(0x800c8888u, &a);
                r29 = r3;
            }
            a.r[0] = r30;
            a.r[1] = 0xfu;
            a.r[2] = 0x3e7u;
            (void)tc_call(0x800eb44cu, &a);
            f3 = (f64)rdf32(0x8057272cu);
            r0 = (u32)rd8(r30 - 0x7fb79ba4u);
            wr32(0x817fdfd8u, 0u);
            r0 = r0 | 2u;
            f2 = (f64)rdf32(param_r3);
            wrf32d(0x817fdfc8u, f3);
            f1 = (f64)rdf32(param_r3 + 4u);
            wrf32d(0x817fdfccu, f3);
            f0 = (f64)rdf32(param_r3 + 8u);
            wrf32d(0x817fdfd0u, f3);
            wr8(r30 - 0x7fb79ba4u, (u8)r0);
            wrf32d(0x817fdfd4u, f3);
            wr8(0x817fdfdcu, 0u);
            wr8(0x817fdfddu, 0u);
            wrf32d(0x817fdfc8u, f2);
            wrf32d(0x817fdfccu, f1);
            wrf32d(0x817fdfd0u, f0);
            wr32(0x817fdfd8u, r31);
            a.r[0] = r30;
            a.r[1] = r31;
            a.r[2] = 0x817fdfc8u;
            a.r[3] = 0u;
            r3 = tc_call(0x800eb4f0u, &a);
            r26 = r3;
            a.r[0] = r3;
            a.r[1] = r3 + 0xcf4u;
            f1 = tc_callf(0x800b42e4u, &a);
            wrf32d(0x817fdfccu, f1);
            a.r[0] = r26;
            a.r[1] = 0x817fdfc8u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            (void)tc_call(rd32(rd32(r26) + 0x1cu), &a);
            if (r26 == 0u) {
                wr32(0x80571140u, 0u);
            } else {
                wr32(0x80571140u, r26);
            }
            wr32(0x80571144u, r31);
            a.r[0] = 0x8046ad74u;
            a.r[1] = r26;
            f1 = tc_callf(0x8007b03cu, &a);
            wr32(r26 + 0x15cu, rd32(0x8046ad78u));
            a.r[0] = r26;
            a.r[1] = 1u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            (void)tc_call(rd32(rd32(r26) + 0x144u), &a);
            if ((r31 + 0x10000u) != 0xffffu) {
                a.r[0] = 0x8049c500u;
                a.r[1] = r31;
                (void)tc_call(0x800c834cu, &a);
                a.r[0] = 0x8049c500u;
                a.r[1] = r31;
                r3 = tc_call(0x800c87f4u, &a);
                a.r[0] = r26;
                a.r[1] = r3;
                (void)tc_call(0x800b24e8u, &a);
                a.r[0] = r26;
                (void)tc_call(0x800b2e68u, &a);
                r3 = tc_call(0x80207f10u, &a);
                r27 = r3;
                a.r[0] = r3;
                a.r[1] = r31;
                (void)tc_call(0x80207f18u, &a);
                a.r[0] = r26;
                a.r[1] = r27;
                (void)tc_call(0x800b0cf4u, &a);
                wr32(0x80486da8u, rd32(0x80486da8u) | 2u);
                a.r[0] = 0x80486da8u;
                f1 = tc_callf(0x800bb2b4u, &a);
                a.r[0] = r26;
                a.r[1] = r29;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                (void)tc_call(rd32(rd32(r26) + 0xd4u), &a);
                if (r30 == 0u || r30 == 1u) {
                    a.r[0] = 0x8049c500u;
                    a.r[1] = r31;
                    r3 = tc_call(0x800c8c58u, &a);
                    if ((s32)(r3 & 0xffu) > 0) {
                        a.r[0] = r26;
                        a.r[1] = 0u;
                        a.r[2] = 0u;
                        (void)tc_call(0x8014fd24u, &a);
                    }
                }
            }
        } else if ((r31 + 0x10000u) == 0xffffu && rd32(0x805706e8u) == 9u) {
            wr32(0x80571144u, 0x46u);
        }
    }
    return;
}
