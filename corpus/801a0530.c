#include "tc_rt.h"

void fn_801a0530(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r12 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if (rd32(param_1 + 0xa08u) == 7u && rd32(param_1 + 0x15c8u) != 0u) {
        f0 = (f64)rdf32(0x80575830u);
        wrf32d(0x817fdff4u, f0);
        wrf32d(0x817fdff0u, f0);
        wrf32d(0x817fdfecu, f0);
        r3 = param_1 + 0x54cu;
        r12 = rd32(r3);
        wrf32d(0x817fdfe8u, f0);
        r12 = rd32(r12 + 0x34u);
        wrf32d(0x817fdfe4u, f0);
        wrf32d(0x817fdfe0u, f0);
        a.r[0] = r3;
        a.r[1] = 0x817fdfecu;
        a.r[2] = 0xc8u;
        a.r[3] = 0x804890c8u;
        a.f[0] = 0.0;
        r3 = tc_call(r12, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            a.r[0] = param_1 + 0x54cu;
            a.r[1] = 0xc8u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(param_1 + 0x54cu) + 0x44u), &a);
        } else {
            a.r[0] = param_1 + 0x54cu;
            a.r[1] = 0x817fdfecu;
            a.r[2] = 0u;
            a.r[3] = 0x804890c8u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_1 + 0x54cu) + 0x34u), &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                a.r[0] = param_1 + 0x54cu;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(param_1 + 0x54cu) + 0x44u), &a);
            } else {
                a.r[0] = param_1;
                a.r[1] = 0x817fdfecu;
                a.r[2] = 0x15u;
                a.r[3] = 0x804890c8u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(param_1) + 0x34u), &a);
                a.r[0] = param_1;
                a.r[1] = 0x15u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(param_1) + 0x44u), &a);
            }
        }
        r3 = rd32(0x817fdff0u);
        r0 = rd32(0x817fdff4u);
        wr32(0x817fdfd4u, rd32(0x817fdfecu));
        wr32(0x817fdfd8u, r3);
        wr32(0x817fdfdcu, r0);
        wrf32d(0x817fdfe4u, f1);
        a.r[0] = rd32(param_1 + 0x15c8u);
        a.r[1] = 0x817fdfd4u;
        (void)tc_call(0x8015811cu, &a);
        r3 = rd32(0x817fdfe4u);
        r0 = rd32(0x817fdfe8u);
        wr32(0x817fdfc8u, rd32(0x817fdfe0u));
        wr32(0x817fdfccu, r3);
        wr32(0x817fdfd0u, r0);
        a.r[0] = rd32(param_1 + 0x15c8u);
        a.r[1] = 0x817fdfc8u;
        (void)tc_call(0x801582b4u, &a);
    }
    return;
}
