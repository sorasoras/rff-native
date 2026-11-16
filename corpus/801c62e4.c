#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_801c62e4(s32 param_1, u32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r12 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    r0 = rd32((u32)param_1 + 0xecu);
    c0lt = (s32)r0 < 1;
    if (r0 != 1u) {
        if (!c0lt) {
            return (ppc_cntlzw(rd32(param_2 + 0x110u)) >> 5u) & 0x7ffffffu;
        }
        if ((s32)r0 < 0) {
            return (ppc_cntlzw(rd32(param_2 + 0x110u)) >> 5u) & 0x7ffffffu;
        }
        f0 = (f64)rdf32(0x80575d50u);
        f1 = (f64)rdf32(rd32(param_2 + 0x70u) + 0x54u);
        if (!((f1 > f0) || (f1 == f0))) {
            return (ppc_cntlzw(rd32(param_2 + 0x110u)) >> 5u) & 0x7ffffffu;
        }
        a.r[0] = param_2;
        a.r[1] = param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
        a.f[0] = (f64)rdf32(0x80575d84u);
        a.r[0] = 0x86u;
        a.r[1] = r3;
        a.r[2] = 0x804890c8u;
        a.r[3] = 0x804b15c0u;
        (void)tc_call(0x800d782cu, &a);
        if (rd32((u32)param_1 + 0x50u) == 0u) {
            wr32(0x817fdfdcu, rd32(param_2 + 0x150u));
            wr32(0x817fdfd8u, 8u);
            a.r[0] = 0x817fdfd8u;
            a.r[1] = 3u;
            f1 = tc_callf(0x8014a130u, &a);
            f31 = (f64)(f32)px_fdiv(f1, (f64)rdf32(0x80575ce0u));
            a.r[0] = 0x817fdfdcu;
            r3 = tc_call(0x801495bcu, &a);
            r3 = r3 ^ 0x80000000u;
            wr32(0x817fdfe4u, r3);
            r12 = rd32(param_2);
            wr32(0x817fdfe0u, 0x43300000u);
            f1 = rdf64(0x80575ce8u);
            r12 = rd32(r12 + 0x28u);
            f31 = (f64)(f32)(f31 * (f64)(f32)(rdf64(0x817fdfe0u) - f1));
            a.r[0] = param_2;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(r12, &a);
            a.f[0] = (f64)rdf32(0x80575d88u);
            a.f[1] = f31;
            a.r[0] = (u32)param_1 + 8u;
            a.r[1] = 0u;
            a.r[2] = r3;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0x2045u;
            (void)tc_call(0x8006f570u, &a);
            if (rd32((u32)param_1 + 0x50u) == 0u) {
                a.r[0] = (u32)param_1 + 8u;
                (void)tc_call(0x8006ff58u, &a);
            }
        }
        wr32((u32)param_1 + 0xecu, rd32((u32)param_1 + 0xecu) + 1u);
    } else {
        f0 = (f64)rdf32(0x80575d8cu);
        f1 = (f64)rdf32(rd32(param_2 + 0x70u) + 0x54u);
        if ((f1 > f0) || (f1 == f0)) {
            if (rd32((u32)param_1 + 0x50u) != 0u) {
                a.r[0] = (u32)param_1 + 8u;
                (void)tc_call(0x80070068u, &a);
            }
            wr32((u32)param_1 + 0xecu, rd32((u32)param_1 + 0xecu) + 1u);
        }
    }
    return (ppc_cntlzw(rd32(param_2 + 0x110u)) >> 5u) & 0x7ffffffu;
}
