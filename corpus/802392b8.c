#include "tc_rt.h"

u32 fn_802392b8(s32 param_1, u32 param_2)
{
    u32 ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = tc_lastf();
    r31 = r3;
    r0 = rd32((u32)param_1 + 0xcu) + 1u;
    if (r0 <= 0xdu) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r4 = rd32(r0 - 0x7fc78cf0u);
        sw_ = r4;
        switch (sw_) {
        case 0x80239308u:
            if (param_2 == 0u) break;
            a.r[0] = 0u;
            a.r[1] = (u32)param_1;
            a.f[0] = f1;
            (void)tc_call(param_2, &a);
            break;
        case 0x80239328u:
            if (rd32(0x805715d0u) == 0u) {
                wr32(0x80571640u, param_2);
                wr32(0x805715d0u, 1u);
                r0 = rd32((u32)param_1 + 8u);
                if (r0 == 4u || r0 == 0x21u || r0 == 0x22u || r0 == 0x29u || r0 == 0x2au || r0 == 1u) {
                    wr32(0x805715e0u, 1u);
                    break;
                }
                break;
            }
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
            r3 = 0u;
            return r3;
        case 0x8023938cu:
            a.r[0] = (u32)param_1;
            f1 = tc_callf(0x80239c9cu, &a);
            r12 = rd32((u32)param_1 + 0x28u);
            wr32((u32)param_1 + 0xcu, 0xau);
            if (r12 != 0u) {
                a.r[0] = 0xfffffffdu;
                a.r[1] = (u32)param_1;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
            }
            if (param_2 == 0u) break;
            a.r[0] = 0u;
            a.r[1] = (u32)param_1;
            a.f[0] = f1;
            (void)tc_call(param_2, &a);
            break;
        case 0x802393d8u:
            r0 = rd32((u32)param_1 + 8u);
            if (r0 <= 0x2au) {
                r0 = (r0 << 2u) & 0xfffffffcu;
                r3 = rd32(r0 - 0x7fc78d9cu);
                sw_ = r3;
                switch (sw_) {
                case 0x8023947cu:
                    fl_ = 2u;
                    break;
                case 0x8023941cu:
                    if (rd32(0x80571448u) == 0u) {
                        fl_ = 2u;
                        break;
                    }
                    wr32(0x80571650u, 0x804e5b60u);
                    r12 = rd32((u32)param_1 + 0x28u);
                    wr32((u32)param_1 + 0xcu, 0xau);
                    if (r12 != 0u) {
                        a.r[0] = 0xfffffffdu;
                        a.r[1] = (u32)param_1;
                        a.f[0] = f1;
                        f1 = tc_callf(r12, &a);
                    }
                    if (param_2 != 0u) {
                        a.r[0] = 0u;
                        a.r[1] = (u32)param_1;
                        a.f[0] = f1;
                        (void)tc_call(param_2, &a);
                    }
                    (void)tc_call(0x80237c80u, &a);
                    fl_ = 1u;
                    break;
                case 0x802393fcu:
                    if (param_2 == 0u) {
                        fl_ = 1u;
                        break;
                    }
                    a.r[0] = 0u;
                    a.r[1] = (u32)param_1;
                    a.f[0] = f1;
                    (void)tc_call(param_2, &a);
                    fl_ = 1u;
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
                    return r3;
                }
                if (fl_ == 2u) {
                    fl_ = 0u;
                } else if (fl_ == 1u) {
                    fl_ = 0u;
                    break;
                }
            }
            if (rd32(0x805715d0u) == 0u) {
                wr32(0x80571640u, param_2);
                wr32(0x805715d0u, 1u);
                break;
            }
            a.r[0] = r31;
            (void)tc_call(0x8022c2d8u, &a);
            r3 = 0u;
            return r3;
        case 0x802394a8u:
            if (rd32(0x805715e8u) != 0u || rd32(0x805715e4u) != 0u) {
                if (rd32(0x805715e4u) != 0u) {
                    a.r[0] = 0x804e5bc0u;
                    f1 = tc_callf(0x80226a70u, &a);
                    wr32(0x805715e4u, 0u);
                }
                if (rd32((u32)param_1 + 0xcu) == 4u) {
                    wr32(0x805715d4u, 3u);
                }
                if (rd32((u32)param_1 + 0xcu) == 5u) {
                    wr32(0x805715d4u, 4u);
                }
                if (rd32((u32)param_1 + 0xcu) == 6u) {
                    wr32(0x805715d4u, 1u);
                }
                if (rd32((u32)param_1 + 0xcu) == 0xbu) {
                    wr32(0x805715d4u, 2u);
                }
                if (rd32((u32)param_1 + 0xcu) == 7u) {
                    wr32(0x805715d4u, 7u);
                }
                wr32(0x80571650u, 0x804e5b60u);
                r12 = rd32((u32)param_1 + 0x28u);
                wr32((u32)param_1 + 0xcu, 0xau);
                if (r12 != 0u) {
                    a.r[0] = 0xfffffffdu;
                    a.r[1] = (u32)param_1;
                    a.f[0] = f1;
                    f1 = tc_callf(r12, &a);
                }
                if (param_2 != 0u) {
                    a.r[0] = 0u;
                    a.r[1] = (u32)param_1;
                    a.f[0] = f1;
                    (void)tc_call(param_2, &a);
                }
                (void)tc_call(0x80237c80u, &a);
                break;
            }
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
            r3 = 0u;
            return r3;
        case 0x802395f4u:
            break;
        case 0x802395a4u:
            wr32(0x80571650u, 0x804e5b60u);
            r12 = rd32((u32)param_1 + 0x28u);
            wr32((u32)param_1 + 0xcu, 0xau);
            if (r12 != 0u) {
                a.r[0] = 0xfffffffdu;
                a.r[1] = (u32)param_1;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
            }
            if (param_2 != 0u) {
                a.r[0] = 0u;
                a.r[1] = (u32)param_1;
                a.f[0] = f1;
                (void)tc_call(param_2, &a);
            }
            (void)tc_call(0x80237c80u, &a);
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
            return r3;
        }
    }
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    r3 = 1u;
    return r3;
}
