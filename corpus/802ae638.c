#include "tc_rt.h"

void fn_802ae638(s32 param_1, u32 param_2, u32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    r6 = param_2;
    if ((u32)param_1 != 0u) {
        r0 = (u32)rd8((u32)param_1 + 0x68u);
        c0lt = (s32)r0 < 3;
        if (r0 == 3u) {
            if (param_2 <= 0xfu) {
                r6 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fc68a68u);
                sw_ = r6;
                switch (sw_) {
                case 0x802aead4u:
                    return;
                case 0x802aeb54u:
                    break;
                case 0x802aead8u:
                    a.r[0] = rd32((u32)param_1 + 0x6cu) + 0x62u;
                    (void)tc_call(0x8029b8e4u, &a);
                    r3 = rd32((u32)param_1 + 0x6cu);
                    wr8((u32)param_1 + 0x68u, 0u);
                    a.r[0] = r3;
                    a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                    (void)tc_call(0x802afdb4u, &a);
                    a.r[0] = rd32((u32)param_1 + 0x6cu);
                    a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                    (void)tc_call(0x802ac38cu, &a);
                    return;
                case 0x802aeb08u:
                    a.r[0] = param_3;
                    (void)tc_call(0x8028a35cu, &a);
                    return;
                case 0x802aea64u:
                    if ((u32)rd8(0x8054161cu) < 1u) {
                        return;
                    }
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = 0x90000u;
                    a.r[1] = 0x80397454u;
                    a.r[2] = (u32)rd8((u32)param_1 + 0x68u);
                    a.r[3] = param_2;
                    a.r[4] = 0x80397440u;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    (void)tc_call(0x8028cc84u, &a);
                    return;
                case 0x802aeb14u:
                    if ((u32)rd8(param_3) == 0u) {
                        a.r[0] = rd32((u32)param_1 + 0x6cu);
                        a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                        (void)tc_call(0x802afdb4u, &a);
                        wr8((u32)param_1 + 0x68u, 4u);
                        return;
                    }
                    r3 = rd32((u32)param_1 + 0x6cu);
                    if (r3 == 0u) {
                        return;
                    }
                    a.r[0] = r3;
                    a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                    a.r[2] = 1u;
                    (void)tc_call(0x802afe64u, &a);
                    return;
                case 0x802aea90u:
                    a.r[0] = rd32((u32)param_1 + 0x6cu) + 0x62u;
                    f1 = tc_callf(0x8029b8e4u, &a);
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = (u32)param_1;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802b18a8u, &a);
                    return;
                case 0x802aeaa8u:
                    if ((u32)rd8(0x8054161cu) >= 1u) {
                        a.f[0] = param_f1;
                        a.f[1] = param_f2;
                        a.f[2] = param_f3;
                        a.f[3] = param_f4;
                        a.f[4] = param_f5;
                        a.f[5] = param_f6;
                        a.f[6] = param_f7;
                        a.f[7] = param_f8;
                        a.r[0] = 0x90000u;
                        a.r[1] = 0x8039753cu;
                        a.r[2] = param_3;
                        a.r[3] = r6;
                        a.r[4] = 0x80397440u;
                        a.r[5] = param_r8;
                        a.r[6] = param_r9;
                        a.r[7] = param_r10;
                        (void)tc_call(0x8028cc54u, &a);
                    }
                    a.r[0] = param_3;
                    (void)tc_call(0x8028a35cu, &a);
                    return;
                case 0x802aea1cu:
                    if ((u32)rd8(param_3) == 0u) {
                        r3 = rd32((u32)param_1 + 0x6cu);
                        a.r[0] = r3;
                        a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                        a.r[2] = (u32)rd16(r3 + 0x6au);
                        (void)tc_call(0x802abb9cu, &a);
                        return;
                    }
                    r3 = rd32((u32)param_1 + 0x6cu);
                    if (r3 == 0u) {
                        return;
                    }
                    a.r[0] = r3;
                    a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                    a.r[2] = 1u;
                    f1 = tc_callf(0x802afe64u, &a);
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0xfu;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802ac954u, &a);
                    return;
                default:
                    a.r[0] = (u32)param_1;
                    a.r[1] = param_2;
                    a.r[2] = param_3;
                    a.r[3] = r6;
                    a.r[4] = 0x80397440u;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
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
            if ((u32)rd8(0x8054161cu) >= 2u) {
                a.f[0] = param_f1;
                a.f[1] = param_f2;
                a.f[2] = param_f3;
                a.f[3] = param_f4;
                a.f[4] = param_f5;
                a.f[5] = param_f6;
                a.f[6] = param_f7;
                a.f[7] = param_f8;
                a.r[0] = 0x90001u;
                a.r[1] = 0x80397568u;
                a.r[2] = param_2;
                a.r[3] = r6;
                a.r[4] = 0x80397440u;
                a.r[5] = param_r8;
                a.r[6] = param_r9;
                a.r[7] = param_r10;
                (void)tc_call(0x8028cc6cu, &a);
            }
            return;
        }
        if (!c0lt) {
            c0lt = (s32)r0 < 5;
            if (r0 == 5u) {
                if (param_2 <= 0xeu) {
                    r7 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fc688fcu);
                    sw_ = r7;
                    switch (sw_) {
                    case 0x802aef60u:
                        a.r[0] = rd32((u32)param_1 + 0x6cu);
                        a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                        a.r[2] = 1u;
                        (void)tc_call(0x802afe64u, &a);
                        return;
                    case 0x802aef48u:
                        wr8(rd32((u32)param_1 + 0x6cu) + 0x74u, 1u);
                    case 0x802aef54u:
                        a.f[0] = param_f1;
                        a.f[1] = param_f2;
                        a.f[2] = param_f3;
                        a.f[3] = param_f4;
                        a.f[4] = param_f5;
                        a.f[5] = param_f6;
                        a.f[6] = param_f7;
                        a.f[7] = param_f8;
                        a.r[0] = (u32)param_1;
                        a.r[2] = param_3;
                        a.r[3] = param_2;
                        a.r[4] = r7;
                        a.r[5] = param_r8;
                        a.r[6] = param_r9;
                        a.r[7] = param_r10;
                        (void)tc_call(0x802b18a8u, &a);
                        return;
                    case 0x802aef74u:
                        a.r[0] = rd32((u32)param_1 + 0x6cu);
                        a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                        a.r[2] = 1u;
                        (void)tc_call(0x802afe64u, &a);
                        return;
                    case 0x802aef88u:
                        a.r[0] = param_3;
                        (void)tc_call(0x8028a35cu, &a);
                        a.r[0] = rd32((u32)param_1 + 0x6cu);
                        a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                        a.r[2] = 0u;
                        (void)tc_call(0x802afe64u, &a);
                        return;
                    case 0x802aefa4u:
                        a.f[0] = param_f1;
                        a.f[1] = param_f2;
                        a.f[2] = param_f3;
                        a.f[3] = param_f4;
                        a.f[4] = param_f5;
                        a.f[5] = param_f6;
                        a.f[6] = param_f7;
                        a.f[7] = param_f8;
                        a.r[0] = (u32)param_1;
                        a.r[2] = param_3;
                        a.r[3] = param_2;
                        a.r[4] = r7;
                        a.r[5] = param_r8;
                        a.r[6] = param_r9;
                        a.r[7] = param_r10;
                        (void)tc_call(0x802b18a8u, &a);
                        return;
                    case 0x802aefacu:
                        break;
                    case 0x802aef08u:
                        if ((u32)rd8(0x8054161cu) < 1u) {
                            return;
                        }
                        a.f[0] = param_f1;
                        a.f[1] = param_f2;
                        a.f[2] = param_f3;
                        a.f[3] = param_f4;
                        a.f[4] = param_f5;
                        a.f[5] = param_f6;
                        a.f[6] = param_f7;
                        a.f[7] = param_f8;
                        a.r[0] = 0x90000u;
                        a.r[1] = 0x80397454u;
                        a.r[2] = (u32)rd8((u32)param_1 + 0x68u);
                        a.r[3] = param_2;
                        a.r[4] = r7;
                        a.r[5] = param_r8;
                        a.r[6] = param_r9;
                        a.r[7] = param_r10;
                        (void)tc_call(0x8028cc84u, &a);
                        return;
                    case 0x802aef34u:
                        a.f[0] = param_f1;
                        a.f[1] = param_f2;
                        a.f[2] = param_f3;
                        a.f[3] = param_f4;
                        a.f[4] = param_f5;
                        a.f[5] = param_f6;
                        a.f[6] = param_f7;
                        a.f[7] = param_f8;
                        a.r[0] = (u32)param_1;
                        a.r[2] = param_3;
                        a.r[3] = param_2;
                        a.r[4] = r7;
                        a.r[5] = param_r8;
                        a.r[6] = param_r9;
                        a.r[7] = param_r10;
                        (void)tc_call(0x802b18a8u, &a);
                        return;
                    case 0x802aef3cu:
                        a.r[0] = param_3;
                        (void)tc_call(0x8028a35cu, &a);
                        return;
                    default:
                        a.r[0] = (u32)param_1;
                        a.r[1] = param_2;
                        a.r[2] = param_3;
                        a.r[3] = param_2;
                        a.r[4] = r7;
                        a.r[5] = param_r8;
                        a.r[6] = param_r9;
                        a.r[7] = param_r10;
                        a.f[0] = param_f1;
                        a.f[1] = param_f2;
                        a.f[2] = param_f3;
                        a.f[3] = param_f4;
                        a.f[4] = param_f5;
                        a.f[5] = param_f6;
                        a.f[6] = param_f7;
                        a.f[7] = param_f8;
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
                if ((u32)rd8(0x8054161cu) >= 2u) {
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = 0x90001u;
                    a.r[1] = 0x803976d8u;
                    a.r[2] = param_2;
                    a.r[3] = param_2;
                    a.r[4] = r7;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    (void)tc_call(0x8028cc6cu, &a);
                }
                return;
            }
            if (!c0lt) {
                return;
            }
            if (param_2 <= 0xeu) {
                r6 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fc68964u);
                sw_ = r6;
                switch (sw_) {
                case 0x802aedf8u:
                    a.r[0] = rd32((u32)param_1 + 0x6cu);
                    a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                    (void)tc_call(0x802afdb4u, &a);
                    return;
                case 0x802aedf4u:
                    return;
                case 0x802aee08u:
                    a.r[0] = rd32((u32)param_1 + 0x6cu);
                    a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                    f1 = tc_callf(0x802ac38cu, &a);
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = (u32)param_1;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802b18a8u, &a);
                    return;
                case 0x802aee20u:
                    r4 = (u32)rd8((u32)param_1 + 0xdu);
                    wr8((u32)param_1 + 0x68u, 0u);
                    a.r[0] = rd32((u32)param_1 + 0x6cu);
                    a.r[1] = r4;
                    (void)tc_call(0x802afdb4u, &a);
                    a.r[0] = rd32((u32)param_1 + 0x6cu);
                    a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                    (void)tc_call(0x802ac38cu, &a);
                    return;
                case 0x802aee44u:
                    a.r[0] = rd32((u32)param_1 + 0x6cu);
                    a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                    a.r[2] = param_3;
                    (void)tc_call(0x802ac52cu, &a);
                    return;
                case 0x802aee54u:
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = rd32((u32)param_1 + 0x6cu);
                    a.r[2] = param_3;
                    a.r[3] = r6;
                    a.r[4] = param_r7;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    f1 = tc_callf(0x802ac494u, &a);
                    if ((u32)rd8(0x8054161cu) < 1u) {
                        return;
                    }
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x90000u;
                    a.r[1] = 0x80397454u;
                    a.r[2] = (u32)rd8((u32)param_1 + 0x68u);
                    a.r[3] = param_2;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8028cc84u, &a);
                    return;
                case 0x802aee8cu:
                    break;
                case 0x802aed20u:
                    if ((u32)rd8(0x8054161cu) < 1u) {
                        return;
                    }
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = 0x90000u;
                    a.r[1] = 0x80397454u;
                    a.r[2] = (u32)rd8((u32)param_1 + 0x68u);
                    a.r[3] = param_2;
                    a.r[4] = param_r7;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    (void)tc_call(0x8028cc84u, &a);
                    return;
                case 0x802aed50u:
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = (u32)param_1;
                    a.r[1] = 3u;
                    a.r[3] = r6;
                    a.r[4] = param_r7;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    (void)tc_call(0x802b167cu, &a);
                    a.r[0] = rd32((u32)param_1 + 0x6cu);
                    a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                    (void)tc_call(0x802aff28u, &a);
                    wr8((u32)param_1 + 0x69u, 0u);
                    wr8((u32)param_1 + 0x68u, 5u);
                    return;
                case 0x802aed78u:
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = (u32)param_1;
                    a.r[2] = param_3;
                    a.r[3] = r6;
                    a.r[4] = param_r7;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    (void)tc_call(0x802b18a8u, &a);
                    return;
                case 0x802aed80u:
                    if ((u32)rd8(rd32((u32)param_1 + 0x6cu) + 0x72u) != 2u || (u32)rd16(param_3 + 2u) >= (u32)rd16((u32)param_1 + 0x14u) || (u32)rd8((u32)param_1 + 0x3du) != 0u) {
                        wr16(param_3 + 6u, 0u);
                    } else {
                        r0 = (u32)rd16((u32)param_1 + 0x9au);
                        r4 = (u32)rd16((u32)param_1 + 0x9cu);
                        if (r4 <= r0) {
                            wr16(param_3 + 6u, 0u);
                        } else {
                            r0 = r4 - r0;
                            r0 = r0 & 0xffu;
                            wr16(param_3 + 6u, (u16)r0);
                            wr16((u32)param_1 + 0x9au, rd16((u32)param_1 + 0x9cu));
                        }
                    }
                    a.r[0] = rd32((u32)param_1 + 0x6cu);
                    a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                    a.r[2] = param_3;
                    (void)tc_call(0x802affd8u, &a);
                    a.r[0] = (u32)param_1;
                    (void)tc_call(0x802b1a8cu, &a);
                    return;
                default:
                    a.r[0] = (u32)param_1;
                    a.r[1] = param_2;
                    a.r[2] = param_3;
                    a.r[3] = r6;
                    a.r[4] = param_r7;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
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
            if ((u32)rd8(0x8054161cu) >= 2u) {
                a.f[0] = param_f1;
                a.f[1] = param_f2;
                a.f[2] = param_f3;
                a.f[3] = param_f4;
                a.f[4] = param_f5;
                a.f[5] = param_f6;
                a.f[6] = param_f7;
                a.f[7] = param_f8;
                a.r[0] = 0x90001u;
                a.r[1] = 0x80397678u;
                a.r[2] = param_2;
                a.r[3] = r6;
                a.r[4] = param_r7;
                a.r[5] = param_r8;
                a.r[6] = param_r9;
                a.r[7] = param_r10;
                (void)tc_call(0x8028cc6cu, &a);
            }
            return;
        }
        c0lt = (s32)r0 < 1;
        if (r0 == 1u) {
            if (param_2 <= 0xeu) {
                r6 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fc68b00u);
                sw_ = r6;
                switch (sw_) {
                case 0x802ae954u:
                    a.r[0] = rd32((u32)param_1 + 0x6cu);
                    a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                    (void)tc_call(0x802afdb4u, &a);
                    return;
                case 0x802ae8e4u:
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = (u32)param_1;
                    a.r[2] = param_3;
                    a.r[3] = r6;
                    a.r[4] = param_r7;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    (void)tc_call(0x802b16fcu, &a);
                    r3 = rd32((u32)param_1 + 0x6cu);
                    wr8((u32)param_1 + 0x68u, 4u);
                    a.r[0] = r3;
                    a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                    a.r[2] = (u32)rd16(r3 + 0x6au);
                    a.r[3] = 0u;
                    (void)tc_call(0x802abcdcu, &a);
                    return;
                case 0x802ae908u:
                    r3 = rd32((u32)param_1 + 0x6cu);
                    a.r[0] = r3;
                    a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                    a.r[2] = (u32)rd16(r3 + 0x6au);
                    a.r[3] = 1u;
                    f1 = tc_callf(0x802abcdcu, &a);
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = (u32)param_1;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802b18a8u, &a);
                    return;
                case 0x802ae928u:
                    a.r[0] = rd32((u32)param_1 + 0x6cu);
                    a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                    (void)tc_call(0x802afdb4u, &a);
                    r3 = rd32((u32)param_1 + 0x6cu);
                    a.r[0] = r3;
                    a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                    a.r[2] = (u32)rd16(r3 + 0x6au);
                    a.r[3] = 1u;
                    f1 = tc_callf(0x802abcdcu, &a);
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = (u32)param_1;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802b18a8u, &a);
                    return;
                case 0x802ae964u:
                    a.r[0] = param_3;
                    (void)tc_call(0x8028a35cu, &a);
                    return;
                case 0x802ae970u:
                    r5 = rd32((u32)param_1 + 0x6cu);
                    wr8((u32)param_1 + 0x68u, 0u);
                    r3 = r5;
                    r5 = (u32)rd16(r5 + 0x6au);
                    a.r[0] = r3;
                    a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                    a.r[2] = r5;
                    a.r[3] = 1u;
                    (void)tc_call(0x802abcdcu, &a);
                    return;
                case 0x802ae994u:
                    break;
                case 0x802ae878u:
                    if ((u32)rd8(0x8054161cu) < 1u) {
                        return;
                    }
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = 0x90000u;
                    a.r[1] = 0x80397454u;
                    a.r[2] = (u32)rd8((u32)param_1 + 0x68u);
                    a.r[3] = param_2;
                    a.r[4] = param_r7;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    (void)tc_call(0x8028cc84u, &a);
                    return;
                case 0x802ae8a8u:
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = (u32)param_1;
                    a.r[1] = 3u;
                    a.r[3] = r6;
                    a.r[4] = param_r7;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    (void)tc_call(0x802b167cu, &a);
                    a.r[0] = rd32((u32)param_1 + 0x6cu);
                    a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                    (void)tc_call(0x802aff28u, &a);
                    wr8((u32)param_1 + 0x69u, 0u);
                    wr8((u32)param_1 + 0x68u, 5u);
                    return;
                case 0x802ae8d0u:
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = (u32)param_1;
                    a.r[2] = param_3;
                    a.r[3] = r6;
                    a.r[4] = param_r7;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    (void)tc_call(0x802b18a8u, &a);
                    return;
                case 0x802ae8d8u:
                    a.r[0] = param_3;
                    f1 = tc_callf(0x8028a35cu, &a);
                    r6 = 0u;
                    r7 = 0u;
                    r8 = 0u;
                    r9 = 0u;
                    r10 = 0u;
                    f2 = 0.0;
                    f3 = 0.0;
                    f4 = 0.0;
                    f5 = 0.0;
                    f6 = 0.0;
                    f7 = 0.0;
                    f8 = 0.0;
                    break;
                default:
                    a.r[0] = (u32)param_1;
                    a.r[1] = param_2;
                    a.r[2] = param_3;
                    a.r[3] = r6;
                    a.r[4] = param_r7;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
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
            if ((u32)rd8(0x8054161cu) >= 2u) {
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                a.r[0] = 0x90001u;
                a.r[1] = 0x803974d4u;
                a.r[2] = param_2;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                (void)tc_call(0x8028cc6cu, &a);
            }
            return;
        }
        if (!c0lt) {
            if (param_2 <= 0xfu) {
                r6 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fc689c8u);
                sw_ = r6;
                switch (sw_) {
                case 0x802aec28u:
                    if ((u32)rd8(0x8054161cu) < 1u) {
                        return;
                    }
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = 0x90000u;
                    a.r[1] = 0x80397454u;
                    a.r[2] = (u32)rd8((u32)param_1 + 0x68u);
                    a.r[3] = param_2;
                    a.r[4] = 0x80397440u;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    (void)tc_call(0x8028cc84u, &a);
                    return;
                case 0x802aeca4u:
                    break;
                case 0x802aec98u:
                    a.r[0] = param_3;
                    (void)tc_call(0x8028a35cu, &a);
                    return;
                case 0x802aec54u:
                    a.r[0] = rd32((u32)param_1 + 0x6cu) + 0x62u;
                    f1 = tc_callf(0x8029b8e4u, &a);
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = (u32)param_1;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802b18a8u, &a);
                    return;
                case 0x802aec6cu:
                    if ((u32)rd8(0x8054161cu) >= 1u) {
                        a.f[0] = param_f1;
                        a.f[1] = param_f2;
                        a.f[2] = param_f3;
                        a.f[3] = param_f4;
                        a.f[4] = param_f5;
                        a.f[5] = param_f6;
                        a.f[6] = param_f7;
                        a.f[7] = param_f8;
                        a.r[0] = 0x90000u;
                        a.r[1] = 0x803975d8u;
                        a.r[2] = param_3;
                        a.r[3] = r6;
                        a.r[4] = 0x80397440u;
                        a.r[5] = param_r8;
                        a.r[6] = param_r9;
                        a.r[7] = param_r10;
                        (void)tc_call(0x8028cc54u, &a);
                    }
                    a.r[0] = param_3;
                    (void)tc_call(0x8028a35cu, &a);
                    return;
                case 0x802aebd8u:
                    if ((u32)rd8(param_3) == 0u) {
                        a.r[0] = rd32((u32)param_1 + 0x6cu);
                        a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                        f1 = tc_callf(0x802afd04u, &a);
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = (u32)param_1;
                        a.r[1] = 0x3cu;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x802b167cu, &a);
                        wr8((u32)param_1 + 0x68u, 1u);
                        return;
                    }
                    a.r[0] = rd32((u32)param_1 + 0x6cu);
                    a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                    a.r[2] = 0u;
                    a.r[3] = 0x70u;
                    f1 = tc_callf(0x802abcdcu, &a);
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = (u32)param_1;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802b18a8u, &a);
                    return;
                default:
                    a.r[0] = (u32)param_1;
                    a.r[1] = param_2;
                    a.r[2] = param_3;
                    a.r[3] = r6;
                    a.r[4] = 0x80397440u;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
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
            if ((u32)rd8(0x8054161cu) >= 2u) {
                a.f[0] = param_f1;
                a.f[1] = param_f2;
                a.f[2] = param_f3;
                a.f[3] = param_f4;
                a.f[4] = param_f5;
                a.f[5] = param_f6;
                a.f[6] = param_f7;
                a.f[7] = param_f8;
                a.r[0] = 0x90001u;
                a.r[1] = 0x80397608u;
                a.r[2] = param_2;
                a.r[3] = r6;
                a.r[4] = 0x80397440u;
                a.r[5] = param_r8;
                a.r[6] = param_r9;
                a.r[7] = param_r10;
                (void)tc_call(0x8028cc6cu, &a);
            }
            return;
        }
        if ((s32)r0 >= 0) {
            if (param_2 <= 0xeu) {
                r6 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fc68b68u);
                sw_ = r6;
                switch (sw_) {
                case 0x802ae74cu:
                    r0 = (u32)rd8((u32)param_1 + 0xdu);
                    wr8((u32)param_1 + 0x68u, 3u);
                    a.r[0] = rd32((u32)param_1 + 0x6cu) + 0x62u;
                    a.r[1] = 3u;
                    a.r[2] = 0u;
                    a.r[3] = 3u;
                    a.r[4] = (r0 >> 1u) & 0x7fffffffu;
                    a.r[5] = 0x802b1854u;
                    a.r[6] = (u32)param_1;
                    (void)tc_call(0x8029b4c0u, &a);
                    return;
                case 0x802ae784u:
                    return;
                case 0x802ae788u:
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = (u32)param_1;
                    a.r[2] = param_3;
                    a.r[3] = r6;
                    a.r[4] = param_r7;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    (void)tc_call(0x802b18a8u, &a);
                    return;
                case 0x802ae7acu:
                    a.r[0] = rd32((u32)param_1 + 0x6cu);
                    a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                    a.r[2] = 0u;
                    (void)tc_call(0x802afe64u, &a);
                    return;
                case 0x802ae790u:
                    a.r[0] = param_3;
                    (void)tc_call(0x8028a35cu, &a);
                    a.r[0] = rd32((u32)param_1 + 0x6cu);
                    a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                    a.r[2] = 0u;
                    (void)tc_call(0x802afe64u, &a);
                    return;
                case 0x802ae7c0u:
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = rd32((u32)param_1 + 0x6cu);
                    a.r[2] = param_3;
                    a.r[3] = r6;
                    a.r[4] = param_r7;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    f1 = tc_callf(0x802ac494u, &a);
                    if ((u32)rd8(0x8054161cu) < 1u) {
                        return;
                    }
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x90000u;
                    a.r[1] = 0x80397454u;
                    a.r[2] = (u32)rd8((u32)param_1 + 0x68u);
                    a.r[3] = param_2;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8028cc84u, &a);
                    return;
                case 0x802ae7f8u:
                    break;
                case 0x802ae704u:
                    r0 = (u32)rd8((u32)param_1 + 0xdu);
                    wr8((u32)param_1 + 0x68u, 2u);
                    a.r[0] = rd32((u32)param_1 + 0x6cu) + 0x62u;
                    a.r[1] = 3u;
                    a.r[2] = 1u;
                    a.r[3] = 3u;
                    a.r[4] = (r0 >> 1u) & 0x7fffffffu;
                    a.r[5] = 0x802b1854u;
                    a.r[6] = (u32)param_1;
                    (void)tc_call(0x8029b4c0u, &a);
                    return;
                case 0x802ae73cu:
                    return;
                case 0x802ae740u:
                    a.r[0] = param_3;
                    f1 = tc_callf(0x8028a35cu, &a);
                    r6 = 0u;
                    r7 = 0u;
                    r8 = 0u;
                    r9 = 0u;
                    r10 = 0u;
                    f2 = 0.0;
                    f3 = 0.0;
                    f4 = 0.0;
                    f5 = 0.0;
                    f6 = 0.0;
                    f7 = 0.0;
                    f8 = 0.0;
                    break;
                default:
                    a.r[0] = (u32)param_1;
                    a.r[1] = param_2;
                    a.r[2] = param_3;
                    a.r[3] = r6;
                    a.r[4] = param_r7;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
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
            if ((u32)rd8(0x8054161cu) >= 2u) {
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                a.r[0] = 0x90001u;
                a.r[1] = 0x80397474u;
                a.r[2] = param_2;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                (void)tc_call(0x8028cc6cu, &a);
            }
            return;
        }
        return;
    }
    if ((u32)rd8(0x8054161cu) < 2u) {
        return;
    }
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = 0x90001u;
    a.r[1] = 0x80397440u;
    a.r[2] = param_2;
    a.r[3] = param_2;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    (void)tc_call(0x8028cc6cu, &a);
    return;
}
