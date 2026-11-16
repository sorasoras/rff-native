#include "tc_rt.h"

s32 fn_800a4710(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r0 = param_1 - 0x66u;
    if (r0 > 9u) {
        return 0;
    }
    r0 = (r0 << 2u) & 0xfffffffcu;
    r3 = rd32(r0 - 0x7fcae540u);
    sw_ = r3;
    switch (sw_) {
    case 0x800a4734u:
        r0 = (u32)rd8(0x804990acu);
        r4 = (u32)rd16(0x804990b8u);
        break;
    case 0x800a474cu:
        r0 = (u32)rd8(0x804990adu);
        r4 = (u32)rd16(0x804990bau);
        break;
    case 0x800a4764u:
        r0 = (u32)rd8(0x804990aeu);
        r4 = (u32)rd16(0x804990bcu);
        break;
    case 0x800a477cu:
        r0 = (u32)rd8(0x804990afu);
        r4 = (u32)rd16(0x804990beu);
        break;
    case 0x800a4794u:
        r0 = (u32)rd8(0x804990b0u);
        r4 = (u32)rd16(0x804990c0u);
        break;
    case 0x800a47acu:
        r0 = (u32)rd8(0x804990b1u);
        r4 = (u32)rd16(0x804990c2u);
        break;
    case 0x800a47c4u:
        r0 = (u32)rd8(0x804990b2u);
        r4 = (u32)rd16(0x804990c4u);
        break;
    case 0x800a47dcu:
        r0 = (u32)rd8(0x804990b3u);
        r4 = (u32)rd16(0x804990c6u);
        break;
    case 0x800a47f4u:
        r0 = (u32)rd8(0x804990b4u);
        r4 = (u32)rd16(0x804990c8u);
        break;
    case 0x800a480cu:
        r0 = (u32)rd8(0x804990b5u);
        r4 = (u32)rd16(0x804990cau);
        break;
    default:
        a.r[0] = r3;
        a.r[1] = 0u;
        a.r[2] = 0u;
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
        return (s32)r3;
    }
    if (r0 != 0x63u) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r0 = (u32)rd16(r0 - 0x7fb5395au);
        return (s32)(r0 - r4);
    }
    return 0;
}
