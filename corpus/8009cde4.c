#include "tc_rt.h"

u32 fn_8009cde4(s32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    r7 = (u32)rd8(rd32(param_3));
    if (r7 <= 0x1au) {
        r6 = rd32(((r7 << 2u) & 0xfffffffcu) - 0x7fcae704u);
        sw_ = r6;
        switch (sw_) {
        case 0x8009ce30u:
            break;
        case 0x8009ce38u:
            wr8(param_2, 1u);
            r4 = rd32(param_3);
            a.r[0] = r4 + 1u;
            a.r[1] = r4;
            a.r[2] = param_3;
            a.r[3] = r6;
            a.r[4] = r7;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32((u32)param_1 + 0xcu) + 4u), &a);
            wr32(param_2 + 4u, r3);
            r3 = 1u;
            wr32(param_3, rd32(param_3) + 5u);
            return r3;
        case 0x8009ce70u:
            wr8(param_2, 2u);
            r4 = rd32(param_3);
            a.r[0] = r4 + 1u;
            a.r[1] = r4;
            a.r[2] = param_3;
            a.r[3] = r6;
            a.r[4] = r7;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32((u32)param_1 + 0xcu) + 4u), &a);
            wr32(param_2 + 4u, r3);
            r3 = 1u;
            wr32(param_3, rd32(param_3) + 5u);
            return r3;
        case 0x8009cea8u:
            wr8(param_2, 6u);
            r4 = rd32(param_3);
            a.r[0] = r4 + 1u;
            a.r[1] = r4;
            a.r[2] = param_3;
            a.r[3] = r6;
            a.r[4] = r7;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32((u32)param_1 + 0xcu)), &a);
            r0 = (r3 << 2u) & 0x3fffcu;
            r3 = 1u;
            r0 = rd32((u32)param_4 + r0);
            wr32(param_2 + 4u, r0);
            wr32(param_3, rd32(param_3) + 3u);
            return r3;
        case 0x8009cee8u:
            wr8(param_2, (u8)r7);
            r3 = 1u;
            wr32(param_3, rd32(param_3) + 1u);
            return r3;
        case 0x8009cf00u:
            wr8(param_2, 1u);
            r3 = 1u;
            wr32(param_2 + 4u, 0u);
            wr32(param_3, rd32(param_3) + 1u);
            return r3;
        case 0x8009cf44u:
            wr8(param_2, 1u);
            r3 = 1u;
            wr32(param_2 + 4u, 0xffffffffu);
            wr32(param_3, rd32(param_3) + 1u);
            return r3;
        case 0x8009cf24u:
            r3 = 1u;
            wr8(param_2, 1u);
            wr32(param_2 + 4u, 1u);
            wr32(param_3, rd32(param_3) + 1u);
            return r3;
        case 0x8009cf68u:
            r3 = 1u;
            wr8(param_2, 1u);
            wr32(param_2 + 4u, (u32)rd8(rd32(param_3) + 1u));
            wr32(param_3, rd32(param_3) + 2u);
            return r3;
        case 0x8009cf90u:
            r3 = 1u;
            wr8(param_2, 1u);
            wr32(param_2 + 4u, (u32)(s8)rd8(rd32(param_3) + 1u));
            wr32(param_3, rd32(param_3) + 2u);
            return r3;
        case 0x8009cfbcu:
            wr8(param_2, 1u);
            r4 = rd32(param_3);
            a.r[0] = r4 + 1u;
            a.r[1] = r4;
            a.r[2] = param_3;
            a.r[3] = r6;
            a.r[4] = r7;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32((u32)param_1 + 0xcu)), &a);
            r0 = r3 & 0xffffu;
            r3 = 1u;
            wr32(param_2 + 4u, r0);
            wr32(param_3, rd32(param_3) + 3u);
            return r3;
        case 0x8009cff8u:
            wr8(param_2, 1u);
            r4 = rd32(param_3);
            a.r[0] = r4 + 1u;
            a.r[1] = r4;
            a.r[2] = param_3;
            a.r[3] = r6;
            a.r[4] = r7;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32((u32)param_1 + 0xcu)), &a);
            r0 = (u32)(s16)r3;
            r3 = 1u;
            wr32(param_2 + 4u, r0);
            wr32(param_3, rd32(param_3) + 3u);
            return r3;
        default:
            a.r[0] = (u32)param_1;
            a.r[1] = param_2;
            a.r[2] = param_3;
            a.r[3] = r6;
            a.r[4] = r7;
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
    r3 = 0u;
    return r3;
}
