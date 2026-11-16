#include "tc_rt.h"

s32 fn_80198358(s32 param_1, s32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    r4 = (u32)param_2;
    r31 = (u32)param_2;
    if ((u32)param_2 != 0x3e8u) {
        if ((u32)param_2 != 0x3e9u) {
            if ((u32)param_2 != 0x3eau) {
                if ((u32)param_2 != 0x3ebu) {
                    if ((u32)param_2 != 0xc46u) {
                        if ((u32)param_2 != 0xc5au) {
                            if ((u32)param_2 != 0xc72u) {
                                if ((u32)param_2 != 0xc84u) {
                                    if ((u32)param_2 != 0xc9bu) {
                                        if ((u32)param_2 != 0xca9u) {
                                            if ((u32)param_2 != 0x412u) {
                                                if (param_2 >= 10000 && param_2 <= 10006) {
                                                    a.r[0] = rd32(0x805706e8u);
                                                    r3 = tc_call(0x8007d150u, &a);
                                                    f1 = tc_lastf();
                                                    r4 = tc_lastr4();
                                                    if (rd32(r3 + 4u) == 2u) {
                                                        r31 = (u32)param_2 + 0x3e8u;
                                                    }
                                                }
                                            } else if (rd32((u32)param_1 + 0x290u) == 0xau) {
                                                r31 = 0x413u;
                                            }
                                            if (r31 != 0xcabu) {
                                                if (r31 != 0xd37u) {
                                                    if (r31 == 0xca8u) {
                                                        r0 = rd32((u32)param_1 + 0x5c0u) - 0x266u;
                                                        if (r0 <= 0xau) {
                                                            r0 = (r0 << 2u) & 0xfffffffcu;
                                                            r3 = rd32(r0 - 0x7fc8f4e8u);
                                                            sw_ = r3;
                                                            switch (sw_) {
                                                            case 0x80198654u:
                                                                r31 = 0xca8u;
                                                                break;
                                                            case 0x8019865cu:
                                                                r31 = 0xcd0u;
                                                                break;
                                                            case 0x80198664u:
                                                                r31 = 0xd34u;
                                                                break;
                                                            case 0x8019866cu:
                                                                r31 = 0xcbcu;
                                                                break;
                                                            case 0x80198674u:
                                                                r31 = 0xd20u;
                                                                break;
                                                            case 0x8019867cu:
                                                                r31 = 0xd0cu;
                                                                break;
                                                            case 0x80198684u:
                                                                r31 = 0xd48u;
                                                                break;
                                                            case 0x8019868cu:
                                                                r31 = 0xd5cu;
                                                                break;
                                                            case 0x80198694u:
                                                                r31 = 0xcf8u;
                                                                break;
                                                            case 0x8019869cu:
                                                                r31 = 0xce4u;
                                                                break;
                                                            case 0x801986a4u:
                                                                r31 = 0xd70u;
                                                                break;
                                                            default:
                                                                a.r[0] = r3;
                                                                a.r[1] = r4;
                                                                a.r[2] = 0u;
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
                                                                return (s32)r3;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    r0 = rd32((u32)param_1 + 0x5c0u) - 0x267u;
                                                    if (r0 <= 9u) {
                                                        r0 = (r0 << 2u) & 0xfffffffcu;
                                                        r3 = rd32(r0 - 0x7fc8f4bcu);
                                                        sw_ = r3;
                                                        switch (sw_) {
                                                        case 0x801985f4u:
                                                            r31 = 0xcd3u;
                                                            break;
                                                        case 0x801985fcu:
                                                            r31 = 0xd37u;
                                                            break;
                                                        case 0x801986a8u:
                                                            break;
                                                        case 0x80198604u:
                                                            r31 = 0xd4bu;
                                                            break;
                                                        case 0x8019860cu:
                                                            r31 = 0xd5fu;
                                                            break;
                                                        case 0x80198614u:
                                                            r31 = 0xce7u;
                                                            break;
                                                        case 0x8019861cu:
                                                            r31 = 0xd73u;
                                                            break;
                                                        default:
                                                            a.r[0] = r3;
                                                            a.r[1] = r4;
                                                            a.r[2] = 0u;
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
                                                            return (s32)r3;
                                                        }
                                                    }
                                                }
                                            } else {
                                                r0 = rd32((u32)param_1 + 0x5c0u) - 0x266u;
                                                if (r0 <= 8u) {
                                                    r0 = (r0 << 2u) & 0xfffffffcu;
                                                    r3 = rd32(r0 - 0x7fc8f494u);
                                                    sw_ = r3;
                                                    switch (sw_) {
                                                    case 0x8019859cu:
                                                        r31 = 0xcabu;
                                                        break;
                                                    case 0x801986a8u:
                                                        break;
                                                    case 0x801985a4u:
                                                        r31 = 0xcbfu;
                                                        break;
                                                    case 0x801985acu:
                                                        r31 = 0xd23u;
                                                        break;
                                                    case 0x801985b4u:
                                                        r31 = 0xd0fu;
                                                        break;
                                                    case 0x801985bcu:
                                                        r31 = 0xcfbu;
                                                        break;
                                                    default:
                                                        a.r[0] = r3;
                                                        a.r[1] = r4;
                                                        a.r[2] = 0u;
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
                                                        return (s32)r3;
                                                    }
                                                }
                                            }
                                            r3 = r31;
                                        } else {
                                            r0 = rd32((u32)param_1 + 0x5c0u) - 0x266u;
                                            if (r0 <= 0xau) {
                                                r0 = (r0 << 2u) & 0xfffffffcu;
                                                r3 = rd32(r0 - 0x7fc8f470u);
                                                sw_ = r3;
                                                switch (sw_) {
                                                case 0x801984c4u:
                                                    r31 = 0xca9u;
                                                    break;
                                                case 0x801984ccu:
                                                    r31 = 0xcd1u;
                                                    break;
                                                case 0x801984d4u:
                                                    r31 = 0xd35u;
                                                    break;
                                                case 0x801984dcu:
                                                    r31 = 0xcbdu;
                                                    break;
                                                case 0x801984e4u:
                                                    r31 = 0xd21u;
                                                    break;
                                                case 0x801984ecu:
                                                    r31 = 0xd0du;
                                                    break;
                                                case 0x801984f4u:
                                                    r31 = 0xd49u;
                                                    break;
                                                case 0x801984fcu:
                                                    r31 = 0xd5du;
                                                    break;
                                                case 0x80198504u:
                                                    r31 = 0xcf9u;
                                                    break;
                                                case 0x8019850cu:
                                                    r31 = 0xce5u;
                                                    break;
                                                case 0x80198514u:
                                                    r31 = 0xd71u;
                                                    break;
                                                default:
                                                    a.r[0] = r3;
                                                    a.r[1] = (u32)param_2;
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
                                            r3 = tc_call(0x80040b64u, &a);
                                            r3 = (r3 & 1u) + r31;
                                        }
                                    } else {
                                        r3 = tc_call(0x80040b64u, &a);
                                        r3 = (r3 & 1u) + (u32)param_2;
                                    }
                                } else {
                                    r3 = tc_call(0x80040b64u, &a);
                                    r3 = (r3 & 1u) + (u32)param_2;
                                }
                            } else {
                                r3 = tc_call(0x80040b64u, &a);
                                r0 = 0xffffffffu;
                                r3 = r3 - (((ppc_mulhwu(0xaaaaaaabu, r3) >> 1u) & 0x7fffffffu) * 3u);
                                if (r3 != 3u) {
                                    r0 = r3 + (u32)param_2;
                                }
                                r3 = r0;
                            }
                        } else {
                            r3 = tc_call(0x80040b64u, &a);
                            r3 = (r3 & 1u) + (u32)param_2;
                        }
                    } else {
                        r3 = tc_call(0x80040b64u, &a);
                        r0 = 0xffffffffu;
                        r3 = r3 - (((ppc_mulhwu(0xaaaaaaabu, r3) >> 1u) & 0x7fffffffu) * 3u);
                        if (r3 != 3u) {
                            r0 = r3 + (u32)param_2;
                        }
                        r3 = r0;
                    }
                } else {
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0u;
                    a.r[2] = 0u;
                    r3 = tc_call(0x800f3794u, &a);
                }
            } else {
                a.r[0] = (u32)param_1;
                a.r[1] = 1u;
                a.r[2] = 0u;
                r3 = tc_call(0x800f3794u, &a);
            }
        } else {
            a.r[0] = (u32)param_1;
            a.r[1] = 0u;
            a.r[2] = 1u;
            r3 = tc_call(0x800f3794u, &a);
        }
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        a.r[2] = 1u;
        r3 = tc_call(0x800f3794u, &a);
    }
    return (s32)r3;
}
