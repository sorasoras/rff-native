#include "tc_rt.h"

void fn_800bf030(f64 param_1, s32 param_2, s32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (((u32)param_3 != 0u && (u32)param_3 != 1u) && ((u32)param_3 != 2u && (u32)param_3 != 3u)) {
        wr32((u32)param_2 + 0xa18u, 0x78u);
    }
    r4 = rd32((u32)param_2 + 0x15c4u);
    if (r4 != 0xffffffffu) {
        a.r[0] = 0x804b9e80u;
        a.r[1] = r4;
        (void)tc_call(0x801206f4u, &a);
        wr32((u32)param_2 + 0x15c4u, 0xffffffffu);
    }
    r3 = rd32((u32)param_2 + 0x15c8u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x80157e6cu, &a);
        wr32((u32)param_2 + 0x15c8u, 0u);
    }
    if ((u32)param_3 == 0x1eu) {
        wr32((u32)param_2 + 0xa5cu, 0u);
        wr32((u32)param_2 + 0xa64u, 0xffffffffu);
    } else {
        if (rd32((u32)param_2 + 0xa64u) == 0xffffffffu) {
            wr32((u32)param_2 + 0xa64u, 3u);
        }
    }
    a.r[0] = rd32((u32)param_2 + 0xacu);
    r3 = tc_call(0x8007dad4u, &a);
    r3 = rd32(r3 + 0xcu);
    a.r[0] = r3;
    r3 = tc_call(0x800f2a0cu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r3 = rd32(r3);
    r3 = r3 + ((u32)param_3 * 0x24u);
    if (((u32)rd8(r3 + 3u) & 2u) != 0u) {
        if (rd32((u32)param_2 + 0x9f4u) != 0u) {
            wr32((u32)param_2 + 0x9f4u, 0u);
            a.r[0] = (u32)param_2;
            f1 = tc_callf(0x800694f8u, &a);
            r4 = tc_lastr4();
        }
        wr32((u32)param_2 + 0x9f4u, 1u);
    } else {
        wr32((u32)param_2 + 0x9f4u, 0u);
    }
    r3 = rd32((u32)param_2 + 0xa48u);
    if (r3 != 0u && rd32(r3 + 0x9cu) == 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        f1 = tc_lastf();
        r4 = r3;
        r3 = rd32((u32)param_2 + 0xa48u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0x50u), &a);
        wr32((u32)param_2 + 0xa48u, 0u);
    }
    a.f[0] = param_1;
    a.r[0] = (u32)param_2;
    a.r[1] = (u32)param_3;
    a.r[2] = param_4;
    a.r[3] = param_5;
    (void)tc_call(0x800f33f8u, &a);
    return;
}
