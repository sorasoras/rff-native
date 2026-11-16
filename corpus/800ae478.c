#include "tc_rt.h"

u32 fn_800ae478(f64 param_1, s32 param_2)
{
    u32 c0gt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff8u, 0.0);
    wr32(0x817fdff4u, 0u);
    r3 = tc_call(0x800a7854u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        if (param_2 <= 0 || param_2 >= 33) {
            r3 = 0u;
        } else {
            a.r[0] = (u32)param_2;
            r3 = tc_call(0x800a7b08u, &a);
            if (r3 == 0u) {
                r3 = 0u;
            } else {
                r31 = rd32((((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fb79c28u);
                r3 = tc_call(0x80097da4u, &a);
                f1 = tc_lastf();
                r5 = rd32(r3 + 0x4cu);
                r4 = rd32(r5 + 0x74u);
                r0 = rd32(r5 + 0x78u);
                wr32(0x817fdfd8u, r4);
                wr32(0x817fdfdcu, r0);
                wr32(0x817fdfe0u, rd32(r5 + 0x7cu));
                a.r[0] = r31;
                a.r[1] = r4;
                a.r[2] = r5;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r31) + 0x30u), &a);
                a.r[0] = 0x817fdfd8u;
                a.r[1] = r3;
                f1 = tc_callf(0x802344e8u, &a);
                r4 = tc_lastr4();
                if ((f1 < param_1) || (f1 == param_1)) {
                    r3 = 0u;
                } else {
                    a.r[0] = r31;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(r31) + 0x28u), &a);
                    a.r[0] = 0x817fdfd8u;
                    a.r[1] = r3;
                    f1 = tc_callf(0x802344e8u, &a);
                    c0gt = f1 > param_1;
                    r3 = (ppc_cntlzw(((((f1 < param_1) << 0x1fu) | (c0gt << 0x1eu) | ((c0gt || (f1 == param_1)) << 0x1du) | (((f1 != f1) || (param_1 != param_1)) << 0x1cu)) >> 0x1du) & 1u) >> 5u) & 0x7ffffffu;
                }
            }
        }
    }
    return r3;
}
