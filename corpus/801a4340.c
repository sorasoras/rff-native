#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801a4340(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    if ((u32)param_2 == 0u) {
        if (rd32((u32)param_1 + 0xdc0u) == 0u) {
            a.f[0] = (f64)rdf32(0x8057586cu);
            a.f[1] = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x805758b8u) * (f64)rdf32((u32)param_1 + 0xd24u)), (f64)rdf32(0x805758bcu));
            a.f[2] = (f64)rdf32(0x80575934u);
            a.r[0] = (u32)param_1;
            a.r[1] = 0xeu;
            (void)tc_call(0x800a97ccu, &a);
            wr32((u32)param_1 + 0xf04u, 0x12u);
        } else {
            a.f[0] = (f64)rdf32(0x8057586cu);
            a.f[1] = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x805758b8u) * (f64)rdf32((u32)param_1 + 0xd24u)), (f64)rdf32(0x805758bcu));
            a.f[2] = (f64)rdf32(0x80575934u);
            a.r[0] = (u32)param_1;
            a.r[1] = 0xcu;
            (void)tc_call(0x800a97ccu, &a);
            wr32((u32)param_1 + 0xf04u, 0x1eu);
        }
        r4 = rd32((u32)param_1 + 0xf04u);
        wr32((u32)param_1 + 0xf00u, r4);
        a.r[0] = (u32)param_1;
        a.r[1] = r4;
        (void)tc_call(0x801a39d0u, &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0xf98u;
        (void)tc_call(0x8010a74cu, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        (void)tc_call(0x801a2ab8u, &a);
        r0 = rd32((u32)param_1 + 0x180u);
        wr32(0x817fdfd8u, rd32((u32)param_1 + 0x17cu));
        wr32(0x817fdfdcu, r0);
        wr32(0x817fdfe0u, rd32((u32)param_1 + 0x184u));
        a.r[0] = 0x817fdfd8u;
        f1 = tc_callf(0x80234440u, &a);
        if (f1 > (f64)rdf32(0x80575938u)) {
            f1 = (f64)rdf32(0x80575868u);
            r0 = 0u;
            if ((f1 == (f64)rdf32(0x817fdfd8u) && f1 == (f64)rdf32(0x817fdfdcu)) && f1 == (f64)rdf32(0x817fdfe0u)) {
                r0 = 1u;
            }
            if (r0 == 0u) {
                a.r[0] = 0x817fdfd8u;
                a.r[1] = 0x817fdfd8u;
                (void)tc_call(0x802343e4u, &a);
            }
        }
        a.f[0] = (f64)rdf32((u32)param_1 + 0xd38u);
        a.r[0] = 0x817fdfd8u;
        a.r[1] = 0x817fdfd8u;
        (void)tc_call(0x802343c8u, &a);
        wrf32d((u32)param_1 + 0x170u, (f64)rdf32(0x817fdfd8u));
        wrf32d((u32)param_1 + 0x174u, (f64)rdf32(0x817fdfdcu));
        wrf32d((u32)param_1 + 0x178u, (f64)rdf32(0x817fdfe0u));
        wr32((u32)param_1 + 0xf40u, 0u);
    } else {
        if ((u32)param_2 == 1u) {
            if (rd32((u32)param_1 + 0x2bcu) == 2u) {
                a.r[0] = (u32)param_1;
                (void)tc_call(0x801a39dcu, &a);
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x801a3ad0u, &a);
                if (r3 != 0u && rd32((u32)param_1 + 0xf40u) == 0u) {
                    f31 = (f64)rdf32((u32)param_1 + 0xd9cu);
                    f1 = tc_callf(0x80040a00u, &a);
                    f0 = (f64)(f32)((f64)rdf32(0x8057588cu) * f1);
                    c0lt = f0 < f31;
                    if (((((c0lt << 0x1fu) | ((f0 > f31) << 0x1eu) | ((c0lt || (f0 == f31)) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
                        wr32((u32)param_1 + 0x2b0u, 1u);
                        wr32((u32)param_1 + 0x260u, 7u);
                    }
                    wr32((u32)param_1 + 0xf40u, 1u);
                    return;
                }
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x801a3b38u, &a);
                if (r3 != 0u && rd32((u32)param_1 + 0xf40u) == 0u) {
                    f31 = (f64)rdf32((u32)param_1 + 0xda0u);
                    f1 = tc_callf(0x80040a00u, &a);
                    f0 = (f64)(f32)((f64)rdf32(0x8057588cu) * f1);
                    c0lt = f0 < f31;
                    if (((((c0lt << 0x1fu) | ((f0 > f31) << 0x1eu) | ((c0lt || (f0 == f31)) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
                        wr32((u32)param_1 + 0x2b0u, 1u);
                        wr32((u32)param_1 + 0x260u, 0xcu);
                    }
                    wr32((u32)param_1 + 0xf40u, 1u);
                    return;
                }
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x801a3ba4u, &a);
                if (r3 == 0u) {
                    return;
                }
                wr32((u32)param_1 + 0x2b0u, 1u);
                wr32((u32)param_1 + 0x260u, 0x11u);
            } else {
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x801a3c1cu, &a);
                if (r3 != 0u) {
                    wr32((u32)param_1 + 0x2b0u, 1u);
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0u;
                    (void)tc_call(0x801a2ab8u, &a);
                } else {
                    if ((s32)rd32((u32)param_1 + 0xd00u) > 10) {
                        wr32((u32)param_1 + 0x2b0u, 1u);
                        a.r[0] = (u32)param_1;
                        a.r[1] = 0u;
                        (void)tc_call(0x801a2ab8u, &a);
                    }
                }
            }
        }
    }
    return;
}
