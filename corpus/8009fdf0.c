#include "tc_rt.h"

u32 fn_8009fdf0(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r3 = param_1;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r6 = rd32(param_3);
    wr32(0x817fdfe8u, r6);
    r7 = (u32)rd8(r6);
    r0 = r7 & 0xffffff7fu;
    if (r0 > 9u) {
        r0 = r7 & 0x70u;
        c0lt = (s32)r0 < 48;
        if (r0 == 0x30u) {
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = 0x817fdfe8u;
            r3 = tc_call(0x800a02d8u, &a);
        } else {
            if (!c0lt) {
                if (r0 == 0x40u) {
                    a.r[0] = param_1;
                    a.r[1] = param_2;
                    a.r[2] = 0x817fdfe8u;
                    r3 = tc_call(0x800a0350u, &a);
                    wr32(param_3, rd32(0x817fdfe8u));
                    return r3;
                }
            } else {
                c0lt = (s32)r0 < 32;
                if (r0 == 0x20u) {
                    a.r[0] = param_1;
                    a.r[1] = param_2;
                    a.r[2] = 0x817fdfe8u;
                    r3 = tc_call(0x800a0284u, &a);
                    if ((u32)(s8)r3 == 0u) {
                        r3 = 1u;
                        wr32(param_3, rd32(0x817fdfe8u));
                        return r3;
                    }
                    r3 = 0u;
                    wr32(param_3, rd32(0x817fdfe8u));
                    return r3;
                }
                if (c0lt && r0 == 0x10u) {
                    a.r[0] = param_1;
                    a.r[1] = param_2;
                    a.r[2] = 0x817fdfe8u;
                    r3 = tc_call(0x800a0284u, &a);
                    wr32(param_3, rd32(0x817fdfe8u));
                    return r3;
                }
            }
            r3 = 0u;
            wr32(0x817fdfe8u, r6 + 1u);
        }
    } else {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r5 = rd32(r0 - 0x7fcae590u);
        sw_ = r5;
        switch (sw_) {
        case 0x8009fe34u:
            r3 = 1u;
            wr32(0x817fdfe8u, r6 + 1u);
            break;
        case 0x8009fe44u:
            r3 = 0u;
            wr32(0x817fdfe8u, r6 + 1u);
            break;
        case 0x8009fe54u:
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = 0x817fdfe8u;
            r3 = tc_call(0x8009ffa4u, &a);
            break;
        case 0x8009fe60u:
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = 0x817fdfe8u;
            r3 = tc_call(0x800a0008u, &a);
            break;
        case 0x8009fe6cu:
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = 0x817fdfe8u;
            r3 = tc_call(0x8009ffa4u, &a);
            if ((u32)(s8)r3 == 0u) {
                r3 = 1u;
                break;
            }
            r3 = 0u;
            break;
        case 0x8009fe8cu:
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = 0x817fdfe8u;
            r3 = tc_call(0x800a0008u, &a);
            if ((u32)(s8)r3 == 0u) {
                r3 = 1u;
                break;
            }
            r3 = 0u;
            break;
        case 0x8009feacu:
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = 0x817fdfe8u;
            r3 = tc_call(0x800a0068u, &a);
            break;
        case 0x8009feb8u:
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = 0x817fdfe8u;
            r3 = tc_call(0x800a00ccu, &a);
            break;
        case 0x8009fec4u:
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = 0x817fdfe8u;
            r3 = tc_call(0x800a0068u, &a);
            if ((u32)(s8)r3 == 0u) {
                r3 = 1u;
                break;
            }
            r3 = 0u;
            break;
        case 0x8009fee4u:
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = 0x817fdfe8u;
            r3 = tc_call(0x800a00ccu, &a);
            if ((u32)(s8)r3 == 0u) {
                r3 = 1u;
                break;
            }
            r3 = 0u;
            break;
        default:
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = r5;
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
    wr32(param_3, rd32(0x817fdfe8u));
    return r3;
}
