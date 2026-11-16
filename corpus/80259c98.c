#include "tc_rt.h"

u32 fn_80259c98(u32 param_1, s32 param_2, u32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r3 = param_1;
    r8 = 0u;
    wr8((u32)param_2 - 1u, 0u);
    r6 = (u32)param_2 - 1u;
    r7 = 0u;
    if (param_1 == 0u) {
        r0 = rd32(param_3 + 0xcu);
        if (r0 == 0u) {
            if ((u32)rd8(param_3 + 3u) == 0u) {
                return r6;
            }
            r0 = (u32)rd8(param_3 + 5u);
            if (r0 != 0x6fu) {
                return r6;
            }
        }
    }
    r10 = (u32)rd8(param_3 + 5u) - 0x58u;
    if (r10 <= 0x20u) {
        r10 = (r10 << 2u) & 0xfffffffcu;
        r9 = rd32(r10 - 0x7fc711ccu);
        sw_ = r9;
        switch (sw_) {
        case 0x80259d48u:
            r0 = 0x10u;
            wr8(param_3 + 1u, 0u);
            break;
        case 0x80259d54u:
            break;
        case 0x80259d04u:
            r0 = 0xau;
            if ((s32)param_1 >= 0) break;
            if ((param_1 - 0x80000000u) != 0u) {
                r3 = 0u - param_1;
            }
            r8 = 1u;
            break;
        case 0x80259d28u:
            r0 = 8u;
            wr8(param_3 + 1u, 0u);
            break;
        case 0x80259d38u:
            r0 = 0xau;
            wr8(param_3 + 1u, 0u);
            break;
        default:
            a.r[0] = param_1;
            a.r[1] = (u32)param_2;
            a.r[2] = param_3;
            a.r[3] = r6;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = r9;
            a.r[7] = r10;
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
    do {
        r11 = r3 - (ppc_divwu(r3, r0) * r0);
        r3 = ppc_divwu(r3, r0);
        if ((s32)r11 >= 10) {
            r10 = r11 + 0x37u;
            if ((u32)rd8(param_3 + 5u) == 0x78u) {
                r10 = r11 + 0x57u;
            }
            r11 = r10;
        } else {
            r11 = r11 + 0x30u;
        }
        wr8(r6 - 1u, (u8)r11);
        r6 = r6 - 1u;
        r7 = r7 + 1u;
    } while (r3 != 0u);
    if (r0 == 8u && (u32)rd8(param_3 + 3u) != 0u && (u32)rd8(r6) != 0x30u) {
        r7 = r7 + 1u;
        wr8(r6 - 1u, 0x30u);
        r6 = r6 - 1u;
    }
    if ((u32)rd8(param_3) == 2u) {
        wr32(param_3 + 0xcu, rd32(param_3 + 8u));
        if (r8 != 0u || (u32)rd8(param_3 + 1u) != 0u) {
            wr32(param_3 + 0xcu, rd32(param_3 + 0xcu) - 1u);
        }
        if (r0 == 0x10u && (u32)rd8(param_3 + 3u) != 0u) {
            wr32(param_3 + 0xcu, rd32(param_3 + 0xcu) - 2u);
        }
    }
    if ((s32)(rd32(param_3 + 0xcu) + ((u32)param_2 - r6)) <= 509) {
        while ((s32)r7 < (s32)rd32(param_3 + 0xcu)) {
            wr8(r6 - 1u, 0x30u);
            r6 = r6 - 1u;
            r7 = r7 + 1u;
        }
        if (r0 == 0x10u && (u32)rd8(param_3 + 3u) != 0u) {
            wr8(r6 - 1u, rd8(param_3 + 5u));
            wr8(r6 - 2u, 0x30u);
            r6 = r6 - 2u;
        }
        if (r8 == 0u) {
            r0 = (u32)rd8(param_3 + 1u);
            if (r0 != 1u) {
                if (r0 == 2u) {
                    wr8(r6 - 1u, 0x20u);
                    r6 = r6 - 1u;
                }
            } else {
                wr8(r6 - 1u, 0x2bu);
                r6 = r6 - 1u;
            }
        } else {
            wr8(r6 - 1u, 0x2du);
            r6 = r6 - 1u;
        }
        return r6;
    }
    return 0u;
}
