#include "tc_rt.h"

void fn_80299d50(u32 param_1, u32 param_2, u32 param_3, u32 param_4, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r27 = 0, r28 = 0, r30 = 0;
    u32 r31 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    r4 = param_2;
    r5 = param_3;
    r6 = param_4;
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r8 = param_r8;
    r9 = param_r9;
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r7 = 0x8053d958u;
    wr16(0x8053f24eu, (u16)param_1);
    r31 = 0x8053f1acu;
    r27 = 0u;
    r30 = 0u;
    for (;;) {
        r28 = (u32)rd16(r31 + 8u);
        if (((r28 + 0xffffu) & 0xffffu) <= 2u && (u32)rd8(r31 + 0xdu) != 0u) {
            if (param_2 == 0u) break;
            a.r[0] = r31 + 0x28u;
            a.r[1] = param_2;
            a.r[2] = 6u;
            r3 = tc_call(0x802592d8u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            if (r3 == 0u) break;
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x34u;
        if (r30 >= 3u) {
            return;
        }
    }
    if (param_1 == 0u) {
        if (r28 == 1u) {
            r27 = 1u;
        }
        wr16(r31 + 8u, 4u);
        wr16(r31 + 0xau, (u16)param_3);
        if ((u32)rd8(0x8053f260u) != 0u) {
            if (param_4 != 0u) {
                r0 = (u32)rd16(param_4 + 2u);
                wr16(r31 + 0x24u, rd16(param_4));
                wr16(r31 + 0x26u, (u16)r0);
                r0 = (u32)rd16(param_4 + 6u);
                wr16(r31 + 0x28u, rd16(param_4 + 4u));
                wr16(r31 + 0x2au, (u16)r0);
                wr16(r31 + 0x2cu, rd16(param_4 + 8u));
                wr16(r31 + 0x2eu, rd16(param_4 + 0xau));
                wr16(r31 + 0x30u, rd16(param_4 + 0xcu));
            }
        } else {
            wr8(r31 + 0x2eu, 0u);
            if (r27 != 0u) {
                r6 = (u32)rd16(r31 + 0x20u);
                r5 = (u32)rd16(r31 + 0x1cu);
                r0 = (u32)rd8(r31 + 0x22u);
                wr16(0x817fdfdau, (u16)r6);
                wr16(0x817fdfd8u, (u16)r5);
                wr8(0x817fdfdcu, (u8)r0);
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                a.r[0] = r30 & 0xffffu;
                a.r[1] = 0x817fdfd8u;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                f1 = tc_callf(0x8029a1f8u, &a);
                r4 = tc_lastr4();
                r5 = 0u;
                r6 = 0u;
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
                f2 = 0.0;
                f3 = 0.0;
                f4 = 0.0;
                f5 = 0.0;
                f6 = 0.0;
                f7 = 0.0;
                f8 = 0.0;
            }
        }
        a.r[0] = r30 & 0xffffu;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = f5;
        a.f[5] = f6;
        a.f[6] = f7;
        a.f[7] = f8;
        (void)tc_call(rd32(r31), &a);
    } else if (r28 != 3u) {
        wr16(r31 + 8u, 1u);
    } else if (param_1 != 0x23u) {
        wr16(r31 + 8u, 0u);
        a.r[0] = r30 & 0xffffu;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = f5;
        a.f[5] = f6;
        a.f[6] = f7;
        a.f[7] = f8;
        (void)tc_call(rd32(r31 + 4u), &a);
    }
    return;
}
