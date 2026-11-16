#include "tc_rt.h"

void fn_801530e8(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if (rd32((u32)param_1 + 0x140u) == 0u) {
        f0 = (f64)rdf32(0x8057483cu);
        wrf32d(0x817fdfe8u, f0);
        r5 = 0x8033a57au;
        wrf32d(0x817fdfecu, f0);
        wrf32d(0x817fdff0u, f0);
        r4 = rd32((u32)param_1 + 0x38u);
        r3 = (u32)param_1 + 0xf8u;
        if (rd32((u32)param_1 + 8u) == 0x14u) {
            r5 = 0x8033a570u;
        }
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = 0x817fdfe8u;
        (void)tc_call(0x80070170u, &a);
        wrf32d((u32)param_1 + 0x118u, (f64)rdf32((u32)param_1 + 0x1e8u));
        a.r[0] = (u32)param_1 + 0xf8u;
        f1 = tc_callf(0x8006ff58u, &a);
        r4 = tc_lastr4();
        r3 = rd32((u32)param_1 + 4u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r3) + 0x140u), &a);
            r0 = 0xdu;
            if (r3 != 0u) {
                r0 = 0xau;
            }
            r0 = r0 | 0x20000u;
            r0 = r0 | 0x2080u;
            wr32((u32)param_1 + 0x128u, r0);
        }
    }
    return;
}
