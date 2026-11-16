#include "tc_rt.h"

void fn_8017edb8(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    f0 = (f64)rdf32(0x80575058u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    f1 = (f64)(f32)((f64)rdf32(param_1 + 0x88u) + (f64)rdf32(param_1 + 0xa8u));
    wrf32d(param_1 + 0x88u, f1);
    if (f1 > f0) {
        r9 = rd32(0x8033a8dcu);
        r8 = rd32(0x8033a8e0u);
        r6 = (rd32(param_1 + 0x74u) << 2u) & 0xfffffffcu;
        r7 = rd32(0x8033a8e4u);
        wr32(0x817fdfe8u, rd32(0x8033a8d8u));
        wr32(0x817fdfecu, r9);
        wr32(0x817fdff0u, r8);
        wr32(0x817fdff4u, r7);
        r5 = rd32(r6 - 0x7e802018u);
        wr8(0x817fdfdau, 1u);
        wr16(0x817fdfd8u, (u16)r5);
        wr8(0x817fdfdbu, 0xau);
        a.r[0] = 0x817fdfd8u;
        r3 = tc_call(0x80082354u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 != 0u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            a.f[0] = (f64)rdf32(0x80575058u);
            a.r[0] = 0xeu;
            a.r[1] = r3;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            (void)tc_call(0x800d783cu, &a);
            a.r[0] = 0x80475e24u;
            a.r[1] = param_1;
            f1 = tc_callf(0x8017d0d0u, &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0xc31u;
            a.r[2] = r3;
            (void)tc_call(0x8010a794u, &a);
            a.r[0] = rd32(param_1 + 0x80u);
            a.r[1] = 1u;
            (void)tc_call(0x8017fde4u, &a);
            wr32(param_1 + 0x80u, 8u);
            return;
        }
        a.r[0] = param_1;
        a.r[1] = param_1 + 0x90u;
        (void)tc_call(0x8017f998u, &a);
        a.r[0] = 0x803d0320u;
        r3 = tc_call(0x800d595cu, &a);
        r0 = 0u;
        if (r3 == 1u || r3 == 2u) {
            r0 = 1u;
        }
        if (r0 != 0u) {
            return;
        }
        a.r[0] = 0xbu;
        a.r[1] = 0x12u;
        a.r[2] = 0u;
        r3 = tc_call(0x801412f8u, &a);
        a.r[0] = r3;
        a.r[1] = 2u;
        a.r[2] = 0xffffffffu;
        a.r[3] = 0u;
        a.r[4] = 0x80u;
        a.r[5] = 0u;
        a.r[6] = 3u;
        (void)tc_call(0x80052ea0u, &a);
    } else {
        f0 = (f64)rdf32(0x80575048u);
        wrf32d(0x817fdfe4u, f0);
        wrf32d(0x817fdfe0u, f0);
        wrf32d(0x817fdfdcu, f0);
        a.f[0] = (f64)rdf32(param_1 + 0x88u);
        a.r[0] = param_1 + 0xb4u;
        a.r[1] = 0x817fdfdcu;
        f1 = tc_callf(0x8017e408u, &a);
        a.r[0] = param_1;
        a.r[1] = 0x817fdfdcu;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
    }
    return;
}
