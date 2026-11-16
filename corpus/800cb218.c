#include "tc_rt.h"

u32 fn_800cb218(f64 param_1, u32 param_2, s32 param_3, u32 param_4, u32 param_5)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf40u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    r9 = rd32(param_5);
    wr32(0x817fdfecu, 0u);
    r8 = rd32(param_5 + 4u);
    wr32(0x817fdfe8u, 0u);
    r7 = rd32(param_5 + 8u);
    r6 = rd32(param_4);
    r4 = rd32(param_4 + 4u);
    r0 = rd32(param_4 + 8u);
    wr32(0x817fdf64u, r9);
    f1 = (f64)rdf32(0x80572f6cu);
    wr32(0x817fdf68u, r8);
    wr32(0x817fdf6cu, r7);
    wr32(0x817fdf58u, r6);
    wr32(0x817fdf5cu, r4);
    wr32(0x817fdf60u, r0);
    if (f1 != (f64)rdf32(param_2 + 0x28u)) {
        a.r[0] = param_2 + 0x30u;
        a.r[1] = 0x817fdf64u;
        a.r[2] = 0x817fdf64u;
        (void)tc_call(0x8023411cu, &a);
        a.r[0] = param_2 + 0x30u;
        a.r[1] = 0x817fdf58u;
        a.r[2] = 0x817fdf58u;
        (void)tc_call(0x8023411cu, &a);
    }
    f5 = (f64)(f32)((f64)rdf32(param_2 + 0x14u) + param_1);
    f3 = (f64)(f32)((f64)rdf32(param_2 + 0xcu) + param_1);
    f4 = (f64)rdf32(param_2 + 0x10u);
    f1 = (f64)(f32)((f64)rdf32(param_2 + 4u) - param_1);
    f0 = (f64)(f32)((f64)rdf32(param_2) - param_1);
    wrf32d(0x817fdf78u, (f64)(f32)((f64)rdf32(param_2 + 8u) - param_1));
    wrf32d(0x817fdf70u, f0);
    wrf32d(0x817fdf74u, f1);
    wrf32d(0x817fdf7cu, f3);
    wrf32d(0x817fdf80u, f4);
    wrf32d(0x817fdf84u, f5);
    wr32(0x817fdf48u, 0u);
    a.r[0] = 0x817fdf70u;
    a.r[1] = (u32)param_3 + 8u;
    a.r[2] = (u32)param_3 + 0x14u;
    a.r[3] = 0x817fdf58u;
    a.r[4] = 0x817fdf64u;
    a.r[5] = 0x817fdf48u;
    r3 = tc_call(0x80092464u, &a);
    if (r3 != 0u) {
        if (rd32((u32)param_3 + 0x64u) != 0u && rd32(0x817fdf48u) != 0u) {
            wr32((u32)param_3 + 0x60u, 1u);
        }
        f1 = (f64)rdf32(0x80572f6cu);
        if (f1 != (f64)rdf32(param_2 + 0x28u)) {
            f0 = (f64)rdf32(0x80572f68u);
            wrf32d(0x817fdfc8u, f1);
            wrf32d(0x817fdfb8u, f0);
            wrf32d(0x817fdfd8u, f1);
            wrf32d(0x817fdfbcu, f1);
            wrf32d(0x817fdfccu, f0);
            wrf32d(0x817fdfdcu, f1);
            wrf32d(0x817fdfc0u, f1);
            wrf32d(0x817fdfd0u, f1);
            wrf32d(0x817fdfe0u, f0);
            wrf32d(0x817fdfc4u, f1);
            wrf32d(0x817fdfd4u, f1);
            wrf32d(0x817fdfe4u, f1);
            a.r[0] = param_2;
            a.r[1] = 0x817fdfb8u;
            (void)tc_call(0x800cb48cu, &a);
            r4 = (u32)param_3 + 8u;
            a.r[0] = 0x817fdfb8u;
            a.r[1] = r4;
            a.r[2] = r4;
            (void)tc_call(0x8023411cu, &a);
            f0 = (f64)rdf32(0x80572f6cu);
            f2 = (f64)rdf32(0x80572f68u);
            wrf32d(0x817fdfc8u, f0);
            wrf32d(0x817fdfb8u, f2);
            wrf32d(0x817fdfd8u, f0);
            wrf32d(0x817fdfbcu, f0);
            wrf32d(0x817fdfccu, f2);
            wrf32d(0x817fdfdcu, f0);
            wrf32d(0x817fdfc0u, f0);
            wrf32d(0x817fdfd0u, f0);
            wrf32d(0x817fdfe0u, f2);
            wrf32d(0x817fdfc4u, f0);
            wrf32d(0x817fdfd4u, f0);
            wrf32d(0x817fdfe4u, f0);
            f1 = (f64)rdf32(param_2 + 0x28u);
            wrf32d(0x817fdf88u, f2);
            wrf32d(0x817fdf98u, f0);
            wrf32d(0x817fdfa8u, f0);
            wrf32d(0x817fdf8cu, f0);
            wrf32d(0x817fdf9cu, f2);
            wrf32d(0x817fdfacu, f0);
            wrf32d(0x817fdf90u, f0);
            wrf32d(0x817fdfa0u, f0);
            wrf32d(0x817fdfb0u, f2);
            wrf32d(0x817fdf94u, f0);
            wrf32d(0x817fdfa4u, f0);
            wrf32d(0x817fdfb4u, f0);
            a.f[0] = f1;
            a.r[0] = 0x817fdf88u;
            a.r[1] = 0x79u;
            (void)tc_call(0x80233a2cu, &a);
            a.r[0] = 0x817fdf88u;
            a.r[1] = 0x817fdfb8u;
            a.r[2] = 0x817fdfb8u;
            (void)tc_call(0x802337a0u, &a);
            r4 = (u32)param_3 + 0x14u;
            a.r[0] = 0x817fdfb8u;
            a.r[1] = r4;
            a.r[2] = r4;
            (void)tc_call(0x8023411cu, &a);
        }
        r0 = rd32((u32)param_3 + 0x18u);
        wr32(0x817fdf4cu, rd32((u32)param_3 + 0x14u));
        wr32(0x817fdf50u, r0);
        wr32(0x817fdf54u, rd32((u32)param_3 + 0x1cu));
        a.f[0] = param_1;
        a.r[0] = 0x817fdf4cu;
        a.r[1] = 0x817fdf4cu;
        (void)tc_call(0x802343c8u, &a);
        r3 = (u32)param_3 + 8u;
        a.r[0] = r3;
        a.r[1] = 0x817fdf4cu;
        a.r[2] = r3;
        (void)tc_call(0x802343a4u, &a);
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
