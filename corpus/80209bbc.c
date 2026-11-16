#include "tc_rt.h"

s32 fn_80209bbc(void)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r0 = rd32(0x805709e0u);
    c0lt = (s32)r0 < 1;
    if (r0 == 1u) {
        r31 = 0u;
        r0 = rd32(0x805709e4u);
        if (r0 <= 0xcu) {
            r0 = (r0 << 2u) & 0xfffffffcu;
            r3 = rd32(r0 - 0x7fc88170u);
            sw_ = r3;
            switch (sw_) {
            case 0x80209efcu:
                wr32(0x805709e4u, 6u);
                wr32(0x805709f4u, 0u);
                break;
            case 0x8020a050u:
                break;
            case 0x80209f10u:
                a.r[0] = rd32(0x805711a4u);
                a.r[1] = 0x805713f4u;
                a.r[2] = 0x805713f8u;
                r3 = tc_call(0x8011a924u, &a);
                if (r3 == 0u) break;
                r3 = rd32(0x805713f4u);
                if (r3 == 0u) {
                    r3 = rd32(0x805713f8u);
                    c0lt = (s32)r3 < 0;
                    if (r3 == 0u) {
                        a.r[0] = 8u;
                        a.r[1] = 0xcu;
                        a.r[2] = 0xdu;
                        (void)tc_call(0x80209b40u, &a);
                        a.r[0] = 0xbu;
                        a.r[1] = 0xfu;
                        a.r[2] = 0u;
                        r3 = tc_call(0x801412f8u, &a);
                        a.r[0] = rd32(0x805713f0u);
                        a.r[1] = r3;
                        a.r[2] = 0x138bu;
                        (void)tc_call(0x801f8638u, &a);
                        a.r[0] = rd32(0x805713f0u);
                        a.r[1] = 0u;
                        (void)tc_call(0x801f89b0u, &a);
                        wr32(0x805709f4u, 1u);
                        break;
                    }
                    if (c0lt && r3 == 0xfffffff4u) {
                        a.r[0] = 4u;
                        a.r[1] = 0xdu;
                        a.r[2] = 0xdu;
                        (void)tc_call(0x80209b40u, &a);
                        break;
                    }
                    (void)tc_call(0x8020a338u, &a);
                    break;
                }
                a.r[0] = r3;
                (void)tc_call(0x8020a20cu, &a);
                break;
            case 0x80209fbcu:
                a.r[0] = rd32(0x805713f0u);
                r3 = tc_call(0x801f88d0u, &a);
                if (r3 == 0u) {
                    a.r[0] = rd32(0x805713f0u);
                    r3 = tc_call(0x801f89e8u, &a);
                    if (r3 != 2u || rd32(0x805709f4u) == 3u) break;
                    a.r[0] = rd32(0x805713f0u);
                    a.r[1] = 1u;
                    (void)tc_call(0x801f89b0u, &a);
                    break;
                }
                a.r[0] = rd32(0x805713f0u);
                r3 = tc_call(0x801f87c8u, &a);
                if ((s32)r3 > 0) {
                    a.r[0] = rd32(0x805713f0u);
                    r3 = tc_call(0x801f87c8u, &a);
                    if (r3 != 1u) break;
                    a.r[0] = rd32(0x805709f0u);
                    a.r[1] = 0xdu;
                    a.r[2] = 0xdu;
                    (void)tc_call(0x80209b40u, &a);
                    break;
                }
                a.r[0] = rd32(0x805709ecu);
                a.r[1] = 0xdu;
                a.r[2] = 0xdu;
                (void)tc_call(0x80209b40u, &a);
                break;
            case 0x8020a040u:
                r31 = rd32(0x805709f4u);
                break;
            case 0x8020a048u:
                a.r[0] = 1u;
                (void)tc_call(0x80043e0cu, &a);
                break;
            default:
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = 0u;
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
                return (s32)r3;
            }
        }
        return (s32)r31;
    }
    if (!c0lt) {
        if ((s32)r0 >= 3) {
            return 0;
        }
        r31 = 0u;
        r0 = rd32(0x805709e4u);
        if (r0 <= 0xcu) {
            r0 = (r0 << 2u) & 0xfffffffcu;
            r3 = rd32(r0 - 0x7fc8813cu);
            sw_ = r3;
            switch (sw_) {
            case 0x8020a0a0u:
                wr32(0x805709e4u, 7u);
                wr32(0x805709f4u, 0u);
                break;
            case 0x8020a1f4u:
                break;
            case 0x8020a0b4u:
                a.r[0] = rd32(0x805711a4u);
                a.r[1] = 0x805713f8u;
                r3 = tc_call(0x8011ab98u, &a);
                if (r3 == 0u) break;
                r3 = rd32(0x805713f8u);
                c0lt = (s32)r3 < 0;
                if (r3 == 0u) {
                    a.r[0] = 8u;
                    a.r[1] = 0xcu;
                    a.r[2] = 0xdu;
                    (void)tc_call(0x80209b40u, &a);
                    a.r[0] = 0xbu;
                    a.r[1] = 0x10u;
                    a.r[2] = 0u;
                    r3 = tc_call(0x801412f8u, &a);
                    a.r[0] = rd32(0x805713f0u);
                    a.r[1] = r3;
                    a.r[2] = 0x138bu;
                    (void)tc_call(0x801f8638u, &a);
                    a.r[0] = rd32(0x805713f0u);
                    a.r[1] = 0u;
                    (void)tc_call(0x801f89b0u, &a);
                    wr32(0x805709f4u, 1u);
                    break;
                }
                if (c0lt && r3 == 0xfffffff4u) {
                    a.r[0] = 4u;
                    a.r[1] = 0xdu;
                    a.r[2] = 0xdu;
                    (void)tc_call(0x80209b40u, &a);
                    break;
                }
                (void)tc_call(0x8020a338u, &a);
                break;
            case 0x8020a148u:
                a.r[0] = rd32(0x805713f0u);
                r3 = tc_call(0x801f88d0u, &a);
                if (r3 == 0u) {
                    a.r[0] = rd32(0x805713f0u);
                    r3 = tc_call(0x801f89e8u, &a);
                    if (r3 != 2u) break;
                    r3 = tc_call(0x8003c20cu, &a);
                    wr32(0x80571124u, r3);
                    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
                    a.r[0] = r3;
                    (void)tc_call(0x80035b6cu, &a);
                    if (rd32(0x805709f4u) == 3u) break;
                    a.r[0] = rd32(0x805713f0u);
                    a.r[1] = 1u;
                    (void)tc_call(0x801f89b0u, &a);
                    break;
                }
                a.r[0] = rd32(0x805713f0u);
                r3 = tc_call(0x801f87c8u, &a);
                if ((s32)r3 > 0) {
                    a.r[0] = rd32(0x805713f0u);
                    r3 = tc_call(0x801f87c8u, &a);
                    if (r3 != 1u) break;
                    a.r[0] = rd32(0x805709f0u);
                    a.r[1] = 0xdu;
                    a.r[2] = 0xdu;
                    (void)tc_call(0x80209b40u, &a);
                    break;
                }
                a.r[0] = rd32(0x805709ecu);
                a.r[1] = 0xdu;
                a.r[2] = 0xdu;
                (void)tc_call(0x80209b40u, &a);
                break;
            case 0x8020a1e4u:
                r31 = rd32(0x805709f4u);
                break;
            case 0x8020a1ecu:
                a.r[0] = 1u;
                (void)tc_call(0x80043e0cu, &a);
                break;
            default:
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = 0u;
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
                return (s32)r3;
            }
        }
        return (s32)r31;
    }
    if ((s32)r0 >= 0) {
        r31 = 0u;
        r0 = rd32(0x805709e4u);
        if (r0 <= 0xdu) {
            r0 = (r0 << 2u) & 0xfffffffcu;
            r3 = rd32(r0 - 0x7fc881a8u);
            sw_ = r3;
            switch (sw_) {
            case 0x80209c30u:
                a.r[0] = 1u;
                r3 = tc_call(0x8011b01cu, &a);
                if (r3 == 0u) break;
                wr32(0x805709e4u, 2u);
                wr32(0x805709f4u, 0u);
                break;
            case 0x80209eacu:
                break;
            case 0x80209c54u:
                a.r[0] = 0x805713f4u;
                a.r[1] = 0x805713f8u;
                r3 = tc_call(0x8011a668u, &a);
                if (r3 == 0u) break;
                r3 = rd32(0x805713f8u);
                c0lt = (s32)r3 < 0;
                if (r3 == 0u) {
                    r3 = rd32(0x805713f4u);
                    if (r3 == 0u) {
                        a.r[0] = 5u;
                        a.r[1] = 0xdu;
                        a.r[2] = 0xdu;
                        (void)tc_call(0x80209b40u, &a);
                        break;
                    }
                    a.r[0] = r3;
                    (void)tc_call(0x8020a20cu, &a);
                    break;
                }
                if (c0lt && r3 == 0xfffffff4u) {
                    r3 = rd32(0x805713f4u);
                    if (r3 == 0u) {
                        a.r[0] = 4u;
                        a.r[1] = 0xdu;
                        a.r[2] = 0xdu;
                        (void)tc_call(0x80209b40u, &a);
                        break;
                    }
                    a.r[0] = r3;
                    (void)tc_call(0x8020a20cu, &a);
                    break;
                }
                (void)tc_call(0x8020a338u, &a);
                break;
            case 0x80209e5cu:
                a.r[0] = 0x805713f8u;
                r3 = tc_call(0x8011af38u, &a);
                if (r3 == 0u) break;
                if (rd32(0x805713f8u) == 0u) {
                    a.r[0] = 4u;
                    a.r[1] = 0xdu;
                    a.r[2] = 0xdu;
                    (void)tc_call(0x80209b40u, &a);
                    break;
                }
                (void)tc_call(0x8020a338u, &a);
                break;
            case 0x80209d88u:
                a.r[0] = 0x805713f4u;
                a.r[1] = 0x805713f8u;
                r3 = tc_call(0x8011a740u, &a);
                if (r3 == 0u) break;
                r3 = rd32(0x805713f4u);
                if (r3 == 0u) {
                    if (rd32(0x805713f8u) == 0u) {
                        a.r[0] = 0xcu;
                        a.r[1] = 0xdu;
                        a.r[2] = 0xdu;
                        (void)tc_call(0x80209b40u, &a);
                        wr32(0x805709f4u, 1u);
                        break;
                    }
                    (void)tc_call(0x8020a338u, &a);
                    break;
                }
                a.r[0] = r3;
                (void)tc_call(0x8020a20cu, &a);
                break;
            case 0x80209cdcu:
                a.r[0] = 0x805713f8u;
                r3 = tc_call(0x8011ad78u, &a);
                if (r3 == 0u) break;
                r3 = rd32(0x805713f8u);
                c0lt = (s32)r3 < 0;
                if (r3 == 0u) {
                    a.r[0] = 0x8049df80u;
                    r3 = tc_call(0x800c9498u, &a);
                    if (r3 == 0u) {
                        a.r[0] = 8u;
                        a.r[1] = 3u;
                        a.r[2] = 0xdu;
                        (void)tc_call(0x80209b40u, &a);
                        a.r[0] = 0x12u;
                        a.r[1] = 0x1cu;
                        a.r[2] = 0u;
                        r3 = tc_call(0x801412f8u, &a);
                        a.r[0] = rd32(0x805713f0u);
                        a.r[1] = r3;
                        a.r[2] = 0xffffffffu;
                        (void)tc_call(0x801f8638u, &a);
                        break;
                    }
                    a.r[0] = 0xcu;
                    a.r[1] = 0xdu;
                    a.r[2] = 0xdu;
                    (void)tc_call(0x80209b40u, &a);
                    wr32(0x805709f4u, 1u);
                    break;
                }
                if (c0lt && r3 == 0xfffffff4u) {
                    a.r[0] = 4u;
                    a.r[1] = 0xdu;
                    a.r[2] = 0xdu;
                    (void)tc_call(0x80209b40u, &a);
                    break;
                }
                (void)tc_call(0x8020a338u, &a);
                break;
            case 0x80209de4u:
                a.r[0] = rd32(0x805713f0u);
                r3 = tc_call(0x801f88d0u, &a);
                if (r3 == 0u) break;
                a.r[0] = rd32(0x805713f0u);
                r3 = tc_call(0x801f87c8u, &a);
                if ((s32)r3 > 0) {
                    a.r[0] = rd32(0x805713f0u);
                    r3 = tc_call(0x801f87c8u, &a);
                    if (r3 != 1u) break;
                    a.r[0] = rd32(0x805709f0u);
                    a.r[1] = 0xdu;
                    a.r[2] = 0xdu;
                    (void)tc_call(0x80209b40u, &a);
                    break;
                }
                a.r[0] = rd32(0x805709ecu);
                a.r[1] = 0xdu;
                a.r[2] = 0xdu;
                (void)tc_call(0x80209b40u, &a);
                break;
            case 0x80209e3cu:
                a.r[0] = rd32(0x805713f0u);
                r3 = tc_call(0x801f89e8u, &a);
                if (r3 != 2u) break;
                r31 = rd32(0x805709f4u);
                break;
            case 0x80209e98u:
                a.r[0] = 1u;
                (void)tc_call(0x80043e0cu, &a);
                break;
            case 0x80209ea4u:
                a.r[0] = 2u;
                (void)tc_call(0x80043e0cu, &a);
                break;
            case 0x80209e54u:
                r31 = rd32(0x805709f4u);
                break;
            default:
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = 0u;
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
                return (s32)r3;
            }
        }
        return (s32)r31;
    }
    return 0;
}
