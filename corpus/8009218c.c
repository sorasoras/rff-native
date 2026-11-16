#include "tc_rt.h"

u32 fn_8009218c(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r3 = 0x19u;
    if (param_2 > 0x3fu) {
        return 0x19u;
    }
    r5 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fcaecd0u);
    sw_ = r5;
    switch (sw_) {
    case 0x800921b0u:
        return 0u;
    case 0x80092274u:
        break;
    case 0x800921b8u:
        return 1u;
    case 0x800921c0u:
        return 2u;
    case 0x800921c8u:
        return 3u;
    case 0x800921d0u:
        return 4u;
    case 0x800921d8u:
        return 5u;
    case 0x800921e0u:
        return 6u;
    case 0x800921e8u:
        return 7u;
    case 0x800921f0u:
        return 8u;
    case 0x800921f8u:
        return 9u;
    case 0x80092200u:
        return 0xau;
    case 0x80092208u:
        return 0xbu;
    case 0x80092210u:
        return 0xcu;
    case 0x80092218u:
        return 0xdu;
    case 0x80092220u:
        return 0xeu;
    case 0x80092228u:
        return 0xfu;
    case 0x80092230u:
        return 0x10u;
    case 0x80092238u:
        return 0x11u;
    case 0x80092240u:
        return 0x12u;
    case 0x80092248u:
        return 0x13u;
    case 0x80092250u:
        return 0x14u;
    case 0x80092258u:
        return 0x15u;
    case 0x80092260u:
        return 0x16u;
    case 0x80092268u:
        return 0x17u;
    case 0x80092270u:
        r3 = 0x18u;
        break;
    default:
        a.r[0] = 0x19u;
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
        return r3;
    }
    return r3;
}
