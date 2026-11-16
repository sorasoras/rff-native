#include "tc_rt.h"

u32 fn_800fa4ec(s32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    r6 = 0u;
    if (param_2 <= 9u) {
        r5 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fc9fae0u);
        sw_ = r5;
        switch (sw_) {
        case 0x800fa614u:
            break;
        case 0x800fa51cu:
            r3 = rd32((u32)param_1 + 0xca4u);
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            r6 = r3;
            break;
        case 0x800fa538u:
            r3 = rd32((u32)param_1 + 0xca8u);
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            r6 = r3;
            break;
        case 0x800fa554u:
            r3 = rd32((u32)param_1 + 0xcacu);
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            r6 = r3;
            break;
        case 0x800fa570u:
            r3 = rd32((u32)param_1 + 0xcb0u);
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            r6 = r3;
            break;
        case 0x800fa58cu:
            r3 = rd32((u32)param_1 + 0xcb4u);
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            r6 = r3;
            break;
        case 0x800fa5a8u:
            r3 = rd32((u32)param_1 + 0xcb8u);
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            r6 = r3;
            break;
        case 0x800fa5c4u:
            r3 = rd32((u32)param_1 + 0xcbcu);
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            r6 = r3;
            break;
        case 0x800fa5e0u:
            r3 = rd32((u32)param_1 + 0xcc0u);
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            r6 = r3;
            break;
        case 0x800fa5fcu:
            r3 = rd32((u32)param_1 + 0xcc4u);
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            r6 = r3;
            break;
        default:
            a.r[0] = (u32)param_1;
            a.r[1] = param_2;
            a.r[2] = r5;
            a.r[3] = 0u;
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
    return r6;
}
