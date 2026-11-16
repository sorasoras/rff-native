#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_801b0310(s32 param_1, u32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    r0 = rd32((u32)param_1 + 8u);
    c0lt = (s32)r0 < 1;
    if (r0 != 1u) {
        if (!c0lt) {
            return (ppc_cntlzw(rd32(param_2 + 0x110u)) >> 5u) & 0x7ffffffu;
        }
        if ((s32)r0 < 0) {
            return (ppc_cntlzw(rd32(param_2 + 0x110u)) >> 5u) & 0x7ffffffu;
        }
        r3 = rd32(0x804863d8u);
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = 0.0;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        wr32(0x817fdfccu, rd32(r3));
        wr32(0x817fdfd0u, r0);
        wr32(0x817fdfd4u, rd32(r3 + 8u));
        a.r[0] = param_2;
        a.r[1] = 0x817fdfccu;
        a.r[2] = 0x804dc8b0u;
        f1 = tc_callf(0x801c3248u, &a);
        f31 = (f64)(f32)(f1 * (f64)rdf32(0x80575b60u));
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        f1 = tc_callf(rd32(rd32(param_2) + 0x2cu), &a);
        f31 = (f64)(f32)(f31 + f1);
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f31;
        a.f[1] = 0.0;
        (void)tc_call(rd32(rd32(param_2) + 0x24u), &a);
        f0 = (f64)rdf32(0x80575b68u);
        f1 = (f64)rdf32(rd32(param_2 + 0x70u) + 0x54u);
        if (!((f1 > f0) || (f1 == f0))) {
            return (ppc_cntlzw(rd32(param_2 + 0x110u)) >> 5u) & 0x7ffffffu;
        }
        wr32(0x817fdfbcu, rd32(param_2 + 0x150u));
        wr32(0x817fdfb8u, 0xau);
        a.r[0] = 0x817fdfb8u;
        a.r[1] = 0u;
        f1 = tc_callf(0x8014a130u, &a);
        f31 = (f64)(f32)px_fdiv(f1, (f64)rdf32(0x80575b24u));
        a.r[0] = 0x817fdfbcu;
        r3 = tc_call(0x801495bcu, &a);
        r3 = r3 ^ 0x80000000u;
        wr32(0x817fdfdcu, r3);
        f2 = rdf64(0x80575ae8u);
        wr32(0x817fdfd8u, 0x43300000u);
        f2 = (f64)(f32)(f31 * (f64)(f32)(rdf64(0x817fdfd8u) - f2));
        a.f[0] = (f64)rdf32(0x80575b44u);
        a.f[1] = f2;
        a.r[0] = (u32)param_1 + 0xcu;
        a.r[1] = 0u;
        a.r[2] = 0x804890c8u;
        a.r[3] = param_2;
        a.r[4] = 0u;
        a.r[5] = 0x845u;
        (void)tc_call(0x8006f570u, &a);
        f1 = (f64)rdf32(0x80575af4u);
        f0 = (f64)rdf32(0x80575b6cu);
        wrf32d(0x817fdfc0u, f1);
        wrf32d(0x817fdfc4u, f0);
        wrf32d(0x817fdfc8u, f1);
        a.r[0] = (u32)param_1 + 0xcu;
        a.r[1] = rd32(param_2 + 0x70u);
        a.r[2] = 0xa8u;
        a.r[3] = 0x817fdfc0u;
        f1 = tc_callf(0x800701d4u, &a);
        r4 = tc_lastr4();
        if (rd32((u32)param_1 + 0x54u) == 0u) {
            a.r[0] = (u32)param_1 + 0xcu;
            f1 = tc_callf(0x8006ff58u, &a);
            r4 = tc_lastr4();
        }
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
        a.r[0] = 0xf9u;
        a.r[1] = r3;
        a.r[2] = (u32)param_1 + 0xf0u;
        (void)tc_call(0x800d7908u, &a);
        a.f[0] = (f64)rdf32(0x80575af0u);
        a.r[0] = (u32)param_1 + 0xf0u;
        (void)tc_call(0x80157f78u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = param_2;
        (void)tc_call(0x801b0204u, &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0x24bcu;
        (void)tc_call(0x8010a75cu, &a);
        a.r[0] = param_2;
        a.r[1] = 0x24b8u;
        (void)tc_call(0x801c35dcu, &a);
        wr32((u32)param_1 + 8u, rd32((u32)param_1 + 8u) + 1u);
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = param_2;
        (void)tc_call(0x801b0204u, &a);
        f0 = (f64)rdf32(0x80575b38u);
        f1 = (f64)rdf32(rd32(param_2 + 0x70u) + 0x54u);
        if ((f1 > f0) || (f1 == f0)) {
            a.r[0] = (u32)param_1 + 0xf0u;
            (void)tc_call(0x80157f30u, &a);
            if (rd32((u32)param_1 + 0x54u) != 0u) {
                a.r[0] = (u32)param_1 + 0xcu;
                (void)tc_call(0x80070068u, &a);
            }
            wr32((u32)param_1 + 8u, rd32((u32)param_1 + 8u) + 1u);
        }
    }
    return (ppc_cntlzw(rd32(param_2 + 0x110u)) >> 5u) & 0x7ffffffu;
}
