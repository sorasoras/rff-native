#include "tc_rt.h"

void fn_8028732c(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
{
    u32 c1lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    TcArgs a = {0};
    r8 = param_r8;
    wr32(0x817fdef0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    if ((u32)param_1 == 0u) {
        a.r[0] = 0x80287328u;
        (void)tc_call(0x802956d0u, &a);
    } else {
        r3 = rd32(0x80571b44u);
        r0 = 0xfbu;
        if (r3 < 0xfbu) {
            r0 = r3;
        }
        r5 = rd32(0x80571b3cu);
        r7 = r0 & 0xffu;
        c1lt = (s32)r7 < 0;
        r6 = 0u;
        wr8(0x817fdef8u, (u8)r5);
        wr8(0x817fdef9u, (u8)((r5 >> 8u) & 0xffu));
        wr8(0x817fdefau, (u8)((r5 >> 0x10u) & 0xffu));
        wr8(0x817fdefbu, (u8)((r5 >> 0x18u) & 0xffu));
        if ((s32)r7 > 0) {
            r4 = r7 - 8u;
            if ((s32)r7 > 8) {
                r5 = 0u;
                if (!c1lt && (s32)r7 <= 2147483646) {
                    r5 = 1u;
                }
                if (r5 != 0u) {
                    r8 = 0x817fdef8u;
                    ctr = ((r4 + 7u) >> 3u) & 0x1fffffffu;
                    if ((s32)r4 > 0) {
                        do {
                            r4 = r6 - 0x7fc6e474u;
                            r6 = r6 + 8u;
                            r0 = (u32)rd8(r4 + 9u);
                            wr8(r8 + 4u, rd8(r4 + 8u));
                            r3 = (u32)rd8(r4 + 0xau);
                            wr8(r8 + 5u, (u8)r0);
                            r0 = (u32)rd8(r4 + 0xbu);
                            wr8(r8 + 6u, (u8)r3);
                            r3 = (u32)rd8(r4 + 0xcu);
                            wr8(r8 + 7u, (u8)r0);
                            r0 = (u32)rd8(r4 + 0xdu);
                            wr8(r8 + 8u, (u8)r3);
                            r3 = (u32)rd8(r4 + 0xeu);
                            wr8(r8 + 9u, (u8)r0);
                            r0 = (u32)rd8(r4 + 0xfu);
                            wr8(r8 + 0xau, (u8)r3);
                            wr8(r8 + 0xbu, (u8)r0);
                            r8 = r8 + 8u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
            }
            r5 = r6 - 0x7e802108u;
            ctr = r7 - r6;
            if ((s32)r6 < (s32)r7) {
                do {
                    r3 = r6 - 0x7fc6e474u;
                    r6 = r6 + 1u;
                    wr8(r5 + 4u, rd8(r3 + 8u));
                    r5 = r5 + 1u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        wr32(0x80571b40u, r7);
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0xfc4cu;
        a.r[1] = (r7 + 4u) & 0xffu;
        a.r[2] = 0x817fdef8u;
        a.r[3] = 0x802874a4u;
        a.r[5] = r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x802966ccu, &a);
    }
    return;
}
