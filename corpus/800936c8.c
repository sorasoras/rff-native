#include "tc_rt.h"

void fn_800936c8(u32 param_1)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r7 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = rd32(param_1 + 0xa7cu);
    if ((s32)r4 >= 1) {
        r4 = r4 - 1u;
        r0 = rd32(param_1 + 0x100u);
        wr32(param_1 + 0xa7cu, r4);
        r7 = param_1 + (r4 * 0x24u);
        if (rd32(r7 + 0xa88u) != r0) {
            wr32(param_1 + 0xf8u, rd32(r7 + 0xa80u));
            wr32(param_1 + 0xfcu, rd32(r7 + 0xa84u));
            r4 = rd32(r7 + 0xa88u);
            wr32(param_1 + 0x100u, r4);
            wr32(param_1 + 0x104u, rd32(r7 + 0xa8cu));
            f1 = (f64)rdf32(r7 + 0xa90u);
            wrf32d(param_1 + 0x108u, f1);
            wrf32d(param_1 + 0x10cu, (f64)rdf32(r7 + 0xa94u));
            wr32(param_1 + 0x110u, rd32(r7 + 0xa98u));
            r5 = rd32(r7 + 0xa9cu);
            wr32(param_1 + 0x114u, r5);
            wr32(param_1 + 0x118u, rd32(r7 + 0xaa0u));
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = 1u;
            a.r[4] = r7;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
            wrf32d(rd32(param_1 + 0x70u) + 0x54u, (f64)rdf32(param_1 + ((rd32(param_1 + 0xa7cu) << 2u) & 0xfffffffcu) + 0xb10u));
        }
    }
    return;
}
