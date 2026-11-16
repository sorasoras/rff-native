#include "tc_rt.h"

void fn_8024f27c(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    if (param_1 <= 0x19u) {
        r5 = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7fc71f10u);
        sw_ = r5;
        switch (sw_) {
        case 0x8024f29cu:
            r3 = rd32(0x80576c88u);
            wr32(r3 + 0x14u, (rd32(r3 + 0x14u) & 0xfffffffeu) | (param_2 & 1u));
            break;
        case 0x8024f2b0u:
            r3 = rd32(0x80576c88u);
            wr32(r3 + 0x14u, (rd32(r3 + 0x14u) & 0xfffffffdu) | ((param_2 << 1u) & 2u));
            break;
        case 0x8024f2c4u:
            r3 = rd32(0x80576c88u);
            wr32(r3 + 0x14u, (rd32(r3 + 0x14u) & 0xfffffffbu) | ((param_2 << 2u) & 4u));
            break;
        case 0x8024f2d8u:
            r3 = rd32(0x80576c88u);
            wr32(r3 + 0x14u, (rd32(r3 + 0x14u) & 0xfffffff7u) | ((param_2 << 3u) & 8u));
            break;
        case 0x8024f2ecu:
            r3 = rd32(0x80576c88u);
            wr32(r3 + 0x14u, (rd32(r3 + 0x14u) & 0xffffffefu) | ((param_2 << 4u) & 0x10u));
            break;
        case 0x8024f300u:
            r3 = rd32(0x80576c88u);
            wr32(r3 + 0x14u, (rd32(r3 + 0x14u) & 0xffffffdfu) | ((param_2 << 5u) & 0x20u));
            break;
        case 0x8024f314u:
            r3 = rd32(0x80576c88u);
            wr32(r3 + 0x14u, (rd32(r3 + 0x14u) & 0xffffffbfu) | ((param_2 << 6u) & 0x40u));
            break;
        case 0x8024f328u:
            r3 = rd32(0x80576c88u);
            wr32(r3 + 0x14u, (rd32(r3 + 0x14u) & 0xffffff7fu) | ((param_2 << 7u) & 0x80u));
            break;
        case 0x8024f33cu:
            r3 = rd32(0x80576c88u);
            wr32(r3 + 0x14u, (rd32(r3 + 0x14u) & 0xfffffeffu) | ((param_2 << 8u) & 0x100u));
            break;
        case 0x8024f350u:
            r3 = rd32(0x80576c88u);
            wr32(r3 + 0x14u, (rd32(r3 + 0x14u) & 0xfffff9ffu) | ((param_2 << 9u) & 0x600u));
            break;
        case 0x8024f364u:
            if (param_2 == 0u) {
                wr8(rd32(0x80576c88u) + 0x524u, 0u);
                break;
            }
            r5 = rd32(0x80576c88u);
            wr8(r5 + 0x524u, 1u);
            wr8(r5 + 0x525u, 0u);
            wr32(r5 + 0x520u, param_2);
            break;
        case 0x8024f3ccu:
            r3 = rd32(0x80576c88u);
            wr32(r3 + 0x14u, (rd32(r3 + 0x14u) & 0xffff9fffu) | ((param_2 << 0xdu) & 0x6000u));
            break;
        case 0x8024f3e0u:
            r3 = rd32(0x80576c88u);
            wr32(r3 + 0x14u, (rd32(r3 + 0x14u) & 0xfffe7fffu) | ((param_2 << 0xfu) & 0x18000u));
            break;
        case 0x8024f3f4u:
            r3 = rd32(0x80576c88u);
            wr32(r3 + 0x18u, (rd32(r3 + 0x18u) & 0xfffffffcu) | (param_2 & 3u));
            break;
        case 0x8024f408u:
            r3 = rd32(0x80576c88u);
            wr32(r3 + 0x18u, (rd32(r3 + 0x18u) & 0xfffffff3u) | ((param_2 << 2u) & 0xcu));
            break;
        case 0x8024f41cu:
            r3 = rd32(0x80576c88u);
            wr32(r3 + 0x18u, (rd32(r3 + 0x18u) & 0xffffffcfu) | ((param_2 << 4u) & 0x30u));
            break;
        case 0x8024f430u:
            r3 = rd32(0x80576c88u);
            wr32(r3 + 0x18u, (rd32(r3 + 0x18u) & 0xffffff3fu) | ((param_2 << 6u) & 0xc0u));
            break;
        case 0x8024f444u:
            r3 = rd32(0x80576c88u);
            wr32(r3 + 0x18u, (rd32(r3 + 0x18u) & 0xfffffcffu) | ((param_2 << 8u) & 0x300u));
            break;
        case 0x8024f458u:
            r3 = rd32(0x80576c88u);
            wr32(r3 + 0x18u, (rd32(r3 + 0x18u) & 0xfffff3ffu) | ((param_2 << 0xau) & 0xc00u));
            break;
        case 0x8024f46cu:
            r3 = rd32(0x80576c88u);
            wr32(r3 + 0x18u, (rd32(r3 + 0x18u) & 0xffffcfffu) | ((param_2 << 0xcu) & 0x3000u));
            break;
        case 0x8024f480u:
            r3 = rd32(0x80576c88u);
            wr32(r3 + 0x18u, (rd32(r3 + 0x18u) & 0xffff3fffu) | ((param_2 << 0xeu) & 0xc000u));
            break;
        case 0x8024f490u:
            break;
        case 0x8024f398u:
            if (param_2 == 0u) {
                wr8(rd32(0x80576c88u) + 0x525u, 0u);
                break;
            }
            r5 = rd32(0x80576c88u);
            wr8(r5 + 0x525u, 1u);
            wr8(r5 + 0x524u, 0u);
            wr32(r5 + 0x520u, param_2);
            break;
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
    r4 = rd32(0x80576c88u);
    if ((u32)rd8(r4 + 0x524u) != 0u || (u32)rd8(r4 + 0x525u) != 0u) {
        r5 = rd32(0x80576c88u);
        wr32(r5 + 0x14u, (rd32(r5 + 0x14u) & 0xffffe7ffu) | ((rd32(r5 + 0x520u) << 0xbu) & 0x1800u));
    } else {
        wr32(r4 + 0x14u, rd32(r4 + 0x14u) & 0xffffe7ffu);
    }
    wr32(r4 + 0x5fcu, rd32(r4 + 0x5fcu) | 8u);
    return;
}
