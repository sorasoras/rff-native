#include "tc_rt.h"

void fn_80295620(void)
{
    u32 c0eq = 0, r4 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr8(0x817fdff8u, 0xcu);
    (void)tc_call(0x80297df0u, &a);
    f1 = tc_callf(0x80296f80u, &a);
    r4 = tc_lastr4();
    r12 = rd32(0x8053df00u);
    c0eq = r12 == 0u;
    if (!c0eq) {
        wr32(0x8053df00u, 0u);
        if (!c0eq) {
            a.r[0] = 0u;
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(r12, &a);
            r4 = tc_lastr4();
        }
    }
    r12 = rd32(0x8053df1cu);
    c0eq = r12 == 0u;
    if (!c0eq) {
        wr32(0x8053df1cu, 0u);
        if (!c0eq) {
            a.r[0] = 0x817fdff8u;
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(r12, &a);
            r4 = tc_lastr4();
        }
    }
    r12 = rd32(0x8053df38u);
    c0eq = r12 == 0u;
    if (!c0eq) {
        wr32(0x8053df38u, 0u);
        if (!c0eq) {
            a.r[0] = 0x817fdff8u;
            a.r[1] = r4;
            a.f[0] = f1;
            (void)tc_call(r12, &a);
        }
    }
    return;
}
