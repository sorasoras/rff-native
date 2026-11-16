#include "tc_rt.h"

void fn_800b3e64(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x70u), &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        r3 = rd32(param_1 + 0x148u);
        if (((u32)((s32)((r3 << 6u) & 0xc0000000u) >> 31) == 0u && (u32)((s32)((r3 << 5u) & 0xc0000000u) >> 31) == 0u) && (u32)((s32)((r3 << 1u) & 0xc0000000u) >> 31) == 0u) {
            if (rd32(param_1 + 0xe98u) != 0u) {
                r3 = rd32(param_1 + 0xda4u);
                if (r3 != 0u) {
                    r0 = rd32(r3 + 4u);
                } else {
                    r0 = 0xffffffffu;
                }
                if (r0 != 3u) {
                    if (r3 != 0u) {
                        r0 = rd32(r3 + 4u);
                    } else {
                        r0 = 0xffffffffu;
                    }
                    if (r0 != 4u && rd32(param_1 + 0xe9cu) == 0u) {
                        a.r[0] = param_1;
                        a.r[1] = 0u;
                        a.f[0] = f1;
                        (void)tc_call(rd32(rd32(param_1) + 0x174u), &a);
                    }
                }
            }
            a.r[0] = param_1;
            (void)tc_call(0x800b3408u, &a);
            a.r[0] = param_1;
            (void)tc_call(0x800b3c94u, &a);
            r4 = rd32(param_1 + 0xe88u);
            wr32(param_1 + 0xe88u, r4 ^ (r4 & 0x40u));
            a.r[0] = param_1;
            (void)tc_call(0x800b3dc0u, &a);
            a.r[0] = param_1;
            (void)tc_call(0x800b3ce4u, &a);
        }
    }
    return;
}
