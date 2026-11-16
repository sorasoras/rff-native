#include "tc_rt.h"

void fn_8006edf0(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r4 = param_2;
    r5 = param_3;
    r6 = param_4;
    r7 = param_5;
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r10 = 0x804890c8u;
    r9 = rd32(0x804890c8u);
    f0 = (f64)rdf32(0x805726f8u);
    r8 = rd32(0x804890ccu);
    r0 = rd32(0x804890d0u);
    wr8(0x817fdfc8u, 0u);
    wr8(0x817fdfc9u, 0u);
    wr8(0x817fdfcau, 0u);
    wr8(0x817fdfcbu, 0u);
    wr16(0x817fdfccu, 0u);
    wr16(0x817fdfceu, 0u);
    wr32(0x817fdfd0u, 0u);
    wrf32d(0x817fdfd4u, f0);
    wr32(0x817fdfd8u, r9);
    wr32(0x817fdfdcu, r8);
    wr32(0x817fdfe0u, r0);
    if (param_2 == 0u) {
        if (param_3 != 0u) {
            a.r[0] = param_3;
            a.r[1] = param_2;
            a.r[2] = param_3;
            a.r[3] = param_4;
            a.r[4] = param_5;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = 0x804890c8u;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32(param_3) + 0x90u), &a);
            f1 = tc_lastf();
            wr16(0x817fdfceu, (u16)r3);
            a.r[0] = param_3;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_3) + 0x90u), &a);
            wr16(0x817fdfccu, (u16)r3);
        }
    } else {
        r3 = rd32(param_2 + 0xb8u);
        if (((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu) == 0u) {
            if (((ppc_cntlzw(r3 - 2u) >> 5u) & 0x7ffffffu) != 0u) {
                a.r[0] = param_2;
                a.r[1] = param_2;
                a.r[2] = param_3;
                a.r[3] = param_4;
                a.r[4] = param_5;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = 0x804890c8u;
                a.f[0] = 0.0;
                r3 = tc_call(rd32(rd32(param_2) + 0x124u), &a);
                f1 = tc_lastf();
                wr16(0x817fdfceu, (u16)r3);
                a.r[0] = param_2;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(param_2) + 0x128u), &a);
                f1 = tc_lastf();
                wr16(0x817fdfccu, (u16)r3);
                a.r[0] = param_2;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(param_2) + 0x104u), &a);
                f1 = tc_lastf();
                wr8(0x817fdfc8u, (u8)r3);
                a.r[0] = param_2;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(param_2) + 0x10cu), &a);
                f1 = tc_lastf();
                wr8(0x817fdfc9u, (u8)r3);
                a.r[0] = param_2;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(param_2) + 0x114u), &a);
                f1 = tc_lastf();
                wr8(0x817fdfcau, (u8)r3);
                a.r[0] = param_2;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(param_2) + 0x11cu), &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r5 = 0u;
                r6 = 0u;
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
                wr8(0x817fdfcbu, (u8)r3);
            }
        } else {
            r0 = (u32)rd8(0x8049909au) + rd32(0x8049e144u);
            if ((s32)r0 <= 0) {
                r0 = 0u;
            }
            if ((s32)r0 >= 999) {
                r0 = 0x3e7u;
            }
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            wr16(0x817fdfceu, (u16)r0);
            r0 = (u32)rd8(0x8049909bu) + rd32(0x8049e148u);
            if ((s32)r0 <= 0) {
                r0 = 0u;
            }
            if ((s32)r0 >= 999) {
                r0 = 0x3e7u;
            }
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            wr16(0x817fdfccu, (u16)r0);
            r0 = (u32)rd8(0x804990a0u) + rd32(0x8049e160u);
            if ((s32)r0 <= 0) {
                r0 = 0u;
            }
            if ((s32)r0 >= 99) {
                r0 = 0x63u;
            }
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            wr8(0x817fdfc8u, (u8)r0);
            r0 = (u32)rd8(0x804990a1u) + rd32(0x8049e164u);
            if ((s32)r0 <= 0) {
                r0 = 0u;
            }
            if ((s32)r0 >= 99) {
                r0 = 0x63u;
            }
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            wr8(0x817fdfc9u, (u8)r0);
            r0 = (u32)rd8(0x804990a2u) + rd32(0x8049e168u);
            if ((s32)r0 <= 0) {
                r0 = 0u;
            }
            if ((s32)r0 >= 99) {
                r0 = 0x63u;
            }
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            wr8(0x817fdfcau, (u8)r0);
            r4 = (u32)rd8(0x804990a3u);
            r0 = r4 + rd32(0x8049e16cu);
            if ((s32)r0 <= 0) {
                r0 = 0u;
            }
            if ((s32)r0 >= 99) {
                r0 = 0x63u;
            }
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            wr8(0x817fdfcbu, (u8)r0);
        }
        wr32(0x817fdfd0u, 1u);
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
        f1 = tc_lastf();
        wrf32d(0x817fdfd8u, (f64)rdf32(r3));
        wrf32d(0x817fdfdcu, (f64)rdf32(r3 + 4u));
        wrf32d(0x817fdfe0u, (f64)rdf32(r3 + 8u));
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(param_2) + 0x2cu), &a);
        wrf32d(0x817fdfd4u, f1);
    }
    a.r[0] = param_1;
    a.r[1] = 0x817fdfc8u;
    a.r[2] = param_4;
    a.r[3] = param_5;
    (void)tc_call(0x8006ebd8u, &a);
    return;
}
