#include "tc_rt.h"

u32 fn_800f4428(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    r5 = 0u;
    r0 = rd32((u32)param_1 + 0x48u);
    if (r0 <= 9u) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r4 = rd32(r0 - 0x7fca4140u);
        sw_ = r4;
        switch (sw_) {
        case 0x800f4488u:
            break;
        case 0x800f445cu:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800f449cu, &a);
            r5 = r3;
            break;
        case 0x800f4468u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800f4524u, &a);
            r5 = r3;
            break;
        case 0x800f4474u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800f45acu, &a);
            r5 = r3;
            break;
        case 0x800f4480u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800f46e4u, &a);
            r5 = r3;
            break;
        default:
            a.r[0] = (u32)param_1;
            a.r[1] = r4;
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
            return r3;
        }
    }
    return r5;
}
