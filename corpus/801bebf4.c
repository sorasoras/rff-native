#include "tc_rt.h"

void fn_801bebf4(s32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    a.r[0] = 0x19u;
    r3 = tc_call(0x801bfb7cu, &a);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 0u;
    r3 = tc_call(0x800f9458u, &a);
    f1 = tc_lastf();
    wr32((u32)param_1 + 0x9cu, r3);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x800fef2cu, &a);
    a.r[0] = (u32)param_1 + 0xa4u;
    a.r[1] = rd32((u32)param_1 + 0x9cu);
    (void)tc_call(0x801f0e3cu, &a);
    a.r[0] = (u32)param_1 + 0xa4u;
    a.r[1] = 0x8033ba1eu;
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = (u32)param_1 + 0xa4u;
    (void)tc_call(0x801f10d8u, &a);
    r30 = rd32(0x80571144u);
    if ((s32)r30 >= 0 && (s32)r30 < 70) {
        a.r[0] = 0x1au;
        r3 = tc_call(0x801bfb7cu, &a);
        a.r[0] = r3;
        a.r[1] = 0u;
        a.r[2] = 0u;
        r3 = tc_call(0x800f9458u, &a);
        f1 = tc_lastf();
        wr32((u32)param_1 + 0xa0u, r3);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[1] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x800fef2cu, &a);
        a.r[0] = (u32)param_1 + 0xf4u;
        a.r[1] = rd32((u32)param_1 + 0xa0u);
        (void)tc_call(0x801f0e3cu, &a);
        a.r[0] = (u32)param_1 + 0xf4u;
        a.r[1] = 0x8033ba25u;
        (void)tc_call(0x801f100cu, &a);
        a.r[0] = (u32)param_1 + 0xa4u;
        (void)tc_call(0x801f10d8u, &a);
        a.r[0] = 0x8049c500u;
        a.r[1] = r30;
        r3 = tc_call(0x800c8794u, &a);
        if ((s32)r3 >= 0 && (s32)r3 < 171) {
            wr32(0x817fdfe8u, r3);
            a.r[0] = 0x817fdfe8u;
            r3 = tc_call(0x801496d4u, &a);
            a.r[0] = r3;
            r3 = tc_call(0x801bfaa8u, &a);
            r29 = r3;
            a.r[0] = 0x68u;
            r3 = tc_call(0x801ed134u, &a);
            r31 = r3;
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = r29;
                a.r[2] = 0xffffffffu;
                (void)tc_call(0x801ec1f4u, &a);
            }
            wr32((u32)param_1 + 0x14cu, r31);
        } else {
            wr32((u32)param_1 + 0x14cu, 0u);
        }
    }
    wr32(rd32(0x80571398u) + 0x1a0u, r30);
    wr32((u32)param_1 + 0x98u, 0u);
    a.r[0] = 0x5f2u;
    a.r[1] = 0x801bed64u;
    a.r[2] = (u32)param_1;
    r3 = tc_call(0x800f939cu, &a);
    wr32((u32)param_1 + 0x34u, r3);
    wr32((u32)param_1 + 0x38u, 0u);
    return;
}
