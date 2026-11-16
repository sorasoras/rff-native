#include "tc_rt.h"

s32 fn_802b2160(u32 param_1, u32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10)
{
    u32 r3 = 0, r10 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
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
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 0u;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    wr16(0x817fdfecu, 0x1200u);
    wr32(param_2, 0u);
    if (param_1 != 0u) {
        do {
            if ((u32)rd8(param_1 + 8u) == 1u) {
                r30 = rd32(0x8054283cu);
                if (r30 != 0u) break;
            }
            r3 = tc_call(0x802b2c44u, &a);
            f1 = tc_lastf();
            r10 = 0u;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            r30 = r3;
            if (r3 == 0u) {
                r3 = 6u;
                return (s32)r3;
            }
        } while (0);
        wr32(param_2, r30);
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = f5;
        a.f[5] = f6;
        a.f[6] = f7;
        a.f[7] = f8;
        a.r[0] = r30;
        a.r[1] = 1u;
        a.r[2] = 0x817fdfecu;
        a.r[7] = r10;
        r3 = tc_call(0x802b32a8u, &a);
        f1 = tc_lastf();
        if ((r3 & 0xffu) == 0u) {
            r31 = 7u;
        }
        if (r31 == 0u) {
            wr8(0x817fdfe8u, 0u);
            wr8(0x817fdfe9u, 9u);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r30;
            a.r[1] = 0x200u;
            a.r[2] = 1u;
            a.r[3] = 2u;
            a.r[4] = 0x817fdfe8u;
            a.r[7] = 0u;
            r3 = tc_call(0x802b2e38u, &a);
            f1 = tc_lastf();
            if ((r3 & 0xffu) == 0u) {
                r31 = 7u;
            }
        }
        if (r31 == 0u && (u32)(s8)rd8(param_1 + 9u) != 0u) {
            a.r[0] = param_1 + 9u;
            r3 = tc_call(0x802550d4u, &a);
            f1 = tc_lastf();
            if ((r3 + 1u) > 0x50u) {
                r31 = 7u;
            } else {
                a.r[0] = param_1 + 9u;
                r3 = tc_call(0x802550d4u, &a);
                f1 = tc_lastf();
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = r30;
                a.r[1] = 0xbu;
                a.r[2] = 8u;
                a.r[3] = r3 + 1u;
                a.r[4] = param_1 + 9u;
                a.r[7] = 0u;
                r3 = tc_call(0x802b2e38u, &a);
                f1 = tc_lastf();
                if ((r3 & 0xffu) == 0u) {
                    r31 = 7u;
                }
            }
        }
        if (r31 == 0u && (u32)(s8)rd8(param_1 + 0x59u) != 0u) {
            a.r[0] = param_1 + 0x59u;
            r3 = tc_call(0x802550d4u, &a);
            f1 = tc_lastf();
            if ((r3 + 1u) > 0x50u) {
                r31 = 7u;
            } else {
                a.r[0] = param_1 + 0x59u;
                r3 = tc_call(0x802550d4u, &a);
                f1 = tc_lastf();
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = r30;
                a.r[1] = 0x101u;
                a.r[2] = 4u;
                a.r[3] = r3 + 1u;
                a.r[4] = param_1 + 0x59u;
                a.r[7] = 0u;
                r3 = tc_call(0x802b2e38u, &a);
                f1 = tc_lastf();
                if ((r3 & 0xffu) == 0u) {
                    r31 = 7u;
                }
            }
        }
        if (r31 == 0u && (u32)(s8)rd8(param_1 + 0xa9u) != 0u) {
            a.r[0] = param_1 + 0xa9u;
            r3 = tc_call(0x802550d4u, &a);
            f1 = tc_lastf();
            if ((r3 + 1u) > 0x50u) {
                r31 = 7u;
            } else {
                a.r[0] = param_1 + 0xa9u;
                r3 = tc_call(0x802550d4u, &a);
                f1 = tc_lastf();
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = r30;
                a.r[1] = 0xau;
                a.r[2] = 8u;
                a.r[3] = r3 + 1u;
                a.r[4] = param_1 + 0xa9u;
                a.r[7] = 0u;
                r3 = tc_call(0x802b2e38u, &a);
                f1 = tc_lastf();
                if ((r3 & 0xffu) == 0u) {
                    r31 = 7u;
                }
            }
        }
        if (r31 == 0u) {
            wr8(0x817fdfe8u, (u8)((s32)rd16(param_1) >> 8));
            wr8(0x817fdfe9u, (u8)rd16(param_1));
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r30;
            a.r[1] = 0x201u;
            a.r[2] = 1u;
            a.r[3] = 2u;
            a.r[4] = 0x817fdfe8u;
            a.r[7] = 0u;
            r3 = tc_call(0x802b2e38u, &a);
            f1 = tc_lastf();
            if ((r3 & 0xffu) == 0u) {
                r31 = 7u;
            }
        }
        if (r31 == 0u) {
            wr8(0x817fdfe8u, (u8)((s32)rd16(param_1 + 4u) >> 8));
            wr8(0x817fdfe9u, (u8)rd16(param_1 + 4u));
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r30;
            a.r[1] = 0x202u;
            a.r[2] = 1u;
            a.r[3] = 2u;
            a.r[4] = 0x817fdfe8u;
            a.r[7] = 0u;
            r3 = tc_call(0x802b2e38u, &a);
            f1 = tc_lastf();
            if ((r3 & 0xffu) == 0u) {
                r31 = 7u;
            }
        }
        if (r31 == 0u) {
            wr8(0x817fdfe8u, (u8)((s32)rd16(param_1 + 6u) >> 8));
            wr8(0x817fdfe9u, (u8)rd16(param_1 + 6u));
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r30;
            a.r[1] = 0x203u;
            a.r[2] = 1u;
            a.r[3] = 2u;
            a.r[4] = 0x817fdfe8u;
            a.r[7] = 0u;
            r3 = tc_call(0x802b2e38u, &a);
            f1 = tc_lastf();
            if ((r3 & 0xffu) == 0u) {
                r31 = 7u;
            }
        }
        if (r31 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r30;
            a.r[1] = 0x204u;
            a.r[2] = 5u;
            a.r[3] = 1u;
            a.r[4] = param_1 + 8u;
            a.r[7] = 0u;
            r3 = tc_call(0x802b2e38u, &a);
            f1 = tc_lastf();
            if ((r3 & 0xffu) == 0u) {
                r31 = 7u;
            }
        }
        if (r31 == 0u) {
            wr8(0x817fdfe8u, (u8)((s32)rd16(param_1 + 2u) >> 8));
            wr8(0x817fdfe9u, (u8)rd16(param_1 + 2u));
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r30;
            a.r[1] = 0x205u;
            a.r[2] = 1u;
            a.r[3] = 2u;
            a.r[4] = 0x817fdfe8u;
            a.r[7] = 0u;
            r3 = tc_call(0x802b2e38u, &a);
            if ((r3 & 0xffu) == 0u) {
                r31 = 7u;
            }
        }
        if (r31 == 0u) {
            if ((u32)rd8(param_1 + 8u) == 1u) {
                wr32(0x8054283cu, r30);
            }
        } else {
            a.r[0] = r30;
            (void)tc_call(0x802b2d24u, &a);
        }
        r3 = r31;
    } else {
        r3 = 0xbu;
    }
    return (s32)r3;
}
