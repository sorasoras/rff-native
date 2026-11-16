#include "tc_rt.h"

u32 fn_80292d10(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r0 = param_1 - 0x1700u;
    if (r0 > 0xfu) {
        return 0x80393314u;
    }
    r0 = (r0 << 2u) & 0xfffffffcu;
    r3 = rd32(r0 - 0x7fc6ccd0u);
    sw_ = r3;
    switch (sw_) {
    case 0x80292d4cu:
        return 0x803931c8u;
    case 0x80292d54u:
        return 0x803931dcu;
    case 0x80292d5cu:
        return 0x803931f4u;
    case 0x80292d64u:
        return 0x80393208u;
    case 0x80292d74u:
        return 0x80393238u;
    case 0x80292d7cu:
        return 0x8039324cu;
    case 0x80292d6cu:
        return 0x80393220u;
    case 0x80292d8cu:
        return 0x80393280u;
    case 0x80292d84u:
        return 0x80393264u;
    case 0x80292da4u:
        return 0x803932c8u;
    case 0x80292d9cu:
        return 0x803932acu;
    case 0x80292dacu:
        return 0x803932e0u;
    case 0x80292d44u:
        return 0x803931b0u;
    case 0x80292d3cu:
        return 0x80393198u;
    case 0x80292db4u:
        return 0x803932f8u;
    case 0x80292d94u:
        return 0x80393294u;
    default:
        a.r[0] = r3;
        a.r[1] = 0x80393090u;
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
}
