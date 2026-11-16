#include "tc_rt.h"

u32 fn_802b6c90(u32 param_1, u32 param_2, u32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r3 = param_1;
    r0 = param_2 & 7u;
    r8 = param_1;
    if (r0 <= 7u) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r4 = rd32(r0 - 0x7fc68070u);
        sw_ = r4;
        switch (sw_) {
        case 0x802b6cb8u:
            wr32(param_3, 1u);
            break;
        case 0x802b6cc4u:
            wr32(param_3, 2u);
            break;
        case 0x802b6cd0u:
            wr32(param_3, 4u);
            break;
        case 0x802b6cdcu:
            wr32(param_3, 8u);
            break;
        case 0x802b6ce8u:
            wr32(param_3, 0x10u);
            break;
        case 0x802b6cf4u:
            r8 = param_1 + 1u;
            wr32(param_3, (u32)rd8(param_1));
            break;
        case 0x802b6d04u:
            r8 = param_1 + 2u;
            wr32(param_3, ((((u32)rd8(param_1) << 8u) & 0xffffff00u) + (u32)rd8(param_1 + 1u)) & 0xffffu);
            break;
        case 0x802b6d24u:
            r8 = param_1 + 4u;
            wr32(param_3, ((((u32)rd8(param_1) << 0x18u) & 0xff000000u) + (((u32)rd8(param_1 + 1u) << 0x10u) & 0xffff0000u) + ((u32)rd8(param_1 + 3u) + (((u32)rd8(param_1 + 2u) << 8u) & 0xffffff00u))) & 0xffffu);
            break;
        default:
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = param_3;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = param_1;
            a.f[0] = 0.0;
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
    return r8;
}
