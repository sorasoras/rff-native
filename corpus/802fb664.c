#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_802fb664(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r26 = 0, r27 = 0, r29 = 0, r30 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r27 = rd32(param_2 + 0xecu);
    r29 = param_5;
    r31 = param_2 + 0x50u;
    if (param_3 > 0xffu) {
        if (param_3 <= 0xffffu) {
            r0 = param_3 & 0xf0u;
            r26 = param_3 & 0xffu;
            r30 = 0u;
            if (r0 == 0x80u || r0 == 0x90u) {
                if ((s32)param_4 >= 32) {
                    if ((s32)param_4 >= 48) {
                        r3 = 0u;
                    } else {
                        a.r[0] = param_2;
                        a.r[1] = param_4 - 0x20u;
                        r3 = tc_call(0x802ffe00u, &a);
                    }
                } else {
                    a.r[0] = r27;
                    a.r[1] = param_4;
                    r3 = tc_call(0x802fdfbcu, &a);
                }
                r30 = r3;
                if (r3 == 0u) {
                    return;
                }
            }
            c0lt = (s32)r26 < 138;
            if (r26 == 0x8au) {
                r0 = param_5 & 0xffffu;
                r0 = ~(r0 | r0);
                wr16(r30, (u16)r0);
            } else if (!c0lt) {
                c0lt = (s32)r26 < 147;
                if (r26 == 0x93u) {
                    r0 = (u32)(s16)rd16(r30);
                    wr8(r31 + 8u, (u8)((u64)(u32)((s32)param_5 >> 31) + (u64)((r0 >> 0x1fu) & 1u) + (u64)(r0 <= param_5)));
                } else if (!c0lt) {
                    c0lt = (s32)r26 < 224;
                    if (r26 == 0xe0u) {
                        a.r[0] = r27;
                        a.r[1] = param_4 & 0xffffu;
                        a.r[2] = param_2;
                        (void)tc_call(0x802fdc00u, &a);
                    } else if (c0lt) {
                        c0lt = (s32)r26 < 149;
                        if (r26 == 0x95u) {
                            r0 = (u32)(s16)rd16(r30);
                            r3 = param_5 - r0;
                            r0 = r0 - param_5;
                            r0 = r3 | r0;
                            r0 = (r0 >> 0x1fu) & 1u;
                            wr8(r31 + 8u, (u8)r0);
                        } else if (c0lt) {
                            r0 = param_5 ^ (u32)(s16)rd16(r30);
                            r3 = (u32)((s32)r0 >> 1);
                            r0 = r0 & param_5;
                            r0 = r3 - r0;
                            r0 = (r0 >> 0x1fu) & 1u;
                            wr8(r31 + 8u, (u8)r0);
                        }
                    }
                } else {
                    c0lt = (s32)r26 < 144;
                    if (r26 == 0x90u) {
                        wr8(r31 + 8u, (u8)((ppc_cntlzw(param_5 - (u32)(s16)rd16(r30)) >> 5u) & 0x7ffffffu));
                    } else if (!c0lt) {
                        if ((s32)r26 >= 146) {
                            r4 = (u32)(s16)rd16(r30);
                            r0 = r4 ^ param_5;
                            r3 = (u32)((s32)r0 >> 1);
                            r0 = r0 & r4;
                            r0 = r3 - r0;
                            r0 = (r0 >> 0x1fu) & 1u;
                            wr8(r31 + 8u, (u8)r0);
                        } else {
                            r0 = (u32)(s16)rd16(r30);
                            wr8(r31 + 8u, (u8)((u64)(u32)((s32)r0 >> 31) + (u64)((param_5 >> 0x1fu) & 1u) + (u64)(param_5 <= r0)));
                        }
                    } else if ((s32)r26 < 140 && param_5 != 0u) {
                        r3 = (u32)(s16)rd16(r30);
                        wr16(r30, (u16)(r3 - ((u32)ppc_divw((s32)r3, (s32)param_5) * param_5)));
                    }
                }
            } else {
                c0lt = (s32)r26 < 132;
                if (r26 == 0x84u) {
                    if (param_5 != 0u) {
                        wr16(r30, (u16)ppc_divw((s32)(s16)rd16(r30), (s32)param_5));
                    }
                } else if (!c0lt) {
                    c0lt = (s32)r26 < 135;
                    if (r26 == 0x87u) {
                        wr16(r30, (u16)((u32)(s16)rd16(r30) & param_5));
                    } else if (!c0lt) {
                        if ((s32)r26 >= 137) {
                            wr16(r30, (u16)((u32)(s16)rd16(r30) ^ param_5));
                        } else {
                            wr16(r30, (u16)((u32)(s16)rd16(r30) | param_5));
                        }
                    } else if ((s32)r26 >= 134) {
                        r26 = 0u;
                        if ((s32)param_5 < 0) {
                            r26 = 1u;
                            r29 = (u32)(s16)(0u - param_5);
                        }
                        r3 = tc_call(0x8030e918u, &a);
                        r3 = r3 & 0xffffu;
                        r3 = r3 * (r29 + 1u);
                        r3 = (u32)((s32)r3 >> 16);
                        if (r26 != 0u) {
                            r3 = 0u - r3;
                        }
                        wr16(r30, (u16)r3);
                    } else if ((s32)param_5 < 0) {
                        r3 = (u32)(s16)rd16(r30);
                        r0 = 0u - param_5;
                        r0 = ((r0 & 0x20u) != 0u) ? (u32)((s32)r3 >> 31) : (u32)((s32)r3 >> (s32)(r0 & 0x1fu));
                        wr16(r30, (u16)r0);
                    } else {
                        wr16(r30, (u16)(((param_5 & 0x20u) != 0u) ? 0u : ((u32)(s16)rd16(r30) << (param_5 & 0x1fu))));
                    }
                } else {
                    c0lt = (s32)r26 < 129;
                    if (r26 == 0x81u) {
                        wr16(r30, (u16)((u32)(s16)rd16(r30) + param_5));
                    } else if (!c0lt) {
                        if ((s32)r26 >= 131) {
                            wr16(r30, (u16)((u32)(s16)rd16(r30) * param_5));
                        } else {
                            wr16(r30, (u16)((u32)(s16)rd16(r30) - param_5));
                        }
                    } else if ((s32)r26 >= 128) {
                        wr16(r30, (u16)param_5);
                    }
                }
            }
        }
    } else {
        r0 = param_3 - 0x81u;
        if (r0 <= 0x7cu) {
            r0 = (r0 << 2u) & 0xfffffffcu;
            r3 = rd32(r0 - 0x7fc62e10u);
            sw_ = r3;
            switch (sw_) {
            case 0x802fb6e0u:
                if ((s32)param_4 >= 65536) break;
                wr32(r31 + 0x38u, param_4 & 0xffffu);
                break;
            case 0x802fbf04u:
                break;
            case 0x802fbab0u:
                a.r[0] = r27;
                a.r[1] = param_4;
                r3 = tc_call(0x802fde64u, &a);
                r27 = r3;
                if (r3 == 0u || r3 == param_2) break;
                a.r[0] = r3;
                (void)tc_call(0x802ff138u, &a);
                a.r[0] = r27;
                a.r[1] = rd32(r31);
                a.r[2] = param_5;
                (void)tc_call(0x802ff10cu, &a);
                a.r[0] = r27;
                (void)tc_call(0x802ff11cu, &a);
                break;
            case 0x802fbaf0u:
                wr32(r31 + 4u, rd32(r31) + param_4);
                break;
            case 0x802fbb00u:
                r0 = (u32)rd8(r31 + 0x24u);
                if (r0 >= 3u) break;
                r0 = (r0 << 3u) & 0x7f8u;
                r4 = r31 + r0;
                wr32(r4 + 0x10u, rd32(r31 + 4u));
                wr8(r4 + 0xcu, 0u);
                r0 = rd32(r31) + param_4;
                wr8(r31 + 0x24u, (u8)((u32)rd8(r31 + 0x24u) + 1u));
                wr32(r31 + 4u, r0);
                break;
            case 0x802fb6d8u:
                wr8(r27 + 0x106u, (u8)param_4);
                break;
            case 0x802fb92cu:
                wr16(r31 + 0x74u, (u16)(param_4 & 0xffu));
                break;
            case 0x802fb984u:
                r0 = (((0u - param_4) | param_4) >> 0x1fu) & 1u;
                wr8(r31 + 0xbu, (u8)r0);
                if (r0 == 0u) break;
                a.r[0] = param_2;
                a.r[1] = 0xffffffffu;
                (void)tc_call(0x802ff44cu, &a);
                a.r[0] = param_2;
                (void)tc_call(0x802ffb34u, &a);
                break;
            case 0x802fb75cu:
                wr8(r31 + 0x67u, (u8)param_4);
                break;
            case 0x802fb784u:
                r5 = (u32)(s16)rd16(r31 + 0x5cu);
                r4 = (u32)(s16)rd16(r31 + 0x5eu);
                if ((s32)r4 < (s32)r5) {
                    r8 = (u32)rd8(r31 + 0x5au);
                    r4 = (u32)(s8)(r8 + (u32)ppc_divw((s32)(r4 * ((u32)(s8)rd8(r31 + 0x5bu) - (u32)(s8)r8)), (s32)r5));
                } else {
                    r4 = (u32)(s8)rd8(r31 + 0x5bu);
                }
                wr8(r31 + 0x5au, (u8)r4);
                wr8(r31 + 0x5bu, (u8)(param_4 - 0x40u));
                wr16(r31 + 0x5cu, (u16)param_5);
                wr16(r31 + 0x5eu, 0u);
                break;
            case 0x802fb708u:
                r4 = (u32)(s16)rd16(r31 + 0x56u);
                r3 = (u32)(s16)rd16(r31 + 0x58u);
                if ((s32)r3 < (s32)r4) {
                    r5 = (u32)rd8(r31 + 0x54u);
                    r3 = (r5 + (u32)ppc_divw((s32)(r3 * ((u32)rd8(r31 + 0x55u) - r5)), (s32)r4)) & 0xffu;
                } else {
                    r3 = (u32)rd8(r31 + 0x55u);
                }
                wr8(r31 + 0x54u, (u8)r3);
                wr8(r31 + 0x55u, (u8)param_4);
                wr16(r31 + 0x56u, (u16)param_5);
                wr16(r31 + 0x58u, 0u);
                break;
            case 0x802fb764u:
                wr8(r27 + 0x104u, (u8)param_4);
                break;
            case 0x802fb76cu:
                wr8(r31 + 0x6bu, (u8)param_4);
                break;
            case 0x802fb774u:
                wr8(r31 + 0x68u, (u8)param_4);
                break;
            case 0x802fb77cu:
                wr8(r31 + 0x69u, (u8)param_4);
                break;
            case 0x802fb844u:
                wr8(r31 + 0x6cu, (u8)param_4);
                break;
            case 0x802fb84cu:
                wr8(r31 + 9u, (u8)((((0u - param_4) | param_4) >> 0x1fu) & 1u));
                break;
            case 0x802fb95cu:
                wr8(r31 + 0xau, (u8)((((0u - param_4) | param_4) >> 0x1fu) & 1u));
                a.r[0] = param_2;
                a.r[1] = 0xffffffffu;
                (void)tc_call(0x802ff44cu, &a);
                a.r[0] = param_2;
                (void)tc_call(0x802ffb34u, &a);
                break;
            case 0x802fb9b0u:
                r3 = (u32)rd8(r31 + 0x6bu);
                wr8(r31 + 0x2fu, 1u);
                wr8(r31 + 0x6du, (u8)(param_4 + r3));
                break;
            case 0x802fb868u:
                wrf32d(r31 + 0x3cu, (f64)(f32)((f64)(f32)(px_b2f((u64)(param_4 & 0xffu) | 0x4330000000000000ull) - rdf64(0x805776a0u)) * (f64)rdf32(0x80577690u)));
                break;
            case 0x802fb894u:
                wrf32d(r31 + 0x40u, (f64)(f32)((f64)rdf32(0x80577694u) * (f64)(f32)(px_b2f((u64)(param_4 & 0xffu) | 0x4330000000000000ull) - rdf64(0x805776a0u))));
                break;
            case 0x802fb8c0u:
                wr8(r31 + 0x4cu, (u8)param_4);
                break;
            case 0x802fb8c8u:
                wr8(r31 + 0x48u, (u8)param_4);
                break;
            case 0x802fb9c8u:
                wr8(r31 + 0x2fu, (u8)((((0u - param_4) | param_4) >> 0x1fu) & 1u));
                break;
            case 0x802fb860u:
                wr8(r31 + 0x6eu, (u8)param_4);
                break;
            case 0x802fb90cu:
                wr8(r31 + 0x6fu, (u8)param_4);
                break;
            case 0x802fb914u:
                wr8(r31 + 0x70u, (u8)param_4);
                break;
            case 0x802fb91cu:
                wr8(r31 + 0x71u, (u8)param_4);
                break;
            case 0x802fb924u:
                wr8(r31 + 0x72u, (u8)param_4);
                break;
            case 0x802fbb90u:
                r0 = (u32)rd8(r31 + 0x24u);
                if (r0 >= 3u) break;
                r0 = (r0 << 3u) & 0x7f8u;
                r4 = r31 + r0;
                wr32(r4 + 0x10u, rd32(r31 + 4u));
                wr8(r4 + 0xdu, (u8)param_4);
                wr8(r4 + 0xcu, 1u);
                wr8(r31 + 0x24u, (u8)((u32)rd8(r31 + 0x24u) + 1u));
                break;
            case 0x802fb754u:
                wr8(r31 + 0x66u, (u8)param_4);
                break;
            case 0x802fba04u:
                if ((u32)rd8(0x80571da0u) == 0u) break;
                if ((s32)param_4 >= 32) {
                    if ((s32)param_4 >= 48) {
                        r3 = 0u;
                    } else {
                        a.r[0] = param_2;
                        a.r[1] = param_4 - 0x20u;
                        r3 = tc_call(0x802ffe00u, &a);
                        f1 = tc_lastf();
                        r10 = 0u;
                        f2 = 0.0;
                        f3 = 0.0;
                        f4 = 0.0;
                        f5 = 0.0;
                        f6 = 0.0;
                        f7 = 0.0;
                        f8 = 0.0;
                    }
                } else {
                    a.r[0] = r27;
                    a.r[1] = param_4;
                    r3 = tc_call(0x802fdfbcu, &a);
                    f1 = tc_lastf();
                    r10 = 0u;
                    f2 = 0.0;
                    f3 = 0.0;
                    f4 = 0.0;
                    f5 = 0.0;
                    f6 = 0.0;
                    f7 = 0.0;
                    f8 = 0.0;
                }
                if ((s32)param_4 < 32) {
                    r7 = param_4;
                    if ((s32)param_4 >= 16) {
                        r7 = param_4 - 0x10u;
                    }
                } else {
                    r7 = param_4 - 0x20u;
                }
                if ((s32)param_4 < 32) {
                    r6 = 0x80570f38u;
                    if ((s32)param_4 >= 16) {
                        r6 = 0x80570f34u;
                    }
                } else {
                    r6 = 0x80570f30u;
                }
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                a.r[0] = 0x8039d1c8u;
                a.r[1] = r27;
                a.r[2] = (u32)rd8(param_2 + 4u);
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = param_4;
                a.r[6] = (u32)(s16)rd16(r3);
                a.r[7] = r10;
                (void)tc_call(0x80228554u, &a);
                break;
            case 0x802fb7ecu:
                r5 = (u32)(s16)rd16(r31 + 0x62u);
                r4 = (u32)(s16)rd16(r31 + 0x64u);
                if ((s32)r4 < (s32)r5) {
                    r8 = (u32)rd8(r31 + 0x60u);
                    r3 = (u32)(s8)(r8 + (u32)ppc_divw((s32)(r4 * ((u32)(s8)rd8(r31 + 0x61u) - (u32)(s8)r8)), (s32)r5));
                } else {
                    r3 = (u32)(s8)rd8(r31 + 0x61u);
                }
                wr8(r31 + 0x60u, (u8)r3);
                wr8(r31 + 0x61u, (u8)param_4);
                wr16(r31 + 0x62u, (u16)param_5);
                wr16(r31 + 0x64u, 0u);
                break;
            case 0x802fb9dcu:
                wr8(r31 + 0x7au, (u8)param_4);
                break;
            case 0x802fb9e4u:
                wr8(r31 + 0x77u, (u8)param_4);
                break;
            case 0x802fb9ecu:
                wr8(r31 + 0x78u, (u8)param_4);
                break;
            case 0x802fb9fcu:
                wr8(r31 + 0x76u, (u8)param_4);
                break;
            case 0x802fb7e0u:
                wr8(r31 + 0x6au, (u8)(param_4 - 0x40u));
                break;
            case 0x802fb6f8u:
                a.r[0] = param_2;
                a.r[1] = param_4;
                (void)tc_call(0x802ffc98u, &a);
                break;
            case 0x802fb9f4u:
                wr8(r31 + 0x79u, (u8)param_4);
                break;
            case 0x802fb938u:
                r4 = param_4 & 0xffu;
                wr8(r31 + 0x30u, (u8)((((r4 | 0xffffffbfu) - (((r4 - 0x40u) >> 1u) & 0x7fffffffu)) >> 0x1fu) & 1u));
                break;
            case 0x802fb8d0u:
                wr32(r31 + 0x44u, ((param_4 << 2u) & 0xfffffffcu) + param_4);
                break;
            case 0x802fb6b8u:
                if ((s32)param_4 <= 1023) {
                    r0 = param_4 & ~(u32)((s32)param_4 >> 31);
                } else {
                    r0 = 0x3ffu;
                }
                wr16(r27 + 0x108u, (u16)r0);
                break;
            case 0x802fb8e0u:
                wrf32d(r31 + 0x50u, (f64)(f32)((f64)(f32)(px_b2f((u64)(param_4 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805776a8u)) * (f64)rdf32(0x80577698u)));
                break;
            case 0x802fbbc8u:
                r3 = (u32)rd8(r31 + 0x24u);
                if (r3 == 0u) break;
                r4 = r3 - 1u;
                r3 = r31 + ((r4 << 3u) & 0xfffffff8u);
                if ((u32)rd8(r3 + 0xcu) == 0u) break;
                r5 = (u32)rd8(r3 + 0xdu);
                if (r5 != 0u) {
                    r5 = r5 - 1u;
                    if ((r5 & 0xffu) == 0u) {
                        wr8(r31 + 0x24u, (u8)r4);
                        break;
                    }
                }
                wr8(r3 + 0xdu, (u8)r5);
                wr32(r31 + 4u, rd32(r3 + 0x10u));
                break;
            case 0x802fbb40u:
                r4 = 0u;
                while ((u32)rd8(r31 + 0x24u) != 0u) {
                    r3 = (u32)rd8(r31 + 0x24u) - 1u;
                    wr8(r31 + 0x24u, (u8)r3);
                    r3 = r31 + ((r3 << 3u) & 0x7f8u);
                    if ((u32)rd8(r3 + 0xcu) == 0u) {
                        r4 = r3 + 0xcu;
                        break;
                    }
                }
                if (r4 == 0u) break;
                wr32(r31 + 4u, rd32(r4 + 4u));
                break;
            default:
                a.r[0] = r3;
                a.r[1] = param_2;
                a.r[2] = param_3;
                a.r[3] = param_4;
                a.r[4] = param_5;
                a.r[5] = 0u;
                a.r[6] = 0u;
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
    }
    return;
}
