#include "tc_rt.h"

void fn_800771d8(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if (rd32(0x804865b8u) == 0u) {
        f2 = (f64)rdf32(0x804890c8u);
        f3 = (f64)rdf32(0x80572788u);
        f1 = (f64)rdf32(0x804890ccu);
        r7 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
        f0 = (f64)rdf32(0x804890d0u);
        r5 = rd32(r7 + 0x140u);
        wr32(0x817fdfecu, rd32(r7 + 0x144u));
        r0 = rd32(r7 + 0x148u);
        f4 = (f64)rdf32(0x817fdfecu);
        wr32(0x817fdfe8u, r5);
        f3 = (f64)(f32)(f4 + f3);
        wr32(0x817fdff0u, r0);
        wrf32d(0x817fdfecu, f3);
        wrf32d(0x804865c8u, f2);
        wrf32d(0x804865ccu, f1);
        wrf32d(0x804865d0u, f0);
        if ((u32)param_1 == 1u) {
            a.f[0] = (f64)rdf32(0x80572740u);
            a.r[0] = 0x90u;
            a.r[1] = 0x817fdfe8u;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            r3 = tc_call(0x800d7768u, &a);
            wr32(0x804865b8u, r3);
            wr32(0x804865d4u, 1u);
            wr32(0x804865c0u, 1u);
        } else {
            if ((u32)param_1 == 2u) {
                a.f[0] = (f64)rdf32(0x80572740u);
                a.r[0] = 0x91u;
                a.r[1] = 0x817fdfe8u;
                a.r[2] = 0x804b15c0u;
                a.r[3] = 0x804890c8u;
                r3 = tc_call(0x800d7768u, &a);
                wr32(0x804865b8u, r3);
                wr32(0x804865d4u, 2u);
                wr32(0x804865c0u, 1u);
            }
        }
        r0 = rd32(0x80492c58u);
        if ((r0 & 0x100u) != 0u) {
            if (rd32(0x80571148u) != 0u) {
                return;
            }
            r0 = (u32)rd8(0x80492b98u);
            if (r0 != 1u && r0 != 2u) {
                return;
            }
            if (rd32(0x804865bcu) != 0u) {
                return;
            }
            a.f[0] = (f64)rdf32(0x80572740u);
            a.r[0] = 0xc3u;
            a.r[1] = 0x817fdfe8u;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            r3 = tc_call(0x800d7768u, &a);
            wr32(0x804865bcu, r3);
        } else {
            r0 = r0 & 0x80u;
            if ((r0 != 0u && rd32(0x80571148u) == 0u) && ((u32)rd8(0x80492b98u) == 0u && rd32(0x804865bcu) == 0u)) {
                a.f[0] = (f64)rdf32(0x80572740u);
                a.r[0] = 0xc2u;
                a.r[1] = 0x817fdfe8u;
                a.r[2] = 0x804b15c0u;
                a.r[3] = 0x804890c8u;
                r3 = tc_call(0x800d7768u, &a);
                wr32(0x804865bcu, r3);
                a.r[0] = 0u;
                (void)tc_call(0x80077690u, &a);
            }
        }
    }
    return;
}
