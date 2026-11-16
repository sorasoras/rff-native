#include "tc_rt.h"

void fn_80077020(void)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r8 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if (rd32(0x804865b8u) == 0u) {
        r8 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
        r6 = rd32(r8 + 0x144u);
        r0 = rd32(r8 + 0x148u);
        wr32(0x817fdfd8u, rd32(r8 + 0x140u));
        wr32(0x817fdfdcu, r6);
        wr32(0x817fdfe0u, r0);
        a.r[0] = 0x817fdfd8u;
        a.r[1] = 0x804865c8u;
        a.r[2] = 0x817fdfd8u;
        (void)tc_call(0x80234380u, &a);
        r0 = rd32(0x804865d4u);
        if (r0 == 1u) {
            a.f[0] = (f64)rdf32(0x80572740u);
            a.r[0] = 0x90u;
            a.r[1] = 0x817fdfd8u;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            r3 = tc_call(0x800d7768u, &a);
            wr32(0x804865b8u, r3);
        } else {
            if (r0 == 2u) {
                a.f[0] = (f64)rdf32(0x80572740u);
                a.r[0] = 0x91u;
                a.r[1] = 0x817fdfd8u;
                a.r[2] = 0x804b15c0u;
                a.r[3] = 0x804890c8u;
                r3 = tc_call(0x800d7768u, &a);
                wr32(0x804865b8u, r3);
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
            a.r[1] = 0x817fdfd8u;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            r3 = tc_call(0x800d7768u, &a);
            wr32(0x804865bcu, r3);
        } else {
            r0 = r0 & 0x80u;
            if ((r0 != 0u && rd32(0x80571148u) == 0u) && ((u32)rd8(0x80492b98u) == 0u && rd32(0x804865bcu) == 0u)) {
                a.f[0] = (f64)rdf32(0x80572740u);
                a.r[0] = 0xc2u;
                a.r[1] = 0x817fdfd8u;
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
