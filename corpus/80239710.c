#include "tc_rt.h"

s32 fn_80239710(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10)
{
    u32 ca = 0, r0 = 0, r3 = tc_argr(0u), r4 = tc_argr(1u), r6 = tc_argr(3u), r8 = tc_argr(5u), r9 = tc_argr(6u), r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x80571600u, 0u);
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = 0x80239708u;
    a.r[7] = param_r10;
    r3 = tc_call(0x8023cad4u, &a);
    f1 = tc_lastf();
    do {
    } while (rd32(0x80571600u) == 0u);
    if ((rd32(0x80571600u) & 1u) == 0u) {
        r3 = 0u;
    } else {
        r3 = tc_call(0x8023cab8u, &a);
        f1 = tc_lastf();
        r31 = r3;
        r3 = tc_call(0x802302bcu, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r6 = rd32(0x800000f8u);
        r8 = rd32(0x80571628u);
        r9 = rd32(0x8057162cu);
        r6 = ppc_mulhwu(0x10624dd3u, (r6 >> 2u) & 0x3fffffffu);
        ca = r9 <= r4;
        r4 = r4 - r9;
        r0 = (r3 - (r8 + !ca)) ^ 0x80000000u;
        if ((0u - (r0 - (r0 + ((((((r6 >> 6u) & 0x3ffffffu) * 0x64u) > r4) - 0x80000000u) > r0)))) != 0u) {
            r3 = 0u;
        } else {
            r3 = 0u - (r31 & 1u) + 2u;
        }
    }
    return (s32)r3;
}
