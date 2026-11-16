#include "tc_rt.h"

void fn_801ca1cc(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0x2a8u, 1u);
    wr32((u32)param_1 + 0x2b0u, 0u);
    wr32((u32)param_1 + 0x2b8u, 0u);
    wr32((u32)param_1 + 0x2c0u, 0u);
    wr32((u32)param_1 + 0x2c8u, 0u);
    wr32((u32)param_1 + 0x2d0u, 0u);
    a.r[0] = 0xffffffffu;
    a.r[1] = 0xffffffffu;
    r3 = tc_call(0x800a74e4u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r31 = r3;
    if ((s32)r3 >= 0) {
        a.r[0] = r3;
        a.r[1] = 4u;
        r3 = tc_call(0x8014db4cu, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 == 0u) {
            r31 = 0xffffffffu;
        }
    }
    if (r31 <= 0xdu) {
        r3 = rd32(((r31 << 2u) & 0xfffffffcu) - 0x7fc8c4d0u);
        sw_ = r3;
        switch (sw_) {
        case 0x801ca250u:
            wr32((u32)param_1 + 0x2c0u, 1u);
            break;
        case 0x801ca288u:
            break;
        case 0x801ca25cu:
            wr32((u32)param_1 + 0x2b8u, 1u);
            break;
        case 0x801ca268u:
            wr32((u32)param_1 + 0x2d0u, 1u);
            break;
        case 0x801ca274u:
            wr32((u32)param_1 + 0x2b0u, 1u);
            break;
        case 0x801ca280u:
            wr32((u32)param_1 + 0x2c8u, 1u);
            break;
        default:
            a.r[0] = r3;
            a.r[1] = r4;
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
            return;
        }
    }
    return;
}
