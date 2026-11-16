#include "tc_rt.h"

u32 fn_8009c8f4(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    if ((rd32(param_1 + 0x1cu) & 1u) == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = param_1;
        a.r[1] = param_4;
        a.r[2] = param_5;
        r3 = tc_call(0x8009c758u, &a);
        f1 = tc_lastf();
        r5 = r3 & 0xffffu;
        r4 = r5 + ((((((param_6 << 2u) & 0x3fffcu) + (param_6 & 0xffffu) + 2u) & 0xffffu) + 2u) & 0xffffu);
        r0 = (u32)rd8(rd32(param_1 + 0x10u) + (r4 & 0xffffu));
        if (r0 > 0x1au) {
            wr32(param_2, 0u);
        } else {
            r0 = (r0 << 2u) & 0xfffffffcu;
            r3 = rd32(r0 - 0x7fcae7f8u);
            sw_ = r3;
            switch (sw_) {
            case 0x8009c988u:
                wr32(param_2, 0u);
                break;
            case 0x8009c994u:
                wr32(param_2, 1u);
                break;
            case 0x8009c9a0u:
                wr32(param_2, 2u);
                break;
            case 0x8009c9acu:
                wr32(param_2, 3u);
                break;
            case 0x8009c9b8u:
                wr32(param_2, 4u);
                break;
            case 0x8009c9c4u:
                wr32(param_2, 5u);
                break;
            case 0x8009c9d0u:
                wr32(param_2, 6u);
                break;
            default:
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
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
        r4 = r4 & 0xffffu;
        r0 = r4 + 1u;
        r4 = rd32(param_1 + 0x10u);
        r0 = r0 & 0xffffu;
        a.r[0] = r4 + r0;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_1) + 4u), &a);
        wr32(param_3, r3);
        r3 = 1u;
    }
    return r3;
}
