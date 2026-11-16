#include "tc_rt.h"

void fn_800b5c78(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r8 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r3 = rd32(0x804863d8u);
    if (r3 != 0u) {
        r31 = 0u;
        a.r[0] = r3;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        r5 = rd32(0x8057073cu);
        wr32(0x817fdfe4u, rd32(r3));
        wr32(0x817fdfe8u, r0);
        wr32(0x817fdfecu, rd32(r3 + 8u));
        if (r5 == 0xffffffffu) {
            r31 = 1u;
        } else {
            r8 = ((r5 << 4u) & 0xfffffff0u) - 0x7fb619f0u;
            r6 = rd32(r8 + 8u);
            r0 = rd32(r8 + 0xcu);
            wr32(0x817fdfd8u, rd32(r8 + 4u));
            wr32(0x817fdfdcu, r6);
            wr32(0x817fdfe0u, r0);
            a.r[0] = 0x817fdfd8u;
            a.r[1] = 0x817fdfe4u;
            a.r[2] = 0x817fdfd8u;
            (void)tc_call(0x802343a4u, &a);
            a.r[0] = 0x817fdfd8u;
            f1 = tc_callf(0x80234440u, &a);
            f0 = (f64)rdf32(0x80572c2cu);
            if ((f1 > f0) || (f1 == f0)) {
                r31 = 1u;
            }
        }
        if (r31 != 0u) {
            r0 = rd32(0x8057073cu) + 1u;
            wr32(0x8057073cu, r0);
            if ((s32)r0 >= 180) {
                r0 = 0u;
                wr32(0x8057073cu, 0u);
            }
            r4 = (r0 << 4u) & 0xfffffff0u;
            f0 = (f64)rdf32(0x817fdfe4u);
            wr32(r4 - 0x7fb619f0u, 1u);
            r3 = r4 - 0x7fb619f0u;
            f1 = (f64)rdf32(0x817fdfe8u);
            wrf32d(r3 + 4u, f0);
            f0 = (f64)rdf32(0x817fdfecu);
            wrf32d(r3 + 8u, f1);
            wrf32d(r3 + 0xcu, f0);
        }
    }
    return;
}
