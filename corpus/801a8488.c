#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_801a8488(u32 param_r3, u32 param_r4)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r28 = 0, r29 = 0, r30 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if ((u32)rd16(param_r4) != 0x2e8u) {
        r28 = 0u;
        wr8(0x817fdfbcu, 0xffu);
        wr8(0x817fdfb8u, 0u);
        wr8(0x817fdfbdu, 0xffu);
        wr8(0x817fdfb9u, 0u);
        a.r[0] = 0x8049f1b0u;
        a.r[1] = (u32)rd16(param_r4);
        r3 = tc_call(0x8015f2b0u, &a);
        f1 = tc_lastf();
        r10 = 0u;
        f2 = 0.0;
        f3 = 0.0;
        r0 = r3 & 0xffu;
        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
        r0 = r0 & 0x1fu;
        r3 = 0u;
        if (r0 != 0u) {
            r3 = 1u;
        }
        if (r3 == 0u) {
            a.r[0] = 0x8049f1b0u;
            a.r[1] = (u32)rd16(param_r4);
            r3 = tc_call(0x8015f2b0u, &a);
            f2 = 0.0;
            f3 = 0.0;
            r0 = r3 & 0xffu;
            r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
            r0 = r0 & 0x1ffe0u;
            r3 = 0u;
            if (r0 != 0u) {
                r3 = 1u;
            }
            if (r3 == 0u) {
                a.r[0] = 0x8049f1b0u;
                a.r[1] = (u32)rd16(param_r4);
                r3 = tc_call(0x8015f2b0u, &a);
                f1 = tc_lastf();
                r10 = 0u;
                f2 = 0.0;
                f3 = 0.0;
                r0 = r3 & 0xffu;
                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                r0 = r0 & 0x60000u;
                r3 = 0u;
                if (r0 != 0u) {
                    r3 = 1u;
                }
                if (r3 == 0u) {
                    a.r[0] = 0x8049f1b0u;
                    a.r[1] = (u32)rd16(param_r4);
                    r3 = tc_call(0x8015f2b0u, &a);
                    f1 = tc_lastf();
                    r10 = 0u;
                    f2 = 0.0;
                    f3 = 0.0;
                    r0 = r3 & 0xffu;
                    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                    r0 = r0 & 0x180000u;
                    r3 = 0u;
                    if (r0 != 0u) {
                        r3 = 1u;
                    }
                    if (r3 != 0u) {
                        r3 = (u32)rd16(param_r4);
                        if ((s32)r3 < 37 || (s32)r3 > 84) {
                            if ((s32)r3 < 115 || (s32)r3 > 133) {
                                if ((s32)r3 < 134 || (s32)r3 > 336) {
                                    if ((s32)r3 >= 337 && (s32)r3 <= 352) {
                                        r31 = r3 - 0x43u;
                                    }
                                } else {
                                    r31 = r3 - 0x43u;
                                }
                            } else {
                                r31 = r3 - 0x43u;
                            }
                        } else {
                            r31 = r3 - 0x25u;
                        }
                        wr8(0x817fdfbcu, rd8(((r31 << 4u) & 0xfffffff0u) - 0x7fb5fba1u));
                        r3 = (u32)rd16(param_r4);
                        if ((s32)r3 < 37 || (s32)r3 > 84) {
                            if ((s32)r3 < 115 || (s32)r3 > 133) {
                                if ((s32)r3 < 134 || (s32)r3 > 336) {
                                    if ((s32)r3 >= 337 && (s32)r3 <= 352) {
                                        r30 = r3 - 0x43u;
                                    }
                                } else {
                                    r30 = r3 - 0x43u;
                                }
                            } else {
                                r30 = r3 - 0x43u;
                            }
                        } else {
                            r30 = r3 - 0x25u;
                        }
                        wr8(0x817fdfb8u, rd8(((r30 << 4u) & 0xfffffff0u) - 0x7fb5fba0u));
                        r3 = (u32)rd16(param_r4);
                        if ((s32)r3 < 37 || (s32)r3 > 84) {
                            if ((s32)r3 < 115 || (s32)r3 > 133) {
                                if ((s32)r3 < 134 || (s32)r3 > 336) {
                                    if ((s32)r3 >= 337 && (s32)r3 <= 352) {
                                        r29 = r3 - 0x43u;
                                    }
                                } else {
                                    r29 = r3 - 0x43u;
                                }
                            } else {
                                r29 = r3 - 0x43u;
                            }
                        } else {
                            r29 = r3 - 0x25u;
                        }
                        wr8(0x817fdfbdu, rd8(((r29 << 4u) & 0xfffffff0u) - 0x7fb5fb9fu));
                        r3 = (u32)rd16(param_r4);
                        if ((s32)r3 < 37 || (s32)r3 > 84) {
                            if ((s32)r3 < 115 || (s32)r3 > 133) {
                                if ((s32)r3 < 134 || (s32)r3 > 336) {
                                    if ((s32)r3 >= 337 && (s32)r3 <= 352) {
                                        r28 = r3 - 0x43u;
                                    }
                                } else {
                                    r28 = r3 - 0x43u;
                                }
                            } else {
                                r28 = r3 - 0x43u;
                            }
                        } else {
                            r28 = r3 - 0x25u;
                        }
                        r0 = (r28 << 4u) & 0xfffffff0u;
                        r28 = 6u;
                        r0 = (u32)rd8(r0 - 0x7fb5fb9eu);
                        wr8(0x817fdfb9u, (u8)r0);
                    }
                } else {
                    r3 = (u32)rd16(param_r4);
                    if ((s32)r3 < 0 || (s32)r3 > 36) {
                        if ((s32)r3 >= 353 && (s32)r3 <= 360) {
                            r29 = r3 - 0x13cu;
                        }
                    } else {
                        r29 = r3;
                    }
                    wr8(0x817fdfbcu, rd8(((r29 << 3u) & 0xfffffff8u) - 0x7fb5fd0fu));
                    r3 = (u32)rd16(param_r4);
                    if ((s32)r3 < 0 || (s32)r3 > 36) {
                        if ((s32)r3 >= 353 && (s32)r3 <= 360) {
                            r31 = r3 - 0x13cu;
                        }
                    } else {
                        r31 = r3;
                    }
                    wr8(0x817fdfb8u, rd8(((r31 << 3u) & 0xfffffff8u) - 0x7fb5fd0eu));
                }
            } else {
                r28 = 0u;
                wr8(0x817fdfbcu, rd8((((u32)rd16(param_r4) - 0x1f8u) * 0x14u) - 0x7fb60830u));
                wr8(0x817fdfb8u, rd8((((u32)rd16(param_r4) - 0x1f8u) * 0x14u) - 0x7fb6082fu));
                wr8(0x817fdfbdu, rd8((((u32)rd16(param_r4) - 0x1f8u) * 0x14u) - 0x7fb6082eu));
                wr8(0x817fdfb9u, rd8((((u32)rd16(param_r4) - 0x1f8u) * 0x14u) - 0x7fb6082du));
                f1 = (f64)rdf32((((u32)rd16(param_r4) - 0x1f8u) * 0x14u) - 0x7fb6083cu);
                wrf32d(param_r3 + 0x50u, (f64)(f32)((f64)rdf32(param_r3 + 0x50u) - f1));
                r5 = (u32)rd8(param_r4 + 3u);
                r4 = (u32)rd16((((u32)rd16(param_r4) - 0x1f8u) * 0x14u) - 0x7fb60838u);
                if (r5 != 1u) {
                    wr32(0x817fdfc8u, 0x43300000u);
                    f2 = rdf64(0x80575a20u);
                    wr32(0x817fdfccu, (r5 - 1u) ^ 0x80000000u);
                    f0 = rdf64(0x80575a10u);
                    f1 = rdf64(0x817fdfc8u);
                    wr32(0x817fdfc4u, r4);
                    f1 = f1 - f2;
                    f3 = rdf64(0x80575a18u);
                    wr32(0x817fdfc0u, 0x43300000u);
                    f2 = rdf64(0x817fdfc0u);
                    f1 = f0 * f1;
                    wr32(0x817fdfd4u, r4);
                    f2 = (f64)(f32)(f2 - f3);
                    wr32(0x817fdfd0u, 0x43300000u);
                    f0 = -((f2 * f1) - (f64)(f32)(rdf64(0x817fdfd0u) - f3));
                    f0 = px_ctiw(f0, ppc_fctiwz(f0));
                    wrf64(0x817fdfd8u, f0);
                    r4 = rd32(0x817fdfdcu);
                }
                r4 = r4 & 0xffffu;
                r9 = (u32)rd16(param_r3 + 0x56u);
                r4 = (u32)rd16(param_r3 + 0x54u) - r4;
                r8 = rd32(param_r3);
                r7 = rd32(param_r3 + 0x58u);
                wr16(param_r3 + 0x54u, (u16)(r4 & ~(u32)((s32)r4 >> 31)));
                r6 = rd32(param_r3 + 0x5cu);
                r5 = (u32)rd8(param_r3 + 0x60u);
                r4 = (u32)rd8(param_r3 + 0x61u);
                r0 = (u32)rd8(param_r3 + 0x62u);
                r10 = r9 - (u32)rd16((((u32)rd16(param_r4) - 0x1f8u) * 0x14u) - 0x7fb60838u);
                wr16(param_r3 + 0x56u, (u16)(r10 & ~(u32)((s32)r10 >> 31)));
                r8 = r8 - (u32)rd8((((u32)rd16(param_r4) - 0x1f8u) * 0x14u) - 0x7fb60836u);
                wr32(param_r3, r8);
                r7 = r7 - (u32)(s8)rd8((((u32)rd16(param_r4) - 0x1f8u) * 0x14u) - 0x7fb60835u);
                wr32(param_r3 + 0x58u, r7);
                r6 = r6 - (u32)(s8)rd8((((u32)rd16(param_r4) - 0x1f8u) * 0x14u) - 0x7fb60834u);
                wr32(param_r3 + 0x5cu, r6);
                r5 = r5 - (u32)rd8((((u32)rd16(param_r4) - 0x1f8u) * 0x14u) - 0x7fb60833u);
                wr8(param_r3 + 0x60u, (u8)r5);
                r4 = r4 - (u32)rd8((((u32)rd16(param_r4) - 0x1f8u) * 0x14u) - 0x7fb60832u);
                wr8(param_r3 + 0x61u, (u8)r4);
                r0 = r0 - (u32)rd8((((u32)rd16(param_r4) - 0x1f8u) * 0x14u) - 0x7fb60831u);
                wr8(param_r3 + 0x62u, (u8)r0);
            }
        } else {
            r0 = 0u;
            wr8(0x817fdfbcu, rd8(((((u32)rd16(param_r4) - 0x287u) << 4u) & 0xfffffff0u) - 0x7fb60e44u));
            wr8(0x817fdfb8u, rd8(((((u32)rd16(param_r4) - 0x287u) << 4u) & 0xfffffff0u) - 0x7fb60e43u));
            wr8(0x817fdfbdu, rd8(((((u32)rd16(param_r4) - 0x287u) << 4u) & 0xfffffff0u) - 0x7fb60e42u));
            wr8(0x817fdfb9u, rd8(((((u32)rd16(param_r4) - 0x287u) << 4u) & 0xfffffff0u) - 0x7fb60e41u));
            r4 = (u32)rd16(param_r4);
            if ((s32)r4 >= 647 && (s32)r4 <= 669) {
                r0 = 1u;
            }
            if (r0 == 0u) {
                r0 = 0u;
                if ((s32)r4 >= 670 && (s32)r4 <= 682) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    r0 = 0u;
                    if ((s32)r4 >= 683 && (s32)r4 <= 702) {
                        r0 = 1u;
                    }
                    if (r0 == 0u) {
                        r3 = 0u;
                        if ((s32)r4 >= 703 && (s32)r4 <= 733) {
                            r3 = 1u;
                        }
                        r3 = (u32)((s32)((0u - r3) | r3) >> 31);
                        r28 = r3 + 5u;
                    } else {
                        r28 = 3u;
                    }
                } else {
                    r28 = 2u;
                }
            } else {
                r28 = 1u;
            }
            r5 = rd32(param_r3 + 0x58u);
            r7 = (((r4 - 0x287u) << 4u) & 0xfffffff0u) - 0x7fb60e50u;
            r4 = rd32(param_r3 + 4u);
            r7 = (u32)rd8(r7 + 7u);
            r0 = rd32(param_r3 + 8u);
            wr32(param_r3, rd32(param_r3) - r7);
            r5 = r5 - (u32)(s8)rd8(((((u32)rd16(param_r4) - 0x287u) << 4u) & 0xfffffff0u) - 0x7fb60e48u);
            wr32(param_r3 + 0x58u, r5);
            r4 = r4 - (((u32)rd8(((((u32)rd16(param_r4) - 0x287u) << 4u) & 0xfffffff0u) - 0x7fb60e46u) + ((((u32)rd8(param_r4 + 3u) - 1u) << 2u) & 0xfffffffcu)) & 0xffu);
            wr32(param_r3 + 4u, r4);
            r0 = r0 - (u32)rd8(((((u32)rd16(param_r4) - 0x287u) << 4u) & 0xfffffff0u) - 0x7fb60e45u);
            wr32(param_r3 + 8u, r0);
        }
        r4 = 0x817fdfbcu;
        r5 = 0x817fdfb8u;
        r7 = 0u;
        r6 = param_r3 + ((r28 << 2u) & 0x3fcu);
        do {
            r0 = (u32)(s8)rd8(r4);
            if ((s32)r0 >= 0 && r0 <= 0x51u) {
                r0 = (r0 << 2u) & 0xfffffffcu;
                r8 = rd32(r0 - 0x7fc8e718u);
                sw_ = r8;
                switch (sw_) {
                case 0x801a8c1cu:
                    wr32(param_r3, rd32(param_r3) - (u32)(s8)rd8(r5));
                    break;
                case 0x801a8c34u:
                    wr32(param_r3 + 4u, rd32(param_r3 + 4u) - (u32)(s8)rd8(r5));
                    break;
                case 0x801a8c4cu:
                    wr32(param_r3 + 8u, rd32(param_r3 + 8u) - (u32)(s8)rd8(r5));
                    break;
                case 0x801a8c64u:
                    wr32(param_r3 + 0xcu, rd32(param_r3 + 0xcu) - ((u32)(s8)rd8(r5) * 0x64u));
                    break;
                case 0x801a8c80u:
                    wr32(param_r3 + 0x10u, rd32(param_r3 + 0x10u) - (u32)(s8)rd8(r5));
                    break;
                case 0x801a8c98u:
                    wr32(param_r3 + 0x14u, rd32(param_r3 + 0x14u) - (u32)(s8)rd8(r5));
                    break;
                case 0x801a8cb0u:
                    wr32(param_r3 + 0x18u, rd32(param_r3 + 0x18u) - (u32)(s8)rd8(r5));
                    break;
                case 0x801a8cc8u:
                    wr32(param_r3 + 0x1cu, rd32(param_r3 + 0x1cu) - (u32)(s8)rd8(r5));
                    break;
                case 0x801a8ce0u:
                    wr32(param_r3 + 0x20u, rd32(param_r3 + 0x20u) - (u32)(s8)rd8(r5));
                    break;
                case 0x801a8cf8u:
                    wr32(param_r3 + 0x24u, rd32(param_r3 + 0x24u) - (u32)(s8)rd8(r5));
                    break;
                case 0x801a8d10u:
                    wr32(param_r3 + 0x28u, rd32(param_r3 + 0x28u) - (u32)(s8)rd8(r5));
                    break;
                case 0x801a8d28u:
                    wr32(param_r3 + 0x2cu, rd32(param_r3 + 0x2cu) - (u32)(s8)rd8(r5));
                    break;
                case 0x801a8d40u:
                    r10 = rd32(param_r3 + 0x14u);
                    r8 = rd32(param_r3 + 0x18u);
                    wr32(param_r3 + 0x10u, rd32(param_r3 + 0x10u) - (u32)(s8)rd8(r5));
                    r0 = rd32(param_r3 + 0x1cu);
                    r10 = r10 - (u32)(s8)rd8(r5);
                    wr32(param_r3 + 0x14u, r10);
                    r10 = (u32)(s8)rd8(r5);
                    r8 = r8 - r10;
                    wr32(param_r3 + 0x18u, r8);
                    r0 = r0 - (u32)(s8)rd8(r5);
                    wr32(param_r3 + 0x1cu, r0);
                    break;
                case 0x801a8d94u:
                    r10 = rd32(param_r3 + 0x24u);
                    r8 = rd32(param_r3 + 0x28u);
                    wr32(param_r3 + 0x20u, rd32(param_r3 + 0x20u) - (u32)(s8)rd8(r5));
                    r0 = rd32(param_r3 + 0x2cu);
                    r10 = r10 - (u32)(s8)rd8(r5);
                    wr32(param_r3 + 0x24u, r10);
                    r10 = (u32)(s8)rd8(r5);
                    r8 = r8 - r10;
                    wr32(param_r3 + 0x28u, r8);
                    r0 = r0 - (u32)(s8)rd8(r5);
                    wr32(param_r3 + 0x2cu, r0);
                    break;
                case 0x801a8de8u:
                    wr32(r6 + 0x30u, 0u);
                    break;
                case 0x801a8df0u:
                    wr32(r6 + 0x30u, 0u);
                    wr32(param_r3 + 0x68u, rd32(param_r3 + 0x68u) - (u32)(s8)rd8(r5));
                    break;
                case 0x801a8e0cu:
                    wr32(r6 + 0x30u, 0u);
                    wr32(param_r3 + 0x6cu, rd32(param_r3 + 0x6cu) - (u32)(s8)rd8(r5));
                    break;
                case 0x801a8e28u:
                    wr32(r6 + 0x30u, 0u);
                    wr32(param_r3 + 0x70u, rd32(param_r3 + 0x70u) - (u32)(s8)rd8(r5));
                    break;
                case 0x801a8e44u:
                    wr32(r6 + 0x30u, 0u);
                    wr32(param_r3 + 0x74u, rd32(param_r3 + 0x74u) - (u32)(s8)rd8(r5));
                    break;
                case 0x801a8e60u:
                    wr32(r6 + 0x30u, 0u);
                    wr32(param_r3 + 0x78u, rd32(param_r3 + 0x78u) - (u32)(s8)rd8(r5));
                    break;
                case 0x801a8e84u:
                    wr32(r6 + 0x30u, 0u);
                    wr8(param_r3 + 0x4cu, (u8)((u32)rd8(param_r3 + 0x4cu) - (u32)rd8(r5)));
                    break;
                case 0x801a8e7cu:
                    wr32(r6 + 0x30u, 0u);
                    break;
                case 0x801a8e9cu:
                    wr32(r6 + 0x30u, 0u);
                    wr8(param_r3 + 0x4du, (u8)((u32)rd8(param_r3 + 0x4du) - (u32)rd8(r5)));
                    break;
                case 0x801a8eb4u:
                    wr32(r6 + 0x30u, 0u);
                    wr8(param_r3 + 0x4eu, (u8)((u32)rd8(param_r3 + 0x4eu) - (u32)rd8(r5)));
                    break;
                case 0x801a8eecu:
                    break;
                case 0x801a8eccu:
                    wr32(r6 + 0x30u, 0u);
                    break;
                case 0x801a8ed4u:
                    wr32(r6 + 0x30u, 0u);
                    wr32(param_r3 + 0x64u, rd32(param_r3 + 0x64u) - (u32)(s8)rd8(r5));
                    break;
                default:
                    a.r[0] = 0x80370000u;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = 0u;
                    a.r[7] = r10;
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
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
            r7 = r7 + 1u;
            r5 = r5 + 1u;
            r4 = r4 + 1u;
        } while ((s32)r7 < 2);
    }
    return;
}
