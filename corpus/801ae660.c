#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_801ae660(s32 param_1, u32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r12 = 0, r29 = 0, r31 = 0, t9 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0, f31 = 0.0, t11 = 0.0, t13 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    a.r[0] = (u32)param_1 + 8u;
    f1 = tc_callf(0x800f737cu, &a);
    r3 = rd32((u32)param_1 + 0xcu);
    if (r3 != 0u) {
        a.r[0] = r3;
        f1 = tc_callf(0x801ae464u, &a);
        if (rd32((u32)param_1 + 0x10u) != 0u && (s32)rd32((u32)param_1 + 0x28u) >= 3) {
            a.r[0] = rd32(param_2 + 0x70u);
            a.r[1] = 0x15u;
            r3 = tc_call(0x80031cf8u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                a.r[0] = rd32(rd32((u32)param_1 + 0xcu) + 0x70u);
                a.r[1] = rd32(r3 + 0x50u);
                f1 = tc_callf(0x800315c0u, &a);
            }
        }
    }
    r4 = rd32((u32)param_1 + 0x28u);
    c0lt = (s32)r4 < 3;
    if (r4 == 3u) {
        f0 = (f64)rdf32(0x80575b1cu);
        f3 = (f64)rdf32(rd32(param_2 + 0x70u) + 0x54u);
        if ((f3 > f0) || (f3 == f0)) {
            a.r[0] = param_2;
            a.r[1] = 0x24c4u;
            (void)tc_call(0x801c35dcu, &a);
            wr32((u32)param_1 + 0x28u, rd32((u32)param_1 + 0x28u) + 1u);
        }
    } else if (!c0lt) {
        c0lt = (s32)r4 < 5;
        if (r4 == 5u) {
            f0 = (f64)rdf32(0x80575b30u);
            f3 = (f64)rdf32(rd32(param_2 + 0x70u) + 0x54u);
            if (!((f3 > f0) || (f3 == f0))) {
                f3 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x18u) + (f64)rdf32(0x80575b34u));
                wrf32d((u32)param_1 + 0x114u, (f64)rdf32(0x80575b2cu));
                wrf32d((u32)param_1 + 0x18u, f3);
                wrf32d((u32)param_1 + 0x110u, f3);
            } else {
                a.r[0] = (u32)param_1 + 0x2cu;
                (void)tc_call(0x801c2590u, &a);
            }
            if (rd32(param_2 + 0x110u) != 0u) {
                r3 = 0u;
                return r3;
            }
        } else if (c0lt) {
            f0 = (f64)rdf32(0x80575b20u);
            f3 = (f64)rdf32(rd32(param_2 + 0x70u) + 0x54u);
            if ((f3 > f0) || (f3 == f0)) {
                r4 = rd32((u32)param_1 + 0x118u);
                if ((s32)r4 >= 0) {
                    a.r[0] = 0x804b9e80u;
                    a.r[1] = r4;
                    (void)tc_call(0x801206f4u, &a);
                    wr32((u32)param_1 + 0x118u, 0xffffffffu);
                }
                a.r[0] = 0x804b9da0u;
                a.r[1] = 0x24c3u;
                (void)tc_call(0x8010a75cu, &a);
                wr32(0x817fdfbcu, rd32(param_2 + 0x150u));
                wr32(0x817fdfb8u, 0xau);
                a.r[0] = 0x817fdfb8u;
                a.r[1] = 6u;
                f1 = tc_callf(0x8014a130u, &a);
                f31 = (f64)(f32)px_fdiv(f1, (f64)rdf32(0x80575b24u));
                a.r[0] = 0x817fdfbcu;
                r3 = tc_call(0x801495bcu, &a);
                f1 = tc_lastf();
                r3 = r3 ^ 0x80000000u;
                wr32(0x817fdfdcu, r3);
                r12 = rd32(param_2);
                wr32(0x817fdfd8u, 0x43300000u);
                f3 = rdf64(0x80575ae8u);
                r12 = rd32(r12 + 0x28u);
                f31 = (f64)(f32)(f31 * (f64)(f32)(rdf64(0x817fdfd8u) - f3));
                a.r[0] = param_2;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = f3;
                a.f[3] = 0.0;
                r3 = tc_call(r12, &a);
                a.f[0] = (f64)rdf32(0x80575b28u);
                a.f[1] = f31;
                a.r[0] = (u32)param_1 + 0x2cu;
                a.r[1] = 0u;
                a.r[2] = r3;
                a.r[3] = param_2;
                a.r[4] = 0u;
                a.r[5] = 0x887u;
                (void)tc_call(0x801c2390u, &a);
                f3 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x14u) - (f64)rdf32(0x80575ad8u));
                wrf32d((u32)param_1 + 0x114u, (f64)rdf32(0x80575b2cu));
                wrf32d((u32)param_1 + 0x18u, f3);
                wrf32d((u32)param_1 + 0x110u, f3);
                a.r[0] = (u32)param_1 + 0x2cu;
                (void)tc_call(0x801c257cu, &a);
                f0 = (f64)rdf32(0x80575af4u);
                wrf32d(0x817fdfd0u, (f64)rdf32((u32)param_1 + 0x14u));
                wrf32d(0x817fdfccu, f0);
                wrf32d(0x817fdfd4u, f0);
                t9 = (u32)param_1 + 0x1cu;
                t11 = (f64)rdf32(t9 + 4u);
                t13 = (f64)rdf32((u32)param_1 + 0x24u);
                wrf32d(0x817fdfc0u, (f64)rdf32(t9));
                wrf32d(0x817fdfc4u, t11);
                wrf32d(0x817fdfc8u, t13);
                a.f[0] = (f64)rdf32(0x80575b04u);
                a.r[0] = 0x8cu;
                a.r[1] = 0x817fdfc0u;
                a.r[2] = 0x817fdfccu;
                a.r[3] = 0x804890c8u;
                (void)tc_call(0x800d783cu, &a);
                wr32((u32)param_1 + 0x28u, rd32((u32)param_1 + 0x28u) + 1u);
            }
        }
    } else {
        c0lt = (s32)r4 < 1;
        if (r4 == 1u) {
            f0 = (f64)rdf32(0x80575b0cu);
            f3 = (f64)rdf32(rd32(param_2 + 0x70u) + 0x54u);
            if (!((f3 > f0) || (f3 == f0))) {
                a.r[0] = param_2;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = f3;
                a.f[3] = 0.0;
                f1 = tc_callf(rd32(rd32(param_2) + 0x2cu), &a);
                f3 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x14u) - f1);
                f1 = ppc_fmadds((f64)rdf32(0x80575b10u), f3, f1);
                a.r[0] = param_2;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = f3;
                a.f[3] = 0.0;
                (void)tc_call(rd32(rd32(param_2) + 0x24u), &a);
            } else {
                a.r[0] = 0x804b9da0u;
                a.r[1] = 0x24c2u;
                r3 = tc_call(0x8010a75cu, &a);
                wr32((u32)param_1 + 0x118u, r3);
                a.r[0] = 0x804b9da0u;
                a.r[1] = 0x24c1u;
                (void)tc_call(0x8010a75cu, &a);
                wr32((u32)param_1 + 0x10u, 1u);
                a.r[0] = (u32)param_1 + 8u;
                (void)tc_call(0x800f7324u, &a);
                a.r[0] = (u32)param_1 + 8u;
                a.r[1] = 0x80371f48u;
                a.r[2] = 0x1eu;
                a.r[3] = 1u;
                (void)tc_call(0x800f733cu, &a);
                a.r[0] = (u32)param_1 + 8u;
                a.r[1] = 0x804dbe6cu;
                a.r[2] = 0x1eu;
                a.r[3] = 1u;
                (void)tc_call(0x800f7344u, &a);
                a.r[0] = param_2;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = (f64)rdf32((u32)param_1 + 0x14u);
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                (void)tc_call(rd32(rd32(param_2) + 0x24u), &a);
                a.r[0] = rd32(param_2 + 0x70u);
                a.r[1] = 0x15u;
                r3 = tc_call(0x80031cf8u, &a);
                r31 = r3;
                if (r3 != 0u) {
                    a.r[0] = rd32(rd32((u32)param_1 + 0xcu) + 0x70u);
                    a.r[1] = rd32(r31 + 0x50u);
                    (void)tc_call(0x800315c0u, &a);
                    r4 = rd32(r31 + 0x50u);
                    r0 = rd32(r4 + 4u);
                    wr32((u32)param_1 + 0x11cu, rd32(r4));
                    wr32((u32)param_1 + 0x120u, r0);
                    r0 = rd32(r4 + 0xcu);
                    wr32((u32)param_1 + 0x124u, rd32(r4 + 8u));
                    wr32((u32)param_1 + 0x128u, r0);
                    r0 = rd32(r4 + 0x14u);
                    wr32((u32)param_1 + 0x12cu, rd32(r4 + 0x10u));
                    wr32((u32)param_1 + 0x130u, r0);
                    r0 = rd32(r4 + 0x1cu);
                    wr32((u32)param_1 + 0x134u, rd32(r4 + 0x18u));
                    wr32((u32)param_1 + 0x138u, r0);
                    r0 = rd32(r4 + 0x24u);
                    wr32((u32)param_1 + 0x13cu, rd32(r4 + 0x20u));
                    wr32((u32)param_1 + 0x140u, r0);
                    r0 = rd32(r4 + 0x2cu);
                    wr32((u32)param_1 + 0x144u, rd32(r4 + 0x28u));
                    wr32((u32)param_1 + 0x148u, r0);
                }
                wr32((u32)param_1 + 0x28u, rd32((u32)param_1 + 0x28u) + 1u);
            }
        } else if (!c0lt) {
            f0 = (f64)rdf32(0x80575b14u);
            f3 = (f64)rdf32(rd32(param_2 + 0x70u) + 0x54u);
            if (!((f3 < f0) || (f3 == f0))) {
                wr32((u32)param_1 + 0x28u, r4 + 1u);
            } else {
                r3 = rd32((u32)param_1 + 0xcu);
                wrf32d((u32)param_1 + 0x138u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x138u) - (f64)rdf32(0x80575b18u)));
                r3 = rd32(r3 + 0x70u);
                a.r[0] = r3;
                a.r[1] = (u32)param_1 + 0x11cu;
                (void)tc_call(0x800315c0u, &a);
            }
        } else if ((s32)r4 >= 0) {
            if ((u32)(s8)rd8(0x80571378u) == 0u) {
                wr32(0x804dc4b0u, 0x803723b0u);
                a.r[0] = 0x804dc4b0u;
                r3 = tc_call(0x801c38acu, &a);
                f1 = tc_lastf();
                f0 = (f64)rdf32(0x80575af4u);
                wr32(0x804dc4b4u, r3);
                wr32(0x804dc4b0u, 0x803730f0u);
                wrf32d(0x804dc4c8u, f0);
                wrf32d(0x804dc4c4u, f0);
                wrf32d(0x804dc4c0u, f0);
                wr8(0x80571378u, 1u);
            }
            r29 = rd32(((rd32(0x804dc4b4u) << 2u) & 0xfffffffcu) - 0x7fb23668u);
            a.r[0] = r29;
            a.r[1] = param_2;
            a.r[2] = 0x804dc4b0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            r3 = tc_call(rd32(rd32(r29) + 0x10u), &a);
            f1 = tc_lastf();
            if (r3 == 0u) {
                a.r[0] = r29;
                a.r[1] = param_2;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                f1 = tc_callf(rd32(rd32(r29) + 0x14u), &a);
                a.r[0] = param_2;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                r3 = tc_call(rd32(rd32(param_2) + 0x1e4u), &a);
                a.r[0] = param_2;
                a.r[1] = r3;
                a.r[2] = 0u;
                a.r[3] = 1u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = (f64)rdf32(0x80575af8u);
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
                wr32(param_2 + 0xd30u, 1u);
                a.r[0] = rd32((u32)param_1 + 0xcu);
                (void)tc_call(0x801ae440u, &a);
                wr32((u32)param_1 + 0x28u, rd32((u32)param_1 + 0x28u) + 1u);
            }
        }
    }
    r3 = 1u;
    return r3;
}
