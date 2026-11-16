#include "tc_rt.h"

void fn_801944a8(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = (u32)param_1;
    r30 = 0u;
    wr8((u32)param_1 + 0xabu, 0xffu);
    wr8((u32)param_1 + 0xaau, 0xffu);
    wr8((u32)param_1 + 0xa9u, 0xffu);
    wr8((u32)param_1 + 0xa8u, 0xffu);
    wr32((u32)param_1 + 0xb4u, 0u);
    do {
        a.r[0] = r30 + 0x4eu;
        r3 = tc_call(0x801bfa94u, &a);
        wr32(r31 + 0x2cu, r3);
        r3 = rd32(r3 + 8u);
        r6 = rd32(r3 + 0x18u);
        r29 = rd32(r3 + 0x14u);
        if (r6 != 0u) {
            r4 = rd32(r6);
            r5 = (u32)rd8(r6 + 4u);
            r6 = (u32)rd16(r6 + 8u);
            a.r[0] = r31 + 0x20u;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80252774u, &a);
            a.r[0] = r31;
            a.r[1] = rd32(r29);
            a.r[2] = (u32)rd16(r29 + 8u);
            a.r[3] = (u32)rd16(r29 + 0xau);
            a.r[4] = (u32)rd8(r29 + 4u);
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x80252348u, &a);
        } else {
            a.r[0] = r31;
            a.r[1] = rd32(r29);
            a.r[2] = (u32)rd16(r29 + 8u);
            a.r[3] = (u32)rd16(r29 + 0xau);
            a.r[4] = (u32)rd8(r29 + 4u);
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8025213cu, &a);
        }
        f1 = (f64)rdf32(0x805753ecu);
        a.f[0] = f1;
        a.f[1] = f1;
        a.f[2] = f1;
        a.r[0] = r31;
        a.r[1] = 1u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        (void)tc_call(0x80252390u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x30u;
    } while ((s32)r30 < 3);
    return;
}
