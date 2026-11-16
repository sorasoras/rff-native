#include "tc_rt.h"

static void px_rec(u32 sp_, s32 param_1, s32 param_2)
{
    u32 r1 = 0, r26 = 0, r31 = 0, t0 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(sp_ - 0x30u, sp_);
    r1 = sp_ - 0x30u;
    wr32(r1 + 0x34u, 0x817ff000u);
    t0 = r1 + 0x14u;
    wr32(t0, 0u);
    wr32(t0 + 4u, 0u);
    wr32(t0 + 8u, 0u);
    wr32(t0 + 0xcu, 0u);
    wr32(t0 + 0x10u, 0u);
    wr32(t0 + 0x14u, 0u);
    wr32(t0 + 0x18u, 0u);
    if (((u32)rd8(rd32((u32)param_2 + 8u) + 0xbbu) & 1u) != 0u) {
        a.r[0] = (u32)param_2;
        a.r[1] = rd32((u32)param_1 + 4u) + 0x20u;
        (void)tc_call(0x801644dcu, &a);
        r26 = rd32((u32)param_2 + 0x18u);
        r31 = (u32)param_2 + 0x18u;
        while (r26 != r31) {
            a.r[0] = rd32((u32)param_1 + 4u);
            f1 = tc_callf(0x800fe6f8u, &a);
            if (r26 == 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x803694dcu;
                a.r[1] = 0x23du;
                a.r[2] = 0x803694b8u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x802e41c0u, &a);
            }
            if (r26 == 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x8036950cu;
                a.r[1] = 0x193u;
                a.r[2] = 0x803694e8u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802e41c0u, &a);
            }
            px_rec(r1, (u32)param_1, r26);
            r26 = rd32(r26);
        }
    }
    return;
}

void fn_80163fbc(s32 param_1, s32 param_2)
{
    px_rec(0x817fe000u, param_1, param_2);
}
