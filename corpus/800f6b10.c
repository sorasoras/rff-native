#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_800f6b10(s32 param_1)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if (rd32((u32)param_1 + 0x80u) == 0u) {
        if (rd32((u32)param_1 + 8u) != 0u) {
            a.r[0] = 0x817fdfe0u;
            a.r[1] = (u32)param_1 + 8u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = 0.0;
            a.f[1] = 0.0;
            (void)tc_call(rd32((u32)param_1 + 0x2cu), &a);
            f1 = (f64)rdf32(0x817fdfe4u);
            f0 = (f64)rdf32(0x817fdfe8u);
            r3 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
            wrf32d(r3 + 0x134u, (f64)rdf32(0x817fdfe0u));
            wrf32d(r3 + 0x138u, f1);
            wrf32d(r3 + 0x13cu, f0);
        }
    } else {
        f0 = (f64)rdf32((u32)param_1 + 0x15cu);
        f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x160u) + (f64)rdf32(0x80573bb8u));
        wrf32d((u32)param_1 + 0x160u, f1);
        if (!((f1 < f0) || (f1 == f0))) {
            wr32((u32)param_1 + 0x80u, 0u);
        } else {
            if (rd32((u32)param_1 + 0x84u) != 1u) {
                f1 = (f64)(f32)px_fdiv(f1, f0);
                a.f[0] = f1;
                a.r[0] = 0x817fdfecu;
                a.r[1] = (u32)param_1 + 0x88u;
                a.r[2] = 0xcu;
                a.r[3] = rd32((u32)param_1 + 0x154u);
                (void)tc_call(0x8004581cu, &a);
            } else {
                f1 = (f64)(f32)px_fdiv(f1, f0);
                a.f[0] = f1;
                a.f[1] = (f64)rdf32((u32)param_1 + 0x158u);
                a.r[0] = 0x817fdfecu;
                a.r[1] = (u32)param_1 + 0x88u;
                a.r[2] = 0xcu;
                a.r[3] = rd32((u32)param_1 + 0x154u);
                (void)tc_call(0x80045964u, &a);
            }
            f1 = (f64)rdf32(0x817fdff0u);
            f0 = (f64)rdf32(0x817fdff4u);
            r3 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
            wrf32d(r3 + 0x134u, (f64)rdf32(0x817fdfecu));
            wrf32d(r3 + 0x138u, f1);
            wrf32d(r3 + 0x13cu, f0);
        }
    }
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800f6a0cu, &a);
    f1 = tc_lastf();
    f2 = 0.0;
    if (r3 == 0u && rd32((u32)param_1 + 0x30u) != 0u) {
        a.r[0] = 0x817fdfd4u;
        a.r[1] = (u32)param_1 + 0x30u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        (void)tc_call(rd32((u32)param_1 + 0x54u), &a);
        f2 = (f64)rdf32(0x817fdfd4u);
        f1 = (f64)rdf32(0x817fdfd8u);
        f0 = (f64)rdf32(0x817fdfdcu);
        r3 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
        wrf32d(r3 + 0x140u, f2);
        wrf32d(r3 + 0x144u, f1);
        wrf32d(r3 + 0x148u, f0);
    }
    if (rd32((u32)param_1 + 0x58u) != 0u) {
        a.r[0] = 0x817fdfc8u;
        a.r[1] = (u32)param_1 + 0x58u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        (void)tc_call(rd32((u32)param_1 + 0x7cu), &a);
        wrf32d((rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e5ecu, (f64)rdf32(0x817fdfc8u));
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800f69ccu, &a);
    return;
}
