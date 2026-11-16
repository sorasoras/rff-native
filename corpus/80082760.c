#include "tc_rt.h"

void fn_80082760(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    if (param_1 >= 64) {
        return;
    }
    if ((u32)param_1 > 0x3eu) {
        return;
    }
    r4 = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fcaefb0u);
    sw_ = r4;
    switch (sw_) {
    case 0x80082a0cu:
        break;
    case 0x80082788u:
        wr8(0x8049b037u, (u8)((u32)rd8(0x8049b037u) | 2u));
        return;
    case 0x800827a0u:
        wr8(0x8049b06fu, (u8)((u32)rd8(0x8049b06fu) | 2u));
        return;
    case 0x800827b8u:
        wr8(0x8049b06fu, (u8)((u32)rd8(0x8049b06fu) | 4u));
        return;
    case 0x800827d0u:
        wr8(0x8049b0a7u, (u8)((u32)rd8(0x8049b0a7u) | 2u));
        return;
    case 0x800827e8u:
        wr8(0x8049b0a7u, (u8)((u32)rd8(0x8049b0a7u) | 4u));
        return;
    case 0x80082800u:
        wr8(0x8049b0dfu, (u8)((u32)rd8(0x8049b0dfu) | 2u));
        return;
    case 0x80082818u:
        wr8(0x8049b0dfu, (u8)((u32)rd8(0x8049b0dfu) | 4u));
        return;
    case 0x80082830u:
        wr8(0x8049b117u, (u8)((u32)rd8(0x8049b117u) | 2u));
        return;
    case 0x80082848u:
        wr8(0x8049b117u, (u8)((u32)rd8(0x8049b117u) | 4u));
        return;
    case 0x80082860u:
        wr8(0x8049b14fu, (u8)((u32)rd8(0x8049b14fu) | 2u));
        return;
    case 0x80082878u:
        wr8(0x8049b14fu, (u8)((u32)rd8(0x8049b14fu) | 4u));
        return;
    case 0x80082890u:
        wr8(0x8049b187u, (u8)((u32)rd8(0x8049b187u) | 2u));
        return;
    case 0x800828a8u:
        wr8(0x8049b187u, (u8)((u32)rd8(0x8049b187u) | 4u));
        return;
    case 0x800828c0u:
        wr8(0x8049b1bfu, (u8)((u32)rd8(0x8049b1bfu) | 2u));
        return;
    case 0x800828d8u:
        wr8(0x8049b1bfu, (u8)((u32)rd8(0x8049b1bfu) | 4u));
        return;
    case 0x800828f0u:
        wr8(0x8049b1f7u, (u8)((u32)rd8(0x8049b1f7u) | 2u));
        return;
    case 0x80082908u:
        wr8(0x8049b1f7u, (u8)((u32)rd8(0x8049b1f7u) | 4u));
        return;
    case 0x80082920u:
        wr8(0x8049b22fu, (u8)((u32)rd8(0x8049b22fu) | 2u));
        return;
    case 0x80082938u:
        wr8(0x8049b22fu, (u8)((u32)rd8(0x8049b22fu) | 4u));
        return;
    case 0x80082950u:
        wr8(0x8049b267u, (u8)((u32)rd8(0x8049b267u) | 2u));
        return;
    case 0x80082968u:
        wr8(0x8049b267u, (u8)((u32)rd8(0x8049b267u) | 4u));
        return;
    case 0x80082980u:
        wr8(0x8049b29fu, (u8)((u32)rd8(0x8049b29fu) | 2u));
        return;
    case 0x80082998u:
        wr8(0x8049b29fu, (u8)((u32)rd8(0x8049b29fu) | 4u));
        return;
    case 0x800829b0u:
        wr8(0x8049b2d7u, (u8)((u32)rd8(0x8049b2d7u) | 2u));
        return;
    case 0x800829c8u:
        wr8(0x8049b2d7u, (u8)((u32)rd8(0x8049b2d7u) | 4u));
        return;
    case 0x800829e0u:
        wr8(0x8049b30fu, (u8)((u32)rd8(0x8049b30fu) | 2u));
        return;
    case 0x800829f8u:
        wr8(0x8049b30fu, (u8)((u32)rd8(0x8049b30fu) | 4u));
        break;
    default:
        a.r[0] = (u32)param_1;
        a.r[1] = r4;
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
        return;
    }
    return;
}
