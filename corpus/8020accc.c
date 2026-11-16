#include "tc_rt.h"

u32 fn_8020accc(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r4 = rd32(param_1 + 0xcu);
    if (r4 != 0u && (u32)((s32)rd32(r4 + 0x9cu) >> 31) == 0u) {
        wr32(param_1 + 0xcu, 0u);
    }
    r0 = rd32(param_1 + 0x14u);
    if (r0 == 0u) {
        r0 = rd32(param_1);
        if (r0 != 0u) {
            if (r0 != 1u) {
                r3 = 0u;
                return r3;
            }
            if (rd32(param_1 + 0xcu) == 0u) {
                a.r[0] = param_1;
                (void)tc_call(0x8020aedcu, &a);
                r3 = 0u;
                return r3;
            }
            a.r[0] = param_1;
            (void)tc_call(0x8020af88u, &a);
        } else {
            if (rd32(param_1 + 0x10u) != 0u) {
                r0 = rd32(param_1 + 0x1cu);
                wr32(0x817fdfd8u, rd32(param_1 + 0x18u));
                wr32(0x817fdfdcu, r0);
                wr32(0x817fdfe0u, rd32(param_1 + 0x20u));
                a.r[0] = rd32(param_1 + 0x10u);
                a.r[1] = 0x817fdfd8u;
                (void)tc_call(0x8015811cu, &a);
            }
            if (rd32(param_1 + 0xcu) == 0u) {
                a.r[0] = param_1;
                (void)tc_call(0x8020aedcu, &a);
                r3 = 0u;
                return r3;
            }
            f1 = (f64)rdf32(param_1 + 8u);
            f0 = (f64)rdf32(0x80576774u);
            if ((f1 > f0) || (f1 == f0)) {
                a.r[0] = param_1;
                (void)tc_call(0x8020af88u, &a);
                a.r[0] = param_1;
                (void)tc_call(0x8020ae98u, &a);
            }
            f0 = (f64)rdf32(0x80576774u);
            f4 = (f64)(f32)((f64)rdf32(0x80576778u) + (f64)rdf32(param_1 + 8u));
            if (!(f4 < f0)) {
                f4 = f0;
            }
            f3 = (f64)rdf32(param_1 + 0x18u);
            f2 = (f64)rdf32(param_1 + 0x1cu);
            f0 = (f64)rdf32(param_1 + 0x20u);
            wrf32d(param_1 + 8u, f4);
            wrf32d(param_1 + 0x24u, f3);
            wrf32d(param_1 + 0x28u, f2);
            wrf32d(param_1 + 0x2cu, f0);
            a.f[0] = (f64)(f32)f4;
            a.r[0] = param_1;
            a.r[1] = param_1 + 0x18u;
            (void)tc_call(0x8020b140u, &a);
        }
        r3 = 1u;
    } else {
        a.r[0] = r0;
        r3 = tc_call(0x80320fe4u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 == 0u) {
            wr32(param_1 + 0x14u, 0u);
            a.r[0] = param_1;
            (void)tc_call(0x8020aedcu, &a);
            r3 = 0u;
        } else {
            r3 = rd32(param_1 + 0xcu);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                r0 = rd32(r3 + 4u);
                wr32(0x817fdfe4u, rd32(r3));
                wr32(0x817fdfe8u, r0);
                wr32(0x817fdfecu, rd32(r3 + 8u));
                a.r[0] = rd32(param_1 + 0x14u);
                a.r[1] = 0x817fdfe4u;
                (void)tc_call(0x8015811cu, &a);
            }
            r3 = 1u;
        }
    }
    return r3;
}
