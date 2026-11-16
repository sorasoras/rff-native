#include "tc_rt.h"

static u32 px_rec(u32 sp_, s32 param_1, u32 param_2)
{
    u32 r0 = 0, r1 = 0, r3 = 0, r5 = 0, r6 = 0, r8 = 0;
    TcArgs a = {0};
    wr32(sp_ - 0x70u, sp_);
    r1 = sp_ - 0x70u;
    wr32(r1 + 0x74u, 0x817ff000u);
    wr32(r1 + 0x6cu, 0u);
    wr32(r1 + 0x68u, 0u);
    if ((u32)rd8((u32)param_1 + 0x120u) != 0u) {
        r0 = rd32((u32)param_1 + 0xf4u);
        if (r0 == 0u) {
            a.r[0] = rd32((u32)param_1 + 0xbcu) + 0x54u;
            a.r[1] = (u32)param_1 + 0x124u;
            (void)tc_call(0x8023376cu, &a);
        } else {
            r3 = px_rec(r1, r0, r1 + 8u);
            r8 = (u32)rd8((u32)param_1 + 0x64u);
            r5 = r8 & 1u;
            r6 = (r8 >> 1u) & 1u;
            r8 = (r8 >> 2u) & 1u;
            a.r[0] = (u32)param_1 + 0x124u;
            a.r[1] = r1 + 8u;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = (u32)(s8)rd8((u32)param_1 + 0x65u);
            a.r[5] = r8;
            (void)tc_call(0x80313968u, &a);
        }
        r3 = (u32)param_1 + 0x124u;
        a.r[0] = r3;
        a.r[1] = r3;
        a.r[2] = (u32)param_1 + 0x90u;
        (void)tc_call(0x802f0118u, &a);
        a.f[0] = (f64)rdf32((u32)param_1 + 0xa8u);
        a.f[1] = (f64)rdf32((u32)param_1 + 0xacu);
        a.f[2] = (f64)rdf32((u32)param_1 + 0xb0u);
        a.r[0] = r1 + 0x38u;
        (void)tc_call(0x80320c10u, &a);
        r3 = (u32)param_1 + 0x124u;
        a.r[0] = r3;
        a.r[1] = r1 + 0x38u;
        a.r[2] = r3;
        (void)tc_call(0x802337a0u, &a);
        r3 = (u32)param_1 + 0x124u;
        a.r[0] = r3;
        a.r[1] = r3;
        a.r[2] = (u32)param_1 + 0x9cu;
        (void)tc_call(0x80320d7cu, &a);
        wr8((u32)param_1 + 0x120u, 0u);
    }
    if (param_2 != 0u) {
        r3 = param_2;
        r0 = rd32((u32)param_1 + 0x128u);
        wr32(param_2, rd32((u32)param_1 + 0x124u));
        wr32(param_2 + 4u, r0);
        r0 = rd32((u32)param_1 + 0x130u);
        wr32(param_2 + 8u, rd32((u32)param_1 + 0x12cu));
        wr32(param_2 + 0xcu, r0);
        r0 = rd32((u32)param_1 + 0x138u);
        wr32(param_2 + 0x10u, rd32((u32)param_1 + 0x134u));
        wr32(param_2 + 0x14u, r0);
        r0 = rd32((u32)param_1 + 0x140u);
        wr32(param_2 + 0x18u, rd32((u32)param_1 + 0x13cu));
        wr32(param_2 + 0x1cu, r0);
        r0 = rd32((u32)param_1 + 0x148u);
        wr32(param_2 + 0x20u, rd32((u32)param_1 + 0x144u));
        wr32(param_2 + 0x24u, r0);
        r0 = rd32((u32)param_1 + 0x150u);
        wr32(param_2 + 0x28u, rd32((u32)param_1 + 0x14cu));
        wr32(param_2 + 0x2cu, r0);
    } else {
        r3 = (u32)param_1 + 0x124u;
    }
    return r3;
}

u32 fn_80313b9c(s32 param_1, u32 param_2)
{
    return px_rec(0x817fe000u, param_1, param_2);
}
