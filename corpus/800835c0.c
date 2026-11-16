#include "tc_rt.h"

void fn_800835c0(s32 param_1, s32 param_2, s32 param_3, u32 param_4)
{
    u32 c0lt = 0, ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    u32 r11 = 0, r12 = 0, sw_ = 0;
    u64 t0 = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r7 = (param_4 >> 0x1fu) & 1u;
    r0 = ((param_4 << 0x1du) & 0xe0000000u) - r7;
    r0 = (r0 << 3u) | (r0 >> 0x1du);
    t0 = (u64)(u32)((s32)param_4 >> 3) + (u64)(((s32)param_4 < 0) && ((param_4 & 7u) != 0u));
    r0 = r0 + r7;
    do {
        if ((u32)param_2 != 0u) {
            if ((u32)param_2 != 1u) {
                if ((u32)param_2 != 2u) {
                    if ((u32)param_2 != 3u) {
                        return;
                    }
                    c0lt = param_3 < 1;
                    if ((u32)param_3 == 1u) {
                        r4 = (u32)param_1 + (u32)t0;
                        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                        r0 = r0 & 0xffu;
                        r0 = (u32)rd8(r4 + 0x6e4u) | r0;
                        wr8(r4 + 0x6e4u, (u8)r0);
                        return;
                    }
                    if (!c0lt) {
                        return;
                    }
                    if (param_3 < 0) {
                        return;
                    }
                    r4 = (u32)param_1 + (u32)t0;
                    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                    r0 = r0 & 0xffu;
                    r0 = (u32)rd8(r4 + 0x6d4u) | r0;
                    wr8(r4 + 0x6d4u, (u8)r0);
                    return;
                }
                c0lt = param_3 < 3;
                if ((u32)param_3 == 3u) {
                    r4 = (u32)param_1 + (u32)t0;
                    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                    r0 = r0 & 0xffu;
                    r0 = (u32)rd8(r4 + 0x69cu) | r0;
                    wr8(r4 + 0x69cu, (u8)r0);
                    return;
                }
                if (!c0lt) {
                    c0lt = param_3 < 5;
                    if ((u32)param_3 == 5u) {
                        r4 = (u32)param_1 + (u32)t0;
                        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                        r0 = r0 & 0xffu;
                        r0 = (u32)rd8(r4 + 0x6c4u) | r0;
                        wr8(r4 + 0x6c4u, (u8)r0);
                        return;
                    }
                    if (!c0lt) {
                        return;
                    }
                    r4 = (u32)param_1 + (u32)t0;
                    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                    r0 = r0 & 0xffu;
                    r0 = (u32)rd8(r4 + 0x6bcu) | r0;
                    wr8(r4 + 0x6bcu, (u8)r0);
                    return;
                }
                c0lt = param_3 < 1;
                if ((u32)param_3 == 1u) {
                    r4 = (u32)param_1 + (u32)t0;
                    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                    r0 = r0 & 0xffu;
                    r0 = (u32)rd8(r4 + 0x674u) | r0;
                    wr8(r4 + 0x674u, (u8)r0);
                    return;
                }
                if (!c0lt) {
                    r4 = (u32)param_1 + (u32)t0;
                    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                    r0 = r0 & 0xffu;
                    r0 = (u32)rd8(r4 + 0x684u) | r0;
                    wr8(r4 + 0x684u, (u8)r0);
                    return;
                }
                if (param_3 >= 0) {
                    r4 = (u32)param_1 + (u32)t0;
                    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                    r0 = r0 & 0xffu;
                    r0 = (u32)rd8(r4 + 0x654u) | r0;
                    wr8(r4 + 0x654u, (u8)r0);
                    return;
                }
                return;
            }
            if ((u32)param_3 > 9u) {
                return;
            }
            r4 = ((u32)param_3 << 2u) & 0xfffffffcu;
            r6 = rd32(r4 - 0x7fcaeeb0u);
            sw_ = r6;
            switch (sw_) {
            case 0x8008370cu:
                r4 = (u32)param_1 + (u32)t0;
                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                r0 = r0 & 0xffu;
                r0 = (u32)rd8(r4 + 0x564u) | r0;
                wr8(r4 + 0x564u, (u8)r0);
                return;
            case 0x8008372cu:
                r4 = (u32)param_1 + (u32)t0;
                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                r0 = r0 & 0xffu;
                r0 = (u32)rd8(r4 + 0x57cu) | r0;
                wr8(r4 + 0x57cu, (u8)r0);
                return;
            case 0x8008374cu:
                r4 = (u32)param_1 + (u32)t0;
                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                r0 = r0 & 0xffu;
                r0 = (u32)rd8(r4 + 0x594u) | r0;
                wr8(r4 + 0x594u, (u8)r0);
                return;
            case 0x8008376cu:
                r4 = (u32)param_1 + (u32)t0;
                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                r0 = r0 & 0xffu;
                r0 = (u32)rd8(r4 + 0x5acu) | r0;
                wr8(r4 + 0x5acu, (u8)r0);
                return;
            case 0x8008378cu:
                r4 = (u32)param_1 + (u32)t0;
                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                r0 = r0 & 0xffu;
                r0 = (u32)rd8(r4 + 0x5c4u) | r0;
                wr8(r4 + 0x5c4u, (u8)r0);
                return;
            case 0x800837acu:
                r4 = (u32)param_1 + (u32)t0;
                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                r0 = r0 & 0xffu;
                r0 = (u32)rd8(r4 + 0x5dcu) | r0;
                wr8(r4 + 0x5dcu, (u8)r0);
                return;
            case 0x800837ccu:
                r4 = (u32)param_1 + (u32)t0;
                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                r0 = r0 & 0xffu;
                r0 = (u32)rd8(r4 + 0x5f4u) | r0;
                wr8(r4 + 0x5f4u, (u8)r0);
                return;
            case 0x800837ecu:
                r4 = (u32)param_1 + (u32)t0;
                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                r0 = r0 & 0xffu;
                r0 = (u32)rd8(r4 + 0x60cu) | r0;
                wr8(r4 + 0x60cu, (u8)r0);
                return;
            case 0x8008380cu:
                r4 = (u32)param_1 + (u32)t0;
                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                r0 = r0 & 0xffu;
                r0 = (u32)rd8(r4 + 0x624u) | r0;
                wr8(r4 + 0x624u, (u8)r0);
                return;
            case 0x8008382cu:
                r4 = (u32)param_1 + (u32)t0;
                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                r0 = r0 & 0xffu;
                r0 = (u32)rd8(r4 + 0x63cu) | r0;
                wr8(r4 + 0x63cu, (u8)r0);
                return;
            case 0x80083604u:
                fl_ = 2u;
                break;
            case 0x80083624u:
                fl_ = 1u;
                break;
            case 0x80083644u:
                fl_ = 3u;
                break;
            case 0x80083664u:
                fl_ = 4u;
                break;
            case 0x80083684u:
                fl_ = 5u;
                break;
            case 0x800836a4u:
                fl_ = 6u;
                break;
            case 0x800836c4u:
                fl_ = 7u;
                break;
            default:
                a.r[0] = (u32)param_1;
                a.r[1] = r4;
                a.r[2] = (u32)param_3;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = (u32)t0;
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
                return;
            }
            if (fl_ == 7u) {
                fl_ = 0u;
                fl_ = 8u;
                fl_ = 9u;
                fl_ = 11u;
                fl_ = 13u;
                fl_ = 15u;
                break;
            }
            if (fl_ == 6u) {
                fl_ = 0u;
                fl_ = 10u;
                fl_ = 11u;
                fl_ = 13u;
                fl_ = 15u;
                break;
            }
            if (fl_ == 5u) {
                fl_ = 0u;
                fl_ = 12u;
                fl_ = 13u;
                fl_ = 15u;
                break;
            }
            if (fl_ == 4u) {
                fl_ = 0u;
                fl_ = 14u;
                fl_ = 15u;
                break;
            }
            if (fl_ == 3u) {
                fl_ = 0u;
                fl_ = 16u;
                break;
            }
            if (fl_ == 2u) {
                fl_ = 0u;
            } else if (fl_ == 1u) {
                fl_ = 0u;
                break;
            }
        } else {
            if ((u32)param_3 > 6u) {
                return;
            }
            r4 = ((u32)param_3 << 2u) & 0xfffffffcu;
            r6 = rd32(r4 - 0x7fcaee88u);
            sw_ = r6;
            switch (sw_) {
            case 0x80083604u:
                fl_ = 18u;
                break;
            case 0x80083624u:
                fl_ = 17u;
                break;
            case 0x80083644u:
                fl_ = 19u;
                break;
            case 0x80083664u:
                fl_ = 20u;
                break;
            case 0x80083684u:
                fl_ = 21u;
                break;
            case 0x800836a4u:
                fl_ = 22u;
                break;
            case 0x800836c4u:
                fl_ = 23u;
                break;
            default:
                a.r[0] = (u32)param_1;
                a.r[1] = r4;
                a.r[2] = (u32)param_3;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = (u32)t0;
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
                return;
            }
            if (fl_ == 23u) {
                fl_ = 0u;
                fl_ = 24u;
                break;
            }
            if (fl_ == 22u) {
                fl_ = 0u;
                fl_ = 25u;
                break;
            }
            if (fl_ == 21u) {
                fl_ = 0u;
                fl_ = 26u;
                break;
            }
            if (fl_ == 20u) {
                fl_ = 0u;
                fl_ = 27u;
                break;
            }
            if (fl_ == 19u) {
                fl_ = 0u;
                fl_ = 16u;
                break;
            }
            if (fl_ == 18u) {
                fl_ = 0u;
            } else if (fl_ == 17u) {
                fl_ = 0u;
                break;
            }
        }
        r4 = (u32)param_1 + (u32)t0;
        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
        r0 = r0 & 0xffu;
        r0 = (u32)rd8(r4 + 0x46cu) | r0;
        wr8(r4 + 0x46cu, (u8)r0);
        return;
    } while (0);
    do {
        if (fl_ == 27u) {
            fl_ = 0u;
            fl_ = 14u;
            break;
        }
        if (fl_ == 26u) {
            fl_ = 0u;
            fl_ = 28u;
            break;
        }
        if (fl_ == 25u) {
            fl_ = 0u;
            fl_ = 29u;
            break;
        }
        if (fl_ == 24u) {
            fl_ = 0u;
            fl_ = 30u;
            break;
        }
        if (fl_ != 16u) {
            if (fl_ == 15u) {
                fl_ = 0u;
                break;
            }
            r4 = (u32)param_1 + (u32)t0;
            r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
            r0 = r0 & 0xffu;
            r0 = (u32)rd8(r4 + 0x49cu) | r0;
            wr8(r4 + 0x49cu, (u8)r0);
            return;
        }
        fl_ = 0u;
    } while (0);
    do {
        if (fl_ == 30u) {
            fl_ = 0u;
            fl_ = 31u;
            break;
        }
        if (fl_ == 29u) {
            fl_ = 0u;
            fl_ = 32u;
            break;
        }
        if (fl_ == 28u) {
            fl_ = 0u;
            fl_ = 12u;
            break;
        }
        if (fl_ != 14u) {
            if (fl_ == 13u) {
                fl_ = 0u;
                break;
            }
            r4 = (u32)param_1 + (u32)t0;
            r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
            r0 = r0 & 0xffu;
            r0 = (u32)rd8(r4 + 0x4d4u) | r0;
            wr8(r4 + 0x4d4u, (u8)r0);
            return;
        }
        fl_ = 0u;
    } while (0);
    do {
        if (fl_ == 32u) {
            fl_ = 0u;
            fl_ = 10u;
            break;
        }
        if (fl_ == 31u) {
            fl_ = 0u;
            fl_ = 33u;
            break;
        }
        if (fl_ != 12u) {
            if (fl_ == 11u) {
                fl_ = 0u;
                break;
            }
            r4 = (u32)param_1 + (u32)t0;
            r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
            r0 = r0 & 0xffu;
            r0 = (u32)rd8(r4 + 0x504u) | r0;
            wr8(r4 + 0x504u, (u8)r0);
            return;
        }
        fl_ = 0u;
    } while (0);
    do {
        if (fl_ == 33u) {
            fl_ = 0u;
            fl_ = 8u;
            break;
        }
        if (fl_ != 10u) {
            if (fl_ == 9u) {
                fl_ = 0u;
                break;
            }
            r4 = (u32)param_1 + (u32)t0;
            r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
            r0 = r0 & 0xffu;
            r0 = (u32)rd8(r4 + 0x52cu) | r0;
            wr8(r4 + 0x52cu, (u8)r0);
            return;
        }
        fl_ = 0u;
    } while (0);
    if (fl_ != 8u) {
        r4 = (u32)param_1 + (u32)t0;
        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
        r0 = r0 & 0xffu;
        r0 = (u32)rd8(r4 + 0x544u) | r0;
        wr8(r4 + 0x544u, (u8)r0);
        return;
    }
    fl_ = 0u;
    r4 = (u32)param_1 + (u32)t0;
    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
    r0 = r0 & 0xffu;
    r0 = (u32)rd8(r4 + 0x55cu) | r0;
    wr8(r4 + 0x55cu, (u8)r0);
    return;
}
