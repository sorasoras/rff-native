#include "tc_rt.h"

void fn_80081160(void)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r30 = 0u;
    r4 = rd32(0x80571184u);
    r0 = (u32)rd8(0x80492b99u);
    r3 = (u32)rd8(0x80492b98u);
    wr8(0x817fdfe8u, (u8)r0);
    wr8(0x80492b9au, (u8)r3);
    if ((s32)r4 < 2 && (s32)r4 >= 0) {
        if (r0 >= 3u && r0 < 5u) {
            f1 = tc_callf(0x80040a00u, &a);
            f0 = (f64)rdf32(0x805728bcu);
            f1 = (f64)(f32)((f64)rdf32(0x805728b8u) * f1);
            c0lt = f1 < f0;
            if (((((c0lt << 0x1fu) | ((f1 > f0) << 0x1eu) | ((c0lt || (f1 == f0)) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u) == 0u) {
                if ((u32)rd8(0x80492821u) != 3u) {
                    r0 = 1u;
                    wr8(0x817fdfe8u, 1u);
                } else {
                    r0 = 2u;
                    wr8(0x817fdfe8u, 2u);
                }
            } else {
                r0 = 0u;
                wr8(0x817fdfe8u, 0u);
            }
        }
        r30 = 1u;
    }
    r0 = r0 & 0xffu;
    if (r0 == 5u) {
        a.r[0] = 0x817fdfe8u;
        r3 = tc_call(0x800810d8u, &a);
        if (r3 == 0u) {
            a.r[0] = 0x804ac83cu;
            a.r[1] = (u32)rd8(0x80492821u);
            a.r[2] = ((u32)rd8(0x80492823u) + ((u32)rd8(0x80492822u) * 6u) + 1u) & 0xffu;
            r3 = tc_call(0x80165b74u, &a);
            wr8(0x817fdfe8u, (u8)r3);
            if (r30 != 0u) {
                r0 = r3 & 0xffu;
                if (r0 >= 3u && r0 < 5u) {
                    f1 = tc_callf(0x80040a00u, &a);
                    f0 = (f64)rdf32(0x805728bcu);
                    f1 = (f64)(f32)((f64)rdf32(0x805728b8u) * f1);
                    c0lt = f1 < f0;
                    if (((((c0lt << 0x1fu) | ((f1 > f0) << 0x1eu) | ((c0lt || (f1 == f0)) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u) == 0u) {
                        if ((u32)rd8(0x80492821u) != 3u) {
                            wr8(0x817fdfe8u, 1u);
                        } else {
                            wr8(0x817fdfe8u, 2u);
                        }
                    } else {
                        wr8(0x817fdfe8u, 0u);
                    }
                }
            }
        }
    }
    r4 = (u32)rd8(0x817fdfe8u);
    wr8(0x80492b99u, 5u);
    wr8(0x80492b98u, (u8)r4);
    if (r4 == 3u || r4 == 4u) {
        wr32(0x8057118cu, rd32(0x8057118cu) & 0xfffffffeu);
    } else {
        wr32(0x8057118cu, rd32(0x8057118cu) | 1u);
    }
    return;
}
