#include "tc_rt.h"

u32 fn_801c9160(s32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    if (rd32(param_2 + 4u) == 1u) {
        r3 = rd32(param_2);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = 0u;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x19cu), &a);
            f1 = tc_lastf();
            r0 = r3 - 0x59u;
            r4 = 0xffffffffu;
            r5 = 1u;
            if (r0 <= 0x21u) {
                r0 = (r0 << 2u) & 0xfffffffcu;
                r3 = rd32(r0 - 0x7fc8c9a8u);
                sw_ = r3;
                switch (sw_) {
                case 0x801c91c8u:
                    r0 = rd32((u32)param_1 + 0x1decu) + 1u;
                    wr32((u32)param_1 + 0x1decu, r0);
                    if (r0 != 8u) break;
                    r4 = 2u;
                    wr32((u32)param_1 + 0x1decu, 0u);
                    r5 = 4u;
                    break;
                case 0x801c9264u:
                    break;
                case 0x801c91f0u:
                    r0 = rd32((u32)param_1 + 0x1df0u) + 1u;
                    wr32((u32)param_1 + 0x1df0u, r0);
                    if (r0 != 2u) break;
                    r4 = 3u;
                    wr32((u32)param_1 + 0x1df0u, 0u);
                    r5 = 0x10u;
                    break;
                case 0x801c9218u:
                    r0 = rd32((u32)param_1 + 0x1df4u) + 1u;
                    wr32((u32)param_1 + 0x1df4u, r0);
                    if (r0 != 4u) break;
                    r4 = 1u;
                    wr32((u32)param_1 + 0x1df4u, 0u);
                    r5 = 2u;
                    break;
                case 0x801c9240u:
                    r0 = rd32((u32)param_1 + 0x1df8u) + 1u;
                    wr32((u32)param_1 + 0x1df8u, r0);
                    if (r0 != 0x10u) break;
                    r4 = 4u;
                    wr32((u32)param_1 + 0x1df8u, 0u);
                    r5 = 1u;
                    break;
                default:
                    a.r[0] = r3;
                    a.r[1] = 0xffffffffu;
                    a.r[2] = 1u;
                    a.f[0] = f1;
                    r3 = tc_call(sw_, &a);
                    r0 = 0u;
                    r4 = tc_lastr4();
                    r5 = 0u;
                    r6 = 0u;
                    r7 = 0u;
                    r8 = 0u;
                    r9 = 0u;
                    r10 = 0u;
                    r11 = 0u;
                    r12 = 0u;
                    f0 = 0.0;
                    f2 = 0.0;
                    f3 = 0.0;
                    f4 = 0.0;
                    f5 = 0.0;
                    f6 = 0.0;
                    f7 = 0.0;
                    f8 = 0.0;
                    f9 = 0.0;
                    f10 = 0.0;
                    f11 = 0.0;
                    f12 = 0.0;
                    f13 = 0.0;
                    ctr = 0u;
                    return r3;
                }
            }
            if (r4 != 0xffffffffu) {
                if (r4 == 4u) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0x29u;
                    (void)tc_call(0x800b31a0u, &a);
                } else {
                    a.r[0] = (u32)param_1;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    (void)tc_call(0x801c8eb8u, &a);
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0x2au;
                    (void)tc_call(0x800b31a0u, &a);
                }
            }
        }
    }
    return 1u;
}
