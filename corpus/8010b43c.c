#include "tc_rt.h"

s32 fn_8010b43c(u32 param_r4, u32 param_r3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    a.r[1] = param_r4;
    r3 = tc_call(0x8010b760u, &a);
    f1 = tc_lastf();
    if ((s32)r3 >= 0) {
        r0 = ppc_mulhw(274877907, (s32)r3);
        r4 = (u32)((s32)r0 >> 6);
        r0 = (u32)((s32)r0 >> 6);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        r5 = r3 - ((r4 + ((r4 >> 0x1fu) & 1u)) * 0x3e8u);
        if (r0 > 0xeu) {
            r5 = 0xffffffffu;
        } else {
            r0 = (r0 << 2u) & 0xfffffffcu;
            r4 = rd32(r0 - 0x7fc9e9d8u);
            sw_ = r4;
            switch (sw_) {
            case 0x8010b4b0u:
                r5 = r5 + 0xd33u;
                break;
            case 0x8010b4b8u:
                r5 = r5 + 0xd53u;
                break;
            case 0x8010b4c0u:
                r5 = r5 + 0xdb4u;
                break;
            case 0x8010b4c8u:
                r5 = (u32)((s32)ppc_mulhw(1717986919, (s32)r3) >> 3);
                r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)(r3 - 0xbb8u)) >> 3);
                r0 = r0 + ((r0 >> 0x1fu) & 1u);
                r0 = (r0 << 2u) & 0xfffffffcu;
                r0 = rd32(r0 - 0x7fcc6c18u);
                r5 = r3 - ((r5 + ((r5 >> 0x1fu) & 1u)) * 0x14u) + r0;
                break;
            case 0x8010b510u:
                if ((s32)r5 >= 500) {
                    r5 = r5 + 0xca9u;
                    break;
                }
                r5 = r5 + 0xe75u;
                break;
            case 0x8010b528u:
                r5 = (u32)((s32)ppc_mulhw(1374389535, (s32)r3) >> 5);
                r0 = (u32)((s32)ppc_mulhw(1374389535, (s32)(r3 - 0x1388u)) >> 5);
                r0 = r0 + ((r0 >> 0x1fu) & 1u);
                r0 = (r0 << 2u) & 0xfffffffcu;
                r0 = rd32(r0 - 0x7fcc6ce0u);
                r5 = r3 - ((r5 + ((r5 >> 0x1fu) & 1u)) * 0x64u) + r0;
                break;
            case 0x8010b570u:
                r5 = r5 + 0x101bu;
                break;
            case 0x8010b578u:
                r5 = r5 + 0x105du;
                break;
            case 0x8010b580u:
                r5 = r5 + 0x1099u;
                break;
            case 0x8010b588u:
                r5 = (u32)((s32)ppc_mulhw(1374389535, (s32)r3) >> 5);
                r0 = (u32)((s32)ppc_mulhw(1374389535, (s32)(r3 - 0x32c8u)) >> 5);
                r0 = r0 + ((r0 >> 0x1fu) & 1u);
                r0 = (r0 << 2u) & 0xfffffffcu;
                r0 = rd32(r0 - 0x7fcc6bb8u);
                r5 = r3 - ((r5 + ((r5 >> 0x1fu) & 1u)) * 0x64u) + r0;
                break;
            case 0x8010b5d0u:
                r5 = r5 + 0xdc8u;
                break;
            default:
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = 0u;
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
                return (s32)r3;
            }
        }
        r3 = r5;
    }
    return (s32)r3;
}
