#include "tc_rt.h"

u32 fn_80174ea8(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r12 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r3 = rd32(0x804863d8u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x80480000u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = 0.0;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        f1 = tc_lastf();
        r5 = rd32(r3);
        r4 = rd32(r3 + 4u);
        r0 = rd32(r3 + 8u);
        r12 = rd32(rd32(param_1) + 0x28u);
        wr32(0x817fdfe4u, r5);
        wr32(0x817fdfe8u, r4);
        wr32(0x817fdfecu, r0);
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(r12, &a);
        r6 = rd32(0x817fdfe8u);
        r0 = rd32(0x817fdfecu);
        wr32(0x817fdfd8u, rd32(0x817fdfe4u));
        wr32(0x817fdfdcu, r6);
        wr32(0x817fdfe0u, r0);
        a.r[0] = 0x817fdfd8u;
        a.r[1] = r3;
        a.r[2] = 0x817fdfd8u;
        (void)tc_call(0x802343a4u, &a);
        a.r[0] = 0x817fdfd8u;
        f1 = tc_callf(0x80234440u, &a);
        f0 = (f64)(f32)((f64)rdf32(0x80574f1cu) * (f64)rdf32(param_1 + 0x170u));
        if ((f1 > f0) || (f1 == f0)) {
            return 1u;
        }
    }
    a.r[0] = param_1;
    (void)tc_call(0x80175468u, &a);
    return 1u;
}
