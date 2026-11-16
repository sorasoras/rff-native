#include "tc_rt.h"

void fn_80169270(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x1d4u), &a);
    r4 = tc_lastr4();
    r0 = rd32(param_1 + 0x100u);
    if (r3 == r0 || r0 == 7u) {
        r3 = rd32(param_1 + 0xe88u);
        f1 = (f64)(f32)((f64)rdf32(0x80574c48u) + (f64)rdf32(param_1 + 0x14u));
        c0lt = (f64)rdf32(0x80574c4cu) < f1;
        wr32(param_1 + 0xe88u, r3 | (r3 ^ 0x4000u));
        if (c0lt) {
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x80574c50u));
        } else {
            f0 = (f64)rdf32(0x80574c54u);
            if ((f0 > f1) || (f0 == f1)) {
                f1 = (f64)(f32)((f64)rdf32(0x80574c50u) + f1);
            }
        }
        wrf32d(param_1 + 0x14u, f1);
        a.r[0] = param_1;
        a.r[1] = r4;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_1) + 0x1d4u), &a);
        if (r3 != rd32(param_1 + 0x100u)) {
            a.r[0] = param_1;
            (void)tc_call(0x800b52d8u, &a);
            return;
        }
        r0 = rd32(param_1 + 0x169cu) + 1u;
        wr32(param_1 + 0x169cu, r0);
        if ((s32)r0 < 20) {
            a.r[0] = param_1;
            (void)tc_call(0x800b52d8u, &a);
            return;
        }
        wr32(param_1 + 0x169cu, 0u);
        a.r[0] = param_1;
        a.r[1] = 0x17d4u;
        (void)tc_call(0x800aef78u, &a);
    } else {
        r3 = rd32(param_1 + 0xe88u);
        wr32(param_1 + 0x169cu, 0u);
        wr32(param_1 + 0xe88u, r3 ^ (r3 & 0x4000u));
    }
    a.r[0] = param_1;
    (void)tc_call(0x800b52d8u, &a);
    return;
}
