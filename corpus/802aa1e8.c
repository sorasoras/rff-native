#include "tc_rt.h"

void fn_802aa1e8(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r5 = 0u;
    if ((u32)rd8(param_2 + 2u) != 0u) {
        r5 = 4u;
    }
    if ((u32)rd8(param_2 + 0x20u) != 0u) {
        r5 = (r5 + 4u) & 0xffffu;
    }
    if ((u32)rd8(param_2 + 6u) != 0u) {
        r5 = (r5 + 0x18u) & 0xffffu;
    }
    if ((u32)rd8(param_2 + 0x24u) != 0u) {
        r5 = (r5 + 0xbu) & 0xffffu;
    }
    a.r[0] = (u32)rd16(rd32((u32)param_1 + 0x10u) + 0x28u);
    a.r[1] = (r5 + 6u) & 0xffffu;
    a.r[2] = 5u;
    a.r[3] = (u32)rd8((u32)param_1 + 0x36u);
    r3 = tc_call(0x802a9ad4u, &a);
    f1 = tc_lastf();
    r5 = r3;
    if (r3 == 0u) {
        if ((u32)rd8(0x80540a20u) < 2u) {
            return;
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80001u;
        a.r[1] = 0x80396b04u;
        a.r[2] = r3;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8028cc54u, &a);
    } else {
        r4 = r3 + 0x1au;
        wr8(r3 + 0x14u, (u8)rd16((u32)param_1 + 0x16u));
        r6 = (u32)((s32)rd16((u32)param_1 + 0x16u) >> 8);
        wr8(r3 + 0x15u, (u8)r6);
        wr8(r3 + 0x16u, 0u);
        wr8(r3 + 0x17u, 0u);
        wr8(r3 + 0x18u, (u8)rd16(param_2));
        wr8(r3 + 0x19u, (u8)((s32)rd16(param_2) >> 8));
        if ((u32)rd8(param_2 + 2u) != 0u) {
            wr8(r4, 1u);
            wr8(r4 + 1u, 2u);
            wr8(r4 + 2u, (u8)rd16(param_2 + 4u));
            wr8(r4 + 3u, (u8)((s32)rd16(param_2 + 4u) >> 8));
            r4 = r4 + 4u;
        }
        if ((u32)rd8(param_2 + 0x20u) != 0u) {
            wr8(r4, 2u);
            wr8(r4 + 1u, 2u);
            wr8(r4 + 2u, (u8)rd16(param_2 + 0x22u));
            wr8(r4 + 3u, (u8)((s32)rd16(param_2 + 0x22u) >> 8));
            r4 = r4 + 4u;
        }
        if ((u32)rd8(param_2 + 6u) != 0u) {
            wr8(r4, 3u);
            wr8(r4 + 1u, 0x16u);
            wr8(r4 + 2u, rd8(param_2 + 8u));
            wr8(r4 + 3u, rd8(param_2 + 9u));
            wr8(r4 + 4u, (u8)rd32(param_2 + 0xcu));
            wr8(r4 + 5u, (u8)((rd32(param_2 + 0xcu) >> 8u) & 0xffu));
            wr8(r4 + 6u, (u8)((rd32(param_2 + 0xcu) >> 0x10u) & 0xffu));
            wr8(r4 + 7u, (u8)((rd32(param_2 + 0xcu) >> 0x18u) & 0xffu));
            wr8(r4 + 8u, (u8)rd32(param_2 + 0x10u));
            wr8(r4 + 9u, (u8)((rd32(param_2 + 0x10u) >> 8u) & 0xffu));
            wr8(r4 + 0xau, (u8)((rd32(param_2 + 0x10u) >> 0x10u) & 0xffu));
            wr8(r4 + 0xbu, (u8)((rd32(param_2 + 0x10u) >> 0x18u) & 0xffu));
            wr8(r4 + 0xcu, (u8)rd32(param_2 + 0x14u));
            wr8(r4 + 0xdu, (u8)((rd32(param_2 + 0x14u) >> 8u) & 0xffu));
            wr8(r4 + 0xeu, (u8)((rd32(param_2 + 0x14u) >> 0x10u) & 0xffu));
            wr8(r4 + 0xfu, (u8)((rd32(param_2 + 0x14u) >> 0x18u) & 0xffu));
            wr8(r4 + 0x10u, (u8)rd32(param_2 + 0x18u));
            wr8(r4 + 0x11u, (u8)((rd32(param_2 + 0x18u) >> 8u) & 0xffu));
            wr8(r4 + 0x12u, (u8)((rd32(param_2 + 0x18u) >> 0x10u) & 0xffu));
            wr8(r4 + 0x13u, (u8)((rd32(param_2 + 0x18u) >> 0x18u) & 0xffu));
            wr8(r4 + 0x14u, (u8)rd32(param_2 + 0x1cu));
            wr8(r4 + 0x15u, (u8)((rd32(param_2 + 0x1cu) >> 8u) & 0xffu));
            wr8(r4 + 0x16u, (u8)((rd32(param_2 + 0x1cu) >> 0x10u) & 0xffu));
            wr8(r4 + 0x17u, (u8)((rd32(param_2 + 0x1cu) >> 0x18u) & 0xffu));
            r4 = r4 + 0x18u;
        }
        if ((u32)rd8(param_2 + 0x24u) != 0u) {
            wr8(r4, 4u);
            wr8(r4 + 1u, 9u);
            wr8(r4 + 2u, rd8(param_2 + 0x26u));
            wr8(r4 + 3u, rd8(param_2 + 0x27u));
            wr8(r4 + 4u, rd8(param_2 + 0x28u));
            wr8(r4 + 5u, (u8)rd16(param_2 + 0x2au));
            wr8(r4 + 6u, (u8)((s32)rd16(param_2 + 0x2au) >> 8));
            wr8(r4 + 7u, (u8)rd16(param_2 + 0x2cu));
            wr8(r4 + 8u, (u8)((s32)rd16(param_2 + 0x2cu) >> 8));
            wr8(r4 + 9u, (u8)rd16(param_2 + 0x2eu));
            wr8(r4 + 0xau, (u8)((s32)rd16(param_2 + 0x2eu) >> 8));
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = rd32((u32)param_1 + 0x10u);
        a.r[1] = 0u;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802a7e04u, &a);
    }
    return;
}
