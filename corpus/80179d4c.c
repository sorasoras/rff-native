#include "tc_rt.h"

void fn_80179d4c(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if (rd32(0x80570890u) == 0u) {
        r8 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
        r29 = r8 + 0x134u;
        r6 = rd32(r8 + 0x144u);
        r0 = rd32(r8 + 0x148u);
        wr32(0x817fdfd4u, rd32(r8 + 0x140u));
        wr32(0x817fdfd8u, r6);
        wr32(0x817fdfdcu, r0);
        a.r[0] = 0x817fdfd4u;
        a.r[1] = r29;
        a.r[2] = 0x817fdfd4u;
        (void)tc_call(0x802343a4u, &a);
        f1 = (f64)rdf32(0x80575010u);
        r0 = 0u;
        f0 = (f64)rdf32(0x817fdfd4u);
        wrf32d(0x817fdfd8u, f1);
        if (f1 == f0 && f1 == f1 && f1 == (f64)rdf32(0x817fdfdcu)) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            a.r[0] = 0x817fdfd4u;
            a.r[1] = 0x817fdfd4u;
            (void)tc_call(0x802343e4u, &a);
        }
        a.f[0] = (f64)rdf32(0x80575014u);
        a.r[0] = 0x817fdfd4u;
        a.r[1] = 0x817fdfd4u;
        (void)tc_call(0x802343c8u, &a);
        r6 = rd32(r29 + 4u);
        r0 = rd32(r29 + 8u);
        wr32(0x817fdfc8u, rd32(r29));
        wr32(0x817fdfccu, r6);
        wr32(0x817fdfd0u, r0);
        a.r[0] = 0x817fdfc8u;
        a.r[1] = 0x817fdfd4u;
        a.r[2] = 0x817fdfc8u;
        (void)tc_call(0x80234380u, &a);
        r6 = rd32(param_2 + 4u);
        r0 = rd32(param_2 + 8u);
        wr32(param_1, rd32(param_2));
        wr32(param_1 + 4u, r6);
        wr32(param_1 + 8u, r0);
        a.r[0] = param_1;
        a.r[1] = 0x817fdfc8u;
        a.r[2] = param_1;
        (void)tc_call(0x802343a4u, &a);
    } else {
        r0 = rd32(0x804863d8u);
        if (r0 == 0u) {
            r0 = rd32(0x804890ccu);
            wr32(param_1, rd32(0x804890c8u));
            wr32(param_1 + 4u, r0);
            wr32(param_1 + 8u, rd32(0x804890d0u));
        } else {
            a.r[0] = r0;
            a.r[1] = 0x80480000u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32(r0) + 0x28u), &a);
            r0 = rd32(r3 + 4u);
            r7 = rd32(param_2);
            wr32(0x817fdfe0u, rd32(r3));
            r6 = rd32(param_2 + 4u);
            wr32(0x817fdfe4u, r0);
            r0 = rd32(param_2 + 8u);
            wr32(0x817fdfe8u, rd32(r3 + 8u));
            wr32(param_1, r7);
            wr32(param_1 + 4u, r6);
            wr32(param_1 + 8u, r0);
            a.r[0] = param_1;
            a.r[1] = 0x817fdfe0u;
            a.r[2] = param_1;
            (void)tc_call(0x802343a4u, &a);
        }
    }
    return;
}
