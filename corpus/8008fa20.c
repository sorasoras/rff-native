#include "tc_rt.h"

void fn_8008fa20(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if (rd32((u32)param_1 + 0x90u) == 0u) {
        r0 = rd32((u32)param_1 + 0x10u);
        f4 = (f64)rdf32(0x805729a4u);
        wr32(0x817fdfe4u, rd32((u32)param_1 + 0xcu));
        f3 = (f64)rdf32(0x80572990u);
        wr32(0x817fdfe8u, r0);
        f1 = ppc_fnmsubs(f3, f4, (f64)rdf32(0x817fdfe4u));
        wr32(0x817fdfecu, rd32((u32)param_1 + 0x14u));
        f0 = (f64)rdf32(0x817fdfecu);
        wrf32d(0x817fdfe4u, f1);
        f0 = ppc_fnmsubs(f3, f4, f0);
        wrf32d(0x817fdfecu, f0);
        r0 = rd32((u32)param_1 + 0x10u);
        wr32(0x817fdfd8u, rd32((u32)param_1 + 0xcu));
        wr32(0x817fdfdcu, r0);
        f0 = (f64)rdf32(0x817fdfdcu);
        f2 = ppc_fmadds(f3, f4, (f64)rdf32(0x817fdfd8u));
        wr32(0x817fdfe0u, rd32((u32)param_1 + 0x14u));
        f0 = ppc_fmadds(f3, f4, f0);
        f1 = (f64)rdf32(0x817fdfe0u);
        wrf32d(0x817fdfd8u, f2);
        f1 = ppc_fmadds(f3, f4, f1);
        wrf32d(0x817fdfdcu, f0);
        wrf32d(0x817fdfe0u, f1);
        r3 = tc_call(0x800545e4u, &a);
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x74u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x74u;
                r3 = tc_call(0x80094e80u, &a);
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x74u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
            }
        }
        if (r3 != 0u) {
            f1 = (f64)rdf32(0x8057296cu);
            f0 = (f64)rdf32(0x80572968u);
            wrf32d(r3 + 8u, f1);
            wrf32d(r3 + 4u, f1);
            wrf32d(r3, f1);
            wrf32d(r3 + 0x14u, f1);
            wrf32d(r3 + 0x10u, f1);
            wrf32d(r3 + 0xcu, f1);
            wrf32d(r3 + 0x30u, f0);
            wrf32d(r3 + 0x40u, f1);
            wrf32d(r3 + 0x50u, f1);
            wrf32d(r3 + 0x34u, f1);
            wrf32d(r3 + 0x44u, f0);
            wrf32d(r3 + 0x54u, f1);
            wrf32d(r3 + 0x38u, f1);
            wrf32d(r3 + 0x48u, f1);
            wrf32d(r3 + 0x58u, f0);
            wrf32d(r3 + 0x3cu, f1);
            wrf32d(r3 + 0x4cu, f1);
            wrf32d(r3 + 0x5cu, f1);
            wrf32d(r3 + 0x68u, f1);
            wrf32d(r3 + 0x64u, f1);
            wrf32d(r3 + 0x60u, f1);
            wr32(r3 + 0x6cu, 0u);
            wr32(r3 + 0x18u, 0u);
            wr32(r3 + 0x24u, 0u);
            wr32(r3 + 0x1cu, 0x40u);
            wr32(r3 + 0x20u, 2u);
            wr16(r3 + 0x70u, 0xffffu);
            wrf32d(r3 + 0x28u, f1);
        }
        wr32((u32)param_1 + 0x90u, r3);
        a.f[0] = (f64)rdf32(0x8057296cu);
        a.r[0] = r3;
        a.r[1] = (u32)param_1 + 0xcu;
        a.r[2] = 0x817fdfe4u;
        a.r[3] = 0x817fdfd8u;
        (void)tc_call(0x800ca4dcu, &a);
        a.r[0] = rd32((u32)param_1 + 0x90u);
        (void)tc_call(0x800cb55cu, &a);
        wr32(rd32((u32)param_1 + 0x90u) + 0x18u, 1u);
        wr32(rd32((u32)param_1 + 0x90u) + 0x20u, 0u);
    }
    return;
}
