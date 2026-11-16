#include "tc_rt.h"

void fn_8020ffbc(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_1;
    r3 = tc_call(0x8020ff88u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1 + 0x124u;
        r3 = tc_call(0x80320fe4u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 == 0u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            r0 = rd32(r3 + 4u);
            wr32(0x817fdfe4u, rd32(r3));
            wr32(0x817fdfe8u, r0);
            wr32(0x817fdfecu, rd32(r3 + 8u));
            a.r[0] = rd32(param_1 + 0x78u);
            a.r[1] = 4u;
            r3 = tc_call(0x80031cf8u, &a);
            if (r3 != 0u) {
                r3 = rd32(r3 + 0x50u);
                f0 = (f64)rdf32(0x8057685cu);
                f2 = (f64)rdf32(r3 + 0xcu);
                wrf32d(0x817fdfd8u, f0);
                f1 = (f64)rdf32(r3 + 0x1cu);
                wrf32d(0x817fdfdcu, f0);
                f0 = (f64)rdf32(r3 + 0x2cu);
                wrf32d(0x817fdfd8u, f2);
                wrf32d(0x817fdfdcu, f1);
                wrf32d(0x817fdfe0u, f0);
            }
            if (rd32(0x8035616cu) != 0u) {
                a.r[0] = 0u;
                a.r[1] = 0x817fdfe4u;
                a.r[2] = param_1 + 0x124u;
                f1 = tc_callf(0x800d7908u, &a);
                r4 = tc_lastr4();
            } else {
                a.r[0] = 0u;
                a.r[1] = 0x817fdfe4u;
                a.r[2] = param_1 + 0x124u;
                f1 = tc_callf(0x800d7900u, &a);
                r4 = tc_lastr4();
            }
        }
        if (rd32(param_1 + 0x184u) == 0xffffffffu && rd32(param_1 + 0x188u) != 0u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            a.r[0] = 0x804b9da0u;
            a.r[1] = rd32(param_1 + 0x188u);
            a.r[2] = r3;
            r3 = tc_call(0x8010a85cu, &a);
            wr32(param_1 + 0x184u, r3);
        }
    }
    return;
}
