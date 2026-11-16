#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

s32 fn_802f5084(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf40u, 0x817fe000u);
    r5 = rd32(param_2);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r6 = rd32(param_2 + 4u);
    wr32(0x817fdfe8u, 0x43300000u);
    r7 = rd32(param_2 + 8u);
    wr32(0x817fdff0u, 0x43300000u);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x817fdf4cu;
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = r7;
    r3 = tc_call(0x802f5418u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = 0x817fdf68u;
        a.r[2] = 0x817fdf4cu;
        a.r[3] = rd32((u32)param_1 + 0xcu);
        a.r[4] = 0x817fdf48u;
        r3 = tc_call(0x802f56e4u, &a);
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            r0 = rd32(0x817fdf70u);
            r3 = 2u;
            if ((s32)r0 <= 2) {
                r3 = r0;
            }
            a.r[0] = r3;
            a.r[1] = rd32(param_2 + 0x18u);
            a.r[2] = rd32(param_2 + 0x14u);
            a.r[3] = rd32(param_2 + 0x1cu);
            a.r[4] = rd32(param_2 + 0x20u);
            r3 = tc_call(0x802f838cu, &a);
            r31 = r3;
            if (r3 == 0u) {
                r3 = 0u;
            } else {
                r0 = rd32(param_2 + 8u);
                wr32(r3 + 0xc4u, rd32(param_2 + 4u));
                r0 = r0 ^ 0x80000000u;
                f1 = rdf64(0x80577588u);
                r4 = (u32)rd8(0x817fdf61u);
                wr32(0x817fdfecu, r0);
                f2 = (f64)rdf32(0x80577578u);
                wr32(r3 + 0xc8u, r4);
                f3 = (f64)(f32)(rdf64(0x817fdfe8u) - f1);
                f1 = rdf64(0x80577590u);
                wr32(0x817fdff4u, (u32)rd8(0x817fdf63u));
                f3 = (f64)(f32)px_fdiv(f3, f2);
                f3 = (f64)(f32)(f3 * f3);
                f3 = (f64)(f32)(f3 * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdff0u) - f1), f2));
                wrf32d(r3 + 0xacu, f3);
                wrf32d(r3 + 0xb8u, (f64)rdf32(0x817fdf64u));
                a.r[0] = r3;
                a.r[1] = (u32)rd8(0x817fdf54u);
                (void)tc_call(0x802f909cu, &a);
                a.r[0] = r31;
                a.r[1] = (u32)rd8(0x817fdf55u);
                (void)tc_call(0x802f90b4u, &a);
                a.r[0] = r31;
                a.r[1] = (u32)rd8(0x817fdf56u);
                (void)tc_call(0x802f90ccu, &a);
                a.r[0] = r31;
                a.r[1] = (u32)rd8(0x817fdf57u);
                (void)tc_call(0x802f916cu, &a);
                a.r[0] = r31;
                a.r[1] = (u32)rd8(0x817fdf58u);
                (void)tc_call(0x802f9174u, &a);
                f4 = rdf64(0x80577588u);
                r0 = rd32(param_2 + 0x10u) ^ 0x80000000u;
                wr32(0x817fdfecu, ((u32)rd8(0x817fdf62u) - 0x40u) ^ 0x80000000u);
                f2 = (f64)rdf32(0x8057757cu);
                wr32(0x817fdff4u, r0);
                f0 = (f64)rdf32(0x80577580u);
                wrf32d(r31 + 0xb0u, (f64)(f32)((f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdfe8u) - f4), f2) + (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdff0u) - f4), f2)));
                wrf32d(r31 + 0xb4u, f0);
                wr32(r31 + 0xd8u, (u32)rd8(0x817fdf60u));
                wr8(r31 + 0x3au, (u8)((ppc_cntlzw(rd32(0x817fdf5cu) - 1u) >> 5u) & 0xffu));
                if (rd32(0x817fdf4cu) == 2u) {
                    r3 = rd32(0x817fdf48u);
                    wr32(r31 + 0xe4u, rd32(0x817fdf50u));
                    wr32(r31 + 0xe8u, r3);
                }
                a.r[0] = r31;
                a.r[1] = 0x817fdf68u;
                a.r[2] = rd32(param_2 + 0xcu);
                a.r[3] = 0u;
                (void)tc_call(0x802f7f80u, &a);
                r3 = r31;
            }
        }
    }
    return (s32)r3;
}
