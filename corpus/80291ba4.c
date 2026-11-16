#include "tc_rt.h"

void fn_80291ba4(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r30 = 3u;
    wr16(0x817fdfecu, 0u);
    r6 = rd32((u32)param_2 + 8u);
    if ((u32)rd8((u32)param_1 + 0x17u) != 0u) {
        r30 = 0xdu;
    }
    wr8(0x817fdfedu, rd8((u32)param_1 + 0x16u));
    wr8(0x817fdfecu, (u8)rd32((u32)param_2 + 8u));
    if (((r6 & 0x700u) != 0u || r6 == 0xfu) || (r6 == 0xeu || (u32)rd8((u32)param_1 + 0x1au) == 0u)) {
        r0 = 6u;
        wr8(0x817fdff7u, rd8((u32)param_1 + 0x16u));
        if (r6 == 0xfu) {
            r0 = 0xcu;
        }
        wr8(0x817fdff6u, (u8)r0);
        a.r[0] = 0x817fdff0u;
        a.r[1] = (u32)param_1 + 8u;
        (void)tc_call(0x8028d2a4u, &a);
        a.r[0] = (u32)rd8((u32)param_1 + 0x16u);
        f1 = tc_callf(0x802a326cu, &a);
        a.r[0] = 2u;
        a.r[1] = 0x817fdff0u;
        a.r[2] = 0x8053d728u;
        a.r[3] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(0x8053d94cu), &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80293090u, &a);
    } else {
        (void)tc_call(0x80289b8cu, &a);
        a.r[0] = 0x17u;
        a.r[1] = (u32)rd8((u32)param_1 + 0x15u);
        a.r[2] = (u32)param_1 + 8u;
        f1 = tc_callf(0x8028d46cu, &a);
        wr8(0x8053d955u, (u8)((u32)rd8(0x8053d955u) - 1u));
        wr8((u32)param_1 + 0x1au, 0u);
        if ((u32)rd8(0x817fdfecu) != 0u) {
            wr8(0x817fdfecu, 6u);
        }
        a.r[0] = r30;
        a.r[1] = 0x817fdfecu;
        a.r[2] = 0x8053d728u;
        a.r[3] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(0x8053d94cu), &a);
        if ((u32)rd8((u32)param_1 + 0x17u) != 0u) {
            a.r[0] = (u32)rd8((u32)param_1 + 0x16u);
            (void)tc_call(0x802a3000u, &a);
            a.r[0] = (u32)param_1;
            f1 = tc_callf(0x80292f00u, &a);
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x80293090u, &a);
        wr8((u32)param_1 + 0x17u, 0u);
        wr16((u32)param_1 + 0x10u, 0u);
        if ((u32)rd8(0x8053d955u) == 0u && (u32)rd8(0x8053d956u) != 0u) {
            wr8(0x817fdfe8u, 0u);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x802a2d8cu, &a);
            if ((r3 & 0xffu) != 0u) {
                wr8(0x817fdfe8u, 6u);
            }
            r30 = 0u;
            do {
                a.r[0] = ((r30 << 5u) & 0x1fe0u) - 0x7fac28c4u;
                (void)tc_call(0x8028d9f0u, &a);
                r30 = r30 + 1u;
            } while (r30 < 0x10u);
            a.r[0] = 0x8053d950u;
            f1 = tc_callf(0x8028d9f0u, &a);
            a.r[0] = 1u;
            a.r[1] = 0x817fdfe8u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(0x8053d94cu), &a);
            a.r[0] = 0x8053d728u;
            a.r[1] = 0u;
            a.r[2] = 0x230u;
            (void)tc_call(0x8000443cu, &a);
        }
    }
    return;
}
