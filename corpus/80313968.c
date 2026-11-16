#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80313968(u32 param_1, u32 param_2, s32 param_3, s32 param_4, s32 param_5, s32 param_6)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f2 = 0.0, t4 = 0.0, t6 = 0.0, t16 = 0.0, t18 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if (((u32)param_3 != 0u && (u32)param_4 != 0u) && (u32)(s8)param_5 == 0x64u) {
        r0 = rd32(param_2 + 4u);
        wr32(param_1, rd32(param_2));
        wr32(param_1 + 4u, r0);
        r0 = rd32(param_2 + 0xcu);
        wr32(param_1 + 8u, rd32(param_2 + 8u));
        wr32(param_1 + 0xcu, r0);
        r0 = rd32(param_2 + 0x14u);
        wr32(param_1 + 0x10u, rd32(param_2 + 0x10u));
        wr32(param_1 + 0x14u, r0);
        r0 = rd32(param_2 + 0x1cu);
        wr32(param_1 + 0x18u, rd32(param_2 + 0x18u));
        wr32(param_1 + 0x1cu, r0);
        r0 = rd32(param_2 + 0x24u);
        wr32(param_1 + 0x20u, rd32(param_2 + 0x20u));
        wr32(param_1 + 0x24u, r0);
        r0 = rd32(param_2 + 0x2cu);
        wr32(param_1 + 0x28u, rd32(param_2 + 0x28u));
        wr32(param_1 + 0x2cu, r0);
        return;
    }
    if (((u32)param_3 == 0u && (u32)param_4 == 0u) && (u32)(s8)param_5 == 0u) {
        a.r[0] = param_1;
        (void)tc_call(0x80233740u, &a);
        return;
    }
    a.r[0] = param_1;
    (void)tc_call(0x80233740u, &a);
    a.r[0] = param_2;
    a.r[1] = 0x817fdf9cu;
    (void)tc_call(0x803204bcu, &a);
    r0 = (u32)(s8)param_5;
    if (r0 == 0x64u) {
        a.r[0] = param_1;
        a.r[1] = param_1;
        a.r[2] = 0x817fdf9cu;
        (void)tc_call(0x802f0118u, &a);
    } else {
        if (r0 != 0u) {
            wr32(0x817fdfdcu, r0 ^ 0x80000000u);
            f2 = rdf64(0x80577888u);
            wr32(0x817fdfd8u, 0x43300000u);
            f0 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdfd8u) - f2), (f64)rdf32(0x80577878u));
            t4 = (f64)(f32)((f64)rdf32(0x817fdfa0u) * f0);
            t6 = (f64)rdf32(0x817fdfa4u);
            wrf32d(0x817fdf90u, (f64)(f32)((f64)rdf32(0x817fdf9cu) * f0));
            wrf32d(0x817fdf94u, t4);
            wrf32d(0x817fdf98u, (f64)(f32)(t6 * f0));
            a.r[0] = param_1;
            a.r[1] = param_1;
            a.r[2] = 0x817fdf90u;
            (void)tc_call(0x802f0118u, &a);
        }
    }
    if ((u32)param_4 != 0u || (u32)param_3 != 0u) {
        if ((u32)param_6 != 0u && (u32)(s8)param_5 != 0x64u) {
            a.r[0] = param_1;
            a.r[1] = param_1;
            a.r[2] = 0x817fdf9cu;
            (void)tc_call(0x802f0118u, &a);
        }
        if ((u32)param_4 != 0u) {
            a.r[0] = param_2;
            a.r[1] = 0x817fdfa8u;
            (void)tc_call(0x8032023cu, &a);
            a.r[0] = param_1;
            a.r[1] = 0x817fdfa8u;
            a.r[2] = param_1;
            (void)tc_call(0x802337a0u, &a);
        }
        if ((u32)param_3 != 0u) {
            a.r[0] = param_2;
            a.r[1] = 0x817fdf84u;
            (void)tc_call(0x803204d8u, &a);
            a.r[0] = param_1;
            a.r[1] = param_1;
            a.r[2] = 0x817fdf84u;
            (void)tc_call(0x80320d7cu, &a);
        }
        if ((u32)param_6 != 0u && (u32)(s8)param_5 != 0x64u) {
            f0 = (f64)rdf32(0x80577890u);
            t16 = (f64)(f32)((f64)rdf32(0x817fdfa0u) * f0);
            t18 = (f64)rdf32(0x817fdfa4u);
            wrf32d(0x817fdf78u, (f64)(f32)((f64)rdf32(0x817fdf9cu) * f0));
            wrf32d(0x817fdf7cu, t16);
            wrf32d(0x817fdf80u, (f64)(f32)(t18 * f0));
            a.r[0] = param_1;
            a.r[1] = param_1;
            a.r[2] = 0x817fdf78u;
            (void)tc_call(0x802f0118u, &a);
        }
    }
    return;
}
