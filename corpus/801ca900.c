#include "tc_rt.h"

void fn_801ca900(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = 1u;
    (void)tc_call(0x80044da4u, &a);
    r0 = (u32)rd8((u32)param_1 + 0x8cu);
    c0lt = (s32)r0 < 2;
    if (r0 == 2u) {
        r3 = tc_call(0x80059e38u, &a);
        if (r3 != 0u) {
            wr32((u32)param_1 + 0x90u, rd32((u32)param_1 + 0x90u) + 1u);
        }
        if ((s32)rd32((u32)param_1 + 0x90u) > 60) {
            wr8((u32)param_1 + 0x8cu, 3u);
            wr32((u32)param_1 + 0x90u, 0u);
        }
        f0 = (f64)rdf32(0x80575e38u);
        wrf32d(0x804879c4u, f0);
        wrf32d(0x80488b5cu, f0);
    } else if (!c0lt) {
        if ((s32)r0 < 4) {
            r3 = tc_call(0x80059e38u, &a);
            if (r3 != 0u) {
                wr32((u32)param_1 + 0x90u, rd32((u32)param_1 + 0x90u) + 1u);
            }
            r3 = rd32((u32)param_1 + 0x90u);
            wr8((u32)param_1 + 0x2cu, (u8)(0xffu - ((r3 << 3u) & 0xfffffff8u)));
            if ((s32)r3 > 30) {
                wr8((u32)param_1 + 0x8cu, 0u);
                wr32((u32)param_1 + 0x90u, 0u);
                wr8((u32)param_1 + 0x2cu, 0u);
                a.r[0] = (u32)param_1;
                (void)tc_call(0x801caac8u, &a);
            }
        }
    } else {
        c0lt = (s32)r0 < 0;
        if (r0 == 0u) {
            wr32((u32)param_1 + 0x90u, 0u);
            wr32((u32)param_1 + 0x28u, 0u);
        } else if (!c0lt) {
            if ((rd32(0x8057118cu) & 0x10u) != 0u) {
                r3 = tc_call(0x80059e38u, &a);
                if (r3 != 0u) {
                    wr32((u32)param_1 + 0x90u, rd32((u32)param_1 + 0x90u) + 1u);
                }
                r3 = rd32((u32)param_1 + 0x90u);
                wr8((u32)param_1 + 0x2cu, (u8)((r3 << 3u) & 0xf8u));
                if ((s32)r3 > 30) {
                    wr8((u32)param_1 + 0x8cu, 2u);
                    wr32((u32)param_1 + 0x90u, 0u);
                    wr8((u32)param_1 + 0x2cu, 0xffu);
                }
                f0 = (f64)rdf32(0x80575e38u);
                wrf32d(0x804879c4u, f0);
                wrf32d(0x80488b5cu, f0);
            } else {
                wr8((u32)param_1 + 0x8cu, 0u);
                a.r[0] = (u32)param_1;
                (void)tc_call(0x801caac8u, &a);
            }
        }
    }
    return;
}
