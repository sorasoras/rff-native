#include "tc_rt.h"

void fn_801636d8(s32 param_1, s32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r30 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    r30 = 0xffffffffu;
    a.r[0] = (u32)param_2;
    r3 = tc_call(0x800cd6e4u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r3 = r3 & 0xffu;
    r0 = r3 - 5u;
    if (r0 <= 0xdu) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r3 = rd32(r0 - 0x7fc96bf0u);
        sw_ = r3;
        switch (sw_) {
        case 0x8016372cu:
            r30 = 8u;
            break;
        case 0x80163734u:
            r30 = 7u;
            break;
        case 0x8016373cu:
            r30 = 6u;
            break;
        case 0x80163744u:
            r30 = 5u;
            break;
        case 0x8016374cu:
            r30 = 3u;
            break;
        case 0x80163754u:
            r30 = 4u;
            break;
        case 0x8016375cu:
            r30 = 0xdu;
            break;
        case 0x80163764u:
            r30 = 0xcu;
            break;
        case 0x8016376cu:
            r30 = 9u;
            break;
        case 0x80163774u:
            r30 = 0xau;
            break;
        case 0x8016377cu:
            r30 = 0xbu;
            break;
        case 0x80163784u:
            r30 = rd32(((((u32)param_2 - 0x266u) << 2u) & 0xfffffffcu) - 0x7fcc58f8u);
            break;
        case 0x8016379cu:
            r30 = 1u;
            break;
        case 0x801637a4u:
            r30 = 2u;
            break;
        default:
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
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
            return;
        }
    }
    r5 = (r30 >> 0x1fu) & 1u;
    r3 = ((r30 << 0x1bu) & 0xf8000000u) - r5;
    r4 = ((r3 << 5u) | (r3 >> 0x1bu)) + r5;
    r0 = (((r4 & 0x20u) != 0u) ? 0u : (1u << (r4 & 0x1fu))) & rd32((u32)param_1 + (((u32)((u64)(u32)((s32)r30 >> 5) + (u64)(((s32)r30 < 0) && ((r30 & 0x1fu) != 0u))) << 2u) & 0xfffffffcu) + 0x54u);
    if (r0 == 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        (void)tc_call(0x801630d0u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = r30;
        a.r[2] = 0xffffffffu;
        (void)tc_call(0x80162e44u, &a);
    }
    return;
}
