#include "tc_rt.h"

void fn_8029150c(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0, r12 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if ((u32)param_2 != 0u) {
        r30 = (u32)rd16((u32)param_2 + 6u) & 0xffu;
    } else {
        r30 = (u32)rd8((u32)param_1 + 0x16u);
    }
    a.r[0] = 0x817fdfe8u;
    a.r[1] = 0u;
    a.r[2] = 8u;
    (void)tc_call(0x8000443cu, &a);
    wr8(0x817fdfefu, (u8)r30);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = (u32)param_1 + 8u;
    (void)tc_call(0x8028d2a4u, &a);
    wr8(0x8053d955u, (u8)((u32)rd8(0x8053d955u) + 1u));
    (void)tc_call(0x80289b7cu, &a);
    a.r[0] = 0x17u;
    a.r[1] = (u32)rd8((u32)param_1 + 0x15u);
    a.r[2] = (u32)param_1 + 8u;
    f1 = tc_callf(0x8028d3a8u, &a);
    r5 = (u32)rd8((u32)param_1 + 0x1bu);
    if (r5 != 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r30;
        a.r[1] = 7u;
        a.r[2] = r5;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x802a312cu, &a);
        f1 = tc_lastf();
        wr8(0x817fdfeeu, (u8)r3);
        if ((r3 & 0xffu) != 0u) {
            r12 = rd32(0x8053d94cu);
            wr8(0x817fdfeeu, 8u);
            a.r[0] = 2u;
            a.r[1] = 0x817fdfe8u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            (void)tc_call(r12, &a);
            wr8((u32)param_1 + 0x19u, 0u);
            return;
        }
        wr16((u32)param_1 + 0x10u, 2u);
    } else {
        wr8((u32)param_1 + 0x1au, 1u);
        a.r[0] = 2u;
        a.r[1] = 0x817fdfe8u;
        a.r[2] = r5;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(0x8053d94cu), &a);
    }
    wr8((u32)param_1 + 0x19u, 0u);
    return;
}
