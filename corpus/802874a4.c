#include "tc_rt.h"

void fn_802874a4(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
{
    u32 c1lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r8 = param_r8;
    r9 = param_r9;
    wr32(0x817fddf0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if ((u32)param_1 != 0u) {
        r4 = rd32(0x80571b40u);
        r0 = rd32(0x80571b44u);
        if (r0 == r4) {
            r3 = (u32)rd8(0x80391c48u);
            r0 = 0x13u;
            wr8(0x80571b39u, 0u);
            wr8(0x80571b3au, (u8)r3);
            if ((s32)r3 < 19) {
                r0 = r3;
            }
            r31 = r0 & 0xffu;
            r30 = r31 * 0xdu;
            wr8(0x817fdef8u, (u8)r0);
            a.r[0] = 0x817fdef9u;
            a.r[1] = 0x80391c49u;
            a.r[2] = r30;
            f1 = tc_callf(0x80004338u, &a);
            wr8(0x80571b39u, (u8)((u32)rd8(0x80571b39u) + r31));
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0xfc4fu;
            a.r[1] = (r30 + 1u) & 0xffu;
            a.r[2] = 0x817fdef8u;
            a.r[3] = 0x802876d4u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802966ccu, &a);
            return;
        }
        r0 = r0 - r4;
        r3 = 0xfbu;
        if (r0 < 0xfbu) {
            r3 = r0;
        }
        r3 = r3 & 0xffu;
        c1lt = (s32)r3 < 0;
        r6 = 0u;
        r0 = rd32(0x80571b3cu) + r4;
        r5 = (r0 >> 8u) & 0xffu;
        wr8(0x817fddf8u, (u8)r0);
        r4 = (r0 >> 0x10u) & 0xffu;
        r0 = (r0 >> 0x18u) & 0xffu;
        wr8(0x817fddf9u, (u8)r5);
        wr8(0x817fddfau, (u8)r4);
        wr8(0x817fddfbu, (u8)r0);
        if ((s32)r3 > 0) {
            r7 = r3 - 8u;
            if ((s32)r3 > 8) {
                r5 = 0u;
                if (!c1lt && (s32)r3 <= 2147483646) {
                    r5 = 1u;
                }
                if (r5 != 0u) {
                    r8 = 0x817fddf8u;
                    r9 = rd32(0x80571b40u) - 0x7fc6e474u;
                    ctr = ((r7 + 7u) >> 3u) & 0x1fffffffu;
                    if ((s32)r7 > 0) {
                        do {
                            r5 = r9 + r6;
                            r6 = r6 + 8u;
                            r0 = (u32)rd8(r5 + 9u);
                            wr8(r8 + 4u, rd8(r5 + 8u));
                            r4 = (u32)rd8(r5 + 0xau);
                            wr8(r8 + 5u, (u8)r0);
                            r0 = (u32)rd8(r5 + 0xbu);
                            wr8(r8 + 6u, (u8)r4);
                            r4 = (u32)rd8(r5 + 0xcu);
                            wr8(r8 + 7u, (u8)r0);
                            r0 = (u32)rd8(r5 + 0xdu);
                            wr8(r8 + 8u, (u8)r4);
                            r4 = (u32)rd8(r5 + 0xeu);
                            wr8(r8 + 9u, (u8)r0);
                            r0 = (u32)rd8(r5 + 0xfu);
                            wr8(r8 + 0xau, (u8)r4);
                            wr8(r8 + 0xbu, (u8)r0);
                            r8 = r8 + 8u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
            }
            r7 = r6 - 0x7e802208u;
            r5 = rd32(0x80571b40u) - 0x7fc6e474u;
            ctr = r3 - r6;
            if ((s32)r6 < (s32)r3) {
                do {
                    r4 = r5 + r6;
                    r6 = r6 + 1u;
                    wr8(r7 + 4u, rd8(r4 + 8u));
                    r7 = r7 + 1u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        r0 = r3 + 4u;
        r3 = rd32(0x80571b40u) + r3;
        wr32(0x80571b40u, r3);
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0xfc4cu;
        a.r[1] = r0 & 0xffu;
        a.r[2] = 0x817fddf8u;
        a.r[3] = 0x802874a4u;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = param_r10;
        (void)tc_call(0x802966ccu, &a);
    } else {
        a.r[0] = 0x80287328u;
        (void)tc_call(0x802956d0u, &a);
    }
    return;
}
