#include "tc_rt.h"

void fn_80073808(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf20u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    (void)tc_call(0x80074a90u, &a);
    (void)tc_call(0x80074c4cu, &a);
    if ((u32)param_1 != 0u) {
        a.r[0] = 0x80486508u;
        a.r[1] = 0u;
        a.r[2] = 0xabu;
        (void)tc_call(0x8000443cu, &a);
    }
    r30 = 0u;
    a.r[0] = 0x817fdf28u;
    a.r[1] = 0u;
    a.r[2] = 0xabu;
    f1 = tc_callf(0x8000443cu, &a);
    r4 = tc_lastr4();
    r23 = rd32(0x8046ad74u);
    while (r23 != 0u) {
        r3 = r23;
        r23 = rd32(r23);
        r22 = rd32(r3 + 8u);
        a.r[0] = r22;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r22) + 0x140u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 != 0u) {
            r30 = r22;
        } else {
            r3 = rd32(r22 + 0x148u);
            if (((u32)((s32)r3 >> 31) == 0u && (u32)((s32)((r3 << 0xau) & 0xc0000000u) >> 31) == 0u) && (u32)((s32)rd32(r22 + 0x9cu) >> 31) != 0u) {
                wr8(r22 + 0x162cu, 0u);
                a.r[0] = r22;
                f1 = tc_callf(0x80074de4u, &a);
                r4 = tc_lastr4();
                r24 = rd32(r22 + 0x158u);
                if (r24 != 0u) {
                    a.r[0] = r24;
                    (void)tc_call(0x80095f78u, &a);
                    a.r[0] = r24;
                    f1 = tc_callf(0x8009608cu, &a);
                    r4 = tc_lastr4();
                }
                if ((u32)param_1 != 0u) {
                    wr8(rd32(r22 + 0x1bcu) - 0x7e8020d8u, 1u);
                }
            }
        }
    }
    (void)tc_call(0x80074a90u, &a);
    (void)tc_call(0x80074c4cu, &a);
    if ((u32)param_1 != 0u) {
        r24 = 0x8048645cu;
        r25 = 0x80486508u;
        r22 = 0u;
        do {
            r3 = (u32)rd8(r24);
            r4 = 0u;
            if ((r3 & 1u) != 0u && (r3 & 0xeu) == 0u) {
                r4 = 1u;
            }
            if (r4 != 0u) {
                a.r[0] = r22;
                r3 = tc_call(0x800eb41cu, &a);
                r23 = r3;
                if (r3 == 0xffffffffu) {
                    r23 = r22;
                }
                a.r[0] = 0x80469958u;
                a.r[1] = r23;
                a.r[2] = 1u;
                (void)tc_call(0x800587ccu, &a);
                a.r[0] = r23;
                r3 = tc_call(0x8007dad4u, &a);
                a.r[0] = 0x8046a200u;
                a.r[1] = rd32(r3 + 0xcu);
                a.r[2] = 1u;
                (void)tc_call(0x80058f78u, &a);
                wr8(r25, rd8(r24));
                wr8(r24, 0u);
            }
            r22 = r22 + 1u;
            r25 = r25 + 1u;
            r24 = r24 + 1u;
        } while (r22 < 0xabu);
    }
    if (r30 == 0u) {
        wr32(0x80571140u, 0u);
    }
    return;
}
