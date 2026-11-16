#include "tc_rt.h"

u32 fn_80035dfc(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x802750ccu, &a);
    f1 = tc_lastf();
    r4 = r3 & 0xffu;
    if (param_1 > 0xfu) {
        r3 = 0u;
    } else {
        r3 = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7fcb0a54u);
        sw_ = r3;
        switch (sw_) {
        case 0x80035e38u:
            r3 = rd32(rd32(0x8034fae8u) + ((r4 << 2u) & 0xfffffffcu));
            break;
        case 0x80035e4cu:
            r3 = rd32(rd32(0x8034faecu) + ((r4 << 2u) & 0xfffffffcu));
            break;
        case 0x80035e64u:
            r3 = rd32(rd32(0x8034faf0u) + ((r4 << 2u) & 0xfffffffcu));
            break;
        case 0x80035e7cu:
            r3 = rd32(rd32(0x8034faf4u) + ((r4 << 2u) & 0xfffffffcu));
            break;
        case 0x80035e94u:
            r3 = rd32(rd32(0x8034faf8u) + ((r4 << 2u) & 0xfffffffcu));
            break;
        case 0x80035eacu:
            r3 = rd32(rd32(0x8034fafcu) + ((r4 << 2u) & 0xfffffffcu));
            break;
        case 0x80035ec4u:
            r3 = rd32(rd32(0x8034fb00u) + ((r4 << 2u) & 0xfffffffcu));
            break;
        case 0x80035edcu:
            r3 = rd32(rd32(0x8034fb04u) + ((r4 << 2u) & 0xfffffffcu));
            break;
        case 0x80035ef4u:
            r3 = rd32(rd32(0x8034fb08u) + ((r4 << 2u) & 0xfffffffcu));
            break;
        case 0x80035f0cu:
            r3 = rd32(rd32(0x8034fb0cu) + ((r4 << 2u) & 0xfffffffcu));
            break;
        case 0x80035f24u:
            r3 = rd32(rd32(0x8034fb10u) + ((r4 << 2u) & 0xfffffffcu));
            break;
        case 0x80035f3cu:
            r3 = rd32(rd32(0x8034fb14u) + ((r4 << 2u) & 0xfffffffcu));
            break;
        case 0x80035f54u:
            r3 = rd32(rd32(0x8034fb18u) + ((r4 << 2u) & 0xfffffffcu));
            break;
        case 0x80035f6cu:
            r3 = rd32(rd32(0x8034fb1cu) + ((r4 << 2u) & 0xfffffffcu));
            break;
        case 0x80035f84u:
            r3 = rd32(rd32(0x8034fb20u) + ((r4 << 2u) & 0xfffffffcu));
            break;
        case 0x80035f9cu:
            r3 = rd32(rd32(0x8034fb24u) + ((r4 << 2u) & 0xfffffffcu));
            break;
        default:
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
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
            return r3;
        }
    }
    return r3;
}
