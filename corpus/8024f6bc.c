#include "tc_rt.h"

void fn_8024f6bc(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    if (param_1 <= 0x19u) {
        r5 = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7fc71ea8u);
        sw_ = r5;
        switch (sw_) {
        case 0x8024f6dcu:
            r0 = rd32(rd32(0x80576c88u) + 0x14u) & 1u;
            wr32(param_2, r0);
            return;
        case 0x8024f6ecu:
            r0 = (rd32(rd32(0x80576c88u) + 0x14u) >> 1u) & 1u;
            wr32(param_2, r0);
            return;
        case 0x8024f6fcu:
            r0 = (rd32(rd32(0x80576c88u) + 0x14u) >> 2u) & 1u;
            wr32(param_2, r0);
            return;
        case 0x8024f70cu:
            r0 = (rd32(rd32(0x80576c88u) + 0x14u) >> 3u) & 1u;
            wr32(param_2, r0);
            return;
        case 0x8024f71cu:
            r0 = (rd32(rd32(0x80576c88u) + 0x14u) >> 4u) & 1u;
            wr32(param_2, r0);
            return;
        case 0x8024f72cu:
            r0 = (rd32(rd32(0x80576c88u) + 0x14u) >> 5u) & 1u;
            wr32(param_2, r0);
            return;
        case 0x8024f73cu:
            r0 = (rd32(rd32(0x80576c88u) + 0x14u) >> 6u) & 1u;
            wr32(param_2, r0);
            return;
        case 0x8024f74cu:
            r0 = (rd32(rd32(0x80576c88u) + 0x14u) >> 7u) & 1u;
            wr32(param_2, r0);
            return;
        case 0x8024f75cu:
            r0 = (rd32(rd32(0x80576c88u) + 0x14u) >> 8u) & 1u;
            wr32(param_2, r0);
            return;
        case 0x8024f76cu:
            r0 = (rd32(rd32(0x80576c88u) + 0x14u) >> 9u) & 3u;
            wr32(param_2, r0);
            return;
        case 0x8024f77cu:
            r3 = rd32(0x80576c88u);
            if ((u32)rd8(r3 + 0x524u) == 0u) {
                r0 = 0u;
                wr32(param_2, r0);
                return;
            }
            r0 = (rd32(r3 + 0x14u) >> 0xbu) & 3u;
            wr32(param_2, r0);
            return;
        case 0x8024f7c4u:
            r0 = (rd32(rd32(0x80576c88u) + 0x14u) >> 0xdu) & 3u;
            wr32(param_2, r0);
            return;
        case 0x8024f7d4u:
            r0 = (rd32(rd32(0x80576c88u) + 0x14u) >> 0xfu) & 3u;
            wr32(param_2, r0);
            return;
        case 0x8024f7e4u:
            r0 = rd32(rd32(0x80576c88u) + 0x18u) & 3u;
            wr32(param_2, r0);
            return;
        case 0x8024f7f4u:
            r0 = (rd32(rd32(0x80576c88u) + 0x18u) >> 2u) & 3u;
            wr32(param_2, r0);
            return;
        case 0x8024f804u:
            r0 = (rd32(rd32(0x80576c88u) + 0x18u) >> 4u) & 3u;
            wr32(param_2, r0);
            return;
        case 0x8024f814u:
            r0 = (rd32(rd32(0x80576c88u) + 0x18u) >> 6u) & 3u;
            wr32(param_2, r0);
            return;
        case 0x8024f824u:
            r0 = (rd32(rd32(0x80576c88u) + 0x18u) >> 8u) & 3u;
            wr32(param_2, r0);
            return;
        case 0x8024f834u:
            r0 = (rd32(rd32(0x80576c88u) + 0x18u) >> 0xau) & 3u;
            wr32(param_2, r0);
            return;
        case 0x8024f844u:
            r0 = (rd32(rd32(0x80576c88u) + 0x18u) >> 0xcu) & 3u;
            wr32(param_2, r0);
            return;
        case 0x8024f854u:
            r0 = (rd32(rd32(0x80576c88u) + 0x18u) >> 0xeu) & 3u;
            wr32(param_2, r0);
            return;
        case 0x8024f864u:
            break;
        case 0x8024f7a0u:
            r3 = rd32(0x80576c88u);
            if ((u32)rd8(r3 + 0x525u) == 0u) {
                r0 = 0u;
                wr32(param_2, r0);
                return;
            }
            r0 = (rd32(r3 + 0x14u) >> 0xbu) & 3u;
            wr32(param_2, r0);
            return;
        default:
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = r5;
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
    }
    r0 = 0u;
    wr32(param_2, r0);
    return;
}
