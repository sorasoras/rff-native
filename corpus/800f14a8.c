#include "tc_rt.h"

void fn_800f14a8(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r9 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    f3 = rdf64(0x80573b20u);
    wr32(0x817fdfecu, 0u);
    f0 = (f64)rdf32(0x80573b08u);
    wr32(0x817fdfe8u, 0u);
    f1 = (f64)rdf32(0x80573af0u);
    r5 = rd32((u32)param_2 + 0x18u);
    wr32(0x817fdfd8u, 0x43300000u);
    r6 = rd32(r5 + 0xcf4u);
    r0 = rd32(r5 + 0xcf8u);
    f4 = (f64)rdf32(0x80573b28u);
    wr32(0x817fdfccu, r6);
    f7 = (f64)rdf32(0x80573b0cu);
    wr32(0x817fdfd0u, r0);
    f6 = (f64)rdf32(0x80573b10u);
    r5 = rd32(r5 + 0xcfcu);
    wr32(0x817fdfc4u, r0);
    f5 = (f64)rdf32(0x80573af8u);
    wr32(0x817fdfd4u, r5);
    r3 = (u32)(s16)rd16((u32)param_2 + 0x68u);
    wr32(0x817fdfc0u, r6);
    r3 = r3 + 0x16cu;
    wr32(0x817fdfc8u, r5);
    wr32(0x817fdfdcu, (u32)(s16)r3 ^ 0x80000000u);
    f2 = rdf64(0x817fdfd8u);
    wrf32d(0x817fdfc4u, f4);
    f2 = (f64)(f32)(f2 - f3);
    wr16((u32)param_2 + 0x68u, (u16)r3);
    f2 = ppc_fmadds(f0, f2, f1);
    if (!((f2 < f1) || (f2 == f1))) {
        f0 = (f64)rdf32(0x80573b18u);
        if (!(f2 < f0)) {
            f2 = (f64)(f32)((f64)rdf32(0x80573b14u) - (f64)(f32)(f2 - f0));
            f0 = (f64)(f32)(f2 * f2);
            f7 = ppc_fmsubs(f7, f0, f6);
            f7 = ppc_fmadds(f7, f0, f5);
            f7 = (f64)(f32)(f7 * f2);
            f7 = -f7;
        } else {
            f2 = (f64)(f32)(f2 - f1);
            f0 = (f64)(f32)(f2 * f2);
            f7 = ppc_fmsubs(f7, f0, f6);
            f7 = ppc_fmadds(f7, f0, f5);
            f7 = (f64)(f32)(f7 * f2);
            f7 = -f7;
        }
    } else {
        f1 = (f64)rdf32(0x80573b14u);
        if (!((f2 < f1) || (f2 == f1))) {
            f2 = (f64)(f32)(f1 - (f64)(f32)(f2 - f1));
            f0 = (f64)(f32)(f2 * f2);
            f7 = ppc_fmsubs(f7, f0, f6);
            f7 = ppc_fmadds(f7, f0, f5);
            f7 = (f64)(f32)(f7 * f2);
        } else {
            f0 = (f64)(f32)(f2 * f2);
            f7 = ppc_fmsubs(f7, f0, f6);
            f7 = ppc_fmadds(f7, f0, f5);
            f7 = (f64)(f32)(f7 * f2);
        }
    }
    f0 = ppc_fmadds((f64)rdf32(0x80573b2cu), -f7, (f64)rdf32(0x817fdfc4u));
    r0 = rd32(0x817fdfc8u);
    wr32(0x817fdfb4u, rd32(0x817fdfc0u));
    wrf32d(0x817fdfc4u, f0);
    r6 = rd32(0x817fdfc4u);
    wr32(0x817fdfbcu, r0);
    wr32(0x817fdfb8u, r6);
    a.r[0] = 0x817fdfb4u;
    a.r[1] = 0x817fdfccu;
    a.r[2] = 0x817fdfb4u;
    (void)tc_call(0x802343a4u, &a);
    a.r[0] = 0x817fdfb4u;
    f1 = tc_callf(0x80234440u, &a);
    f31 = f1;
    if (f1 > (f64)rdf32(0x80573aecu)) {
        f1 = (f64)rdf32(0x80573ad8u);
        r0 = 0u;
        if (f1 == (f64)rdf32(0x817fdfb4u) && f1 == (f64)rdf32(0x817fdfb8u) && f1 == (f64)rdf32(0x817fdfbcu)) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            a.r[0] = 0x817fdfb4u;
            a.r[1] = 0x817fdfb4u;
            (void)tc_call(0x802343e4u, &a);
        }
        a.f[0] = f31;
        a.r[0] = 0x817fdfb4u;
        a.r[1] = 0x817fdfb4u;
        (void)tc_call(0x802343c8u, &a);
    }
    r9 = rd32((u32)param_2 + 0x18u);
    r6 = rd32(0x817fdfb4u);
    r7 = rd32(r9 + 0xd1cu);
    r0 = rd32(0x817fdfb8u);
    wr32(0x817fdfa8u, rd32(r9 + 0xd18u));
    wr32(0x817fdfacu, r7);
    wr32(0x817fdfb0u, rd32(r9 + 0xd20u));
    wr32(param_1, r6);
    wr32(param_1 + 4u, r0);
    wr32(param_1 + 8u, rd32(0x817fdfbcu));
    a.r[0] = param_1;
    a.r[1] = 0x817fdfa8u;
    a.r[2] = param_1;
    (void)tc_call(0x802343a4u, &a);
    return;
}
