#include "tc_rt.h"

u32 fn_80334f34(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r4 = rd32((u32)param_2 + 0x24u);
    r0 = (u32)rd8(r4 + 0x14au);
    if (r0 <= 7u) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r3 = rd32(r0 - 0x7fc621d8u);
        sw_ = r3;
        switch (sw_) {
        case 0x80334f5cu:
            return 0x80329994u;
        case 0x80334f68u:
            return 0x80329a68u;
        case 0x80334f74u:
            return 0x80329b24u;
        case 0x80334f80u:
            return 0x80334fe8u;
        case 0x80334fdcu:
            break;
        case 0x80334f8cu:
            return 0x8032c1bcu;
        case 0x80334f98u:
            r0 = (u32)rd8(r4 + 0x14eu) & 7u;
            c0lt = (s32)r0 < 2;
            if (r0 == 2u) {
                return 0x80335618u;
            }
            if (c0lt && (s32)r0 >= 1) {
                return 0x80335368u;
            }
            return 0x80335100u;
        default:
            a.r[0] = r3;
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
            return r3;
        }
    }
    return 0x80329994u;
}
