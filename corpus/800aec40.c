#include "tc_rt.h"

u32 fn_800aec40(f64 param_1, u32 param_2, s32 param_3, s32 param_4, s32 param_5, u32 param_6)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdef0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    r31 = 0u;
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe0u, 0u);
    r0 = rd32(param_2 + 0xcf8u);
    wr32(0x817fdf10u, rd32(param_2 + 0xcf4u));
    wr32(0x817fdf14u, r0);
    wr32(0x817fdf18u, rd32(param_2 + 0xcfcu));
    if ((u32)param_5 != 0u) {
        a.r[0] = rd32(param_2 + 0x70u);
        a.r[1] = (u32)param_5;
        r3 = tc_call(0x80031be0u, &a);
        r31 = r3;
    } else if ((u32)param_4 != 0xffffffffu) {
        a.r[0] = rd32(param_2 + 0x70u);
        a.r[1] = (u32)param_4;
        r3 = tc_call(0x80031cf8u, &a);
        r31 = r3;
    }
    if (r31 == 0u) {
        f3 = (f64)rdf32(0x80572bf8u);
        f4 = (f64)rdf32(0x80572c00u);
        wrf32d(0x817fdf2cu, f3);
        f2 = (f64)rdf32(param_6);
        wrf32d(0x817fdf3cu, f3);
        f1 = (f64)rdf32(param_6 + 4u);
        wrf32d(0x817fdf4cu, f3);
        f0 = (f64)rdf32(param_6 + 8u);
        wrf32d(0x817fdf80u, f4);
        wrf32d(0x817fdf90u, f3);
        wrf32d(0x817fdfa0u, f3);
        wrf32d(0x817fdf84u, f3);
        wrf32d(0x817fdf94u, f4);
        wrf32d(0x817fdfa4u, f3);
        wrf32d(0x817fdf88u, f3);
        wrf32d(0x817fdf98u, f3);
        wrf32d(0x817fdfa8u, f4);
        wrf32d(0x817fdf8cu, f3);
        wrf32d(0x817fdf9cu, f3);
        wrf32d(0x817fdfacu, f3);
        wrf32d(0x817fdf20u, f4);
        wrf32d(0x817fdf30u, f3);
        wrf32d(0x817fdf40u, f3);
        wrf32d(0x817fdf24u, f3);
        wrf32d(0x817fdf34u, f4);
        wrf32d(0x817fdf44u, f3);
        wrf32d(0x817fdf28u, f3);
        wrf32d(0x817fdf38u, f3);
        wrf32d(0x817fdf48u, f4);
        wrf32d(0x817fdf2cu, f2);
        wrf32d(0x817fdf3cu, f1);
        wrf32d(0x817fdf4cu, f0);
        a.r[0] = 0x817fdf20u;
        a.r[1] = 0x817fdf80u;
        a.r[2] = 0x817fdf80u;
        (void)tc_call(0x802337a0u, &a);
        a.r[0] = param_2 + 0x40u;
        a.r[1] = 0x817fdf80u;
        a.r[2] = 0x817fdf80u;
        (void)tc_call(0x802337a0u, &a);
        f0 = (f64)rdf32(0x80572bf8u);
        wrf32d(0x817fdf18u, f0);
        wrf32d(0x817fdf14u, f0);
        wrf32d(0x817fdf10u, f0);
        a.r[0] = 0x817fdf80u;
        a.r[1] = 0x817fdf10u;
        a.r[2] = 0x817fdf10u;
        (void)tc_call(0x8023411cu, &a);
    } else {
        f3 = (f64)rdf32(0x80572bf8u);
        f4 = (f64)rdf32(0x80572c00u);
        wrf32d(0x817fdf5cu, f3);
        f2 = (f64)rdf32(param_6);
        wrf32d(0x817fdf6cu, f3);
        f1 = (f64)rdf32(param_6 + 4u);
        wrf32d(0x817fdf7cu, f3);
        f0 = (f64)rdf32(param_6 + 8u);
        wrf32d(0x817fdfb0u, f4);
        wrf32d(0x817fdfc0u, f3);
        wrf32d(0x817fdfd0u, f3);
        wrf32d(0x817fdfb4u, f3);
        wrf32d(0x817fdfc4u, f4);
        wrf32d(0x817fdfd4u, f3);
        wrf32d(0x817fdfb8u, f3);
        wrf32d(0x817fdfc8u, f3);
        wrf32d(0x817fdfd8u, f4);
        wrf32d(0x817fdfbcu, f3);
        wrf32d(0x817fdfccu, f3);
        wrf32d(0x817fdfdcu, f3);
        wrf32d(0x817fdf50u, f4);
        wrf32d(0x817fdf60u, f3);
        wrf32d(0x817fdf70u, f3);
        wrf32d(0x817fdf54u, f3);
        wrf32d(0x817fdf64u, f4);
        wrf32d(0x817fdf74u, f3);
        wrf32d(0x817fdf58u, f3);
        wrf32d(0x817fdf68u, f3);
        wrf32d(0x817fdf78u, f4);
        wrf32d(0x817fdf5cu, f2);
        wrf32d(0x817fdf6cu, f1);
        wrf32d(0x817fdf7cu, f0);
        a.r[0] = 0x817fdf50u;
        a.r[1] = 0x817fdfb0u;
        a.r[2] = 0x817fdfb0u;
        (void)tc_call(0x802337a0u, &a);
        a.r[0] = rd32(r31 + 0x50u);
        a.r[1] = 0x817fdfb0u;
        a.r[2] = 0x817fdfb0u;
        (void)tc_call(0x802337a0u, &a);
        f0 = (f64)rdf32(0x80572bf8u);
        wrf32d(0x817fdf18u, f0);
        wrf32d(0x817fdf14u, f0);
        wrf32d(0x817fdf10u, f0);
        a.r[0] = 0x817fdfb0u;
        a.r[1] = 0x817fdf10u;
        a.r[2] = 0x817fdf10u;
        (void)tc_call(0x8023411cu, &a);
    }
    a.r[0] = (u32)param_3;
    r3 = tc_call(0x800d91d8u, &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        if (rd32((((u32)param_3 << 2u) & 0xfffffffcu) - 0x7fca9e94u) == 0u) {
            a.f[0] = param_1;
            a.r[0] = (u32)param_3;
            a.r[1] = 0x817fdf10u;
            a.r[2] = param_2 + 0x10u;
            a.r[3] = 0x804890c8u;
            r3 = tc_call(0x800d783cu, &a);
            if (r3 != 0u) {
                wr32(r3 + 0x20u, 0xffffffffu);
                wr32(r3 + 0x24u, 0u);
            }
            r3 = 0u;
        } else {
            a.f[0] = param_1;
            a.r[0] = (u32)param_3;
            a.r[1] = 0x817fdf10u;
            a.r[2] = param_2 + 0x10u;
            a.r[3] = 0x804890c8u;
            r3 = tc_call(0x800d7768u, &a);
        }
    } else {
        f0 = (f64)rdf32(0x80572bf8u);
        wrf32d(0x817fdf0cu, f0);
        wrf32d(0x817fdf08u, f0);
        wrf32d(0x817fdf04u, f0);
        wrf32d(0x817fdf00u, f0);
        wrf32d(0x817fdefcu, f0);
        wrf32d(0x817fdef8u, f0);
        a.r[0] = param_2;
        a.r[1] = 0x817fdf04u;
        a.r[2] = 0xc9u;
        a.r[3] = 0x804890c8u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        f1 = tc_callf(rd32(rd32(param_2) + 0x34u), &a);
        a.r[0] = param_2;
        a.r[1] = 0x817fdef8u;
        a.r[2] = 0xc8u;
        a.r[3] = 0x804890c8u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        (void)tc_call(rd32(rd32(param_2) + 0x34u), &a);
        a.r[0] = (u32)param_3;
        a.r[1] = 0x817fdf04u;
        a.r[2] = 0x817fdef8u;
        r3 = tc_call(0x800d7ac8u, &a);
    }
    return r3;
}
