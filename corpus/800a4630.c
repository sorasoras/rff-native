#include "tc_rt.h"

f64 fn_800a4630(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if ((u32)param_1 == 0u) {
        f1 = (f64)rdf32(0x80572ad8u);
    } else {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x80074e90u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 == 0u) {
            f1 = (f64)rdf32(0x80572b00u);
        } else {
            r30 = rd32(0x804863d8u);
            if (r30 == 0u) {
                f1 = (f64)rdf32(0x80572ad8u);
            } else {
                r3 = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fb79c28u);
                if (r3 == 0u) {
                    f1 = (f64)rdf32(0x80572ad8u);
                } else {
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                    f1 = tc_lastf();
                    r31 = r3;
                    a.r[0] = r30;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(r30) + 0x28u), &a);
                    r0 = rd32(r3 + 4u);
                    wr32(0x817fdfe8u, rd32(r3));
                    wr32(0x817fdfecu, r0);
                    wr32(0x817fdff0u, rd32(r3 + 8u));
                    a.r[0] = 0x817fdfe8u;
                    a.r[1] = r31;
                    a.r[2] = 0x817fdfe8u;
                    (void)tc_call(0x802343a4u, &a);
                    a.r[0] = 0x817fdfe8u;
                    f1 = tc_callf(0x80234440u, &a);
                }
            }
        }
    }
    return f1;
}
