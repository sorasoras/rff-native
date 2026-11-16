#include "tc_rt.h"

u32 fn_802670fc(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    r31 = 0x500u;
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    f1 = tc_callf(0x80266c88u, &a);
    r4 = tc_lastr4();
    r0 = (u32)rd8((u32)param_1 + 0x14u);
    if (r0 <= 0x1au) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r3 = 0x8038f3a0u;
        r0 = rd32(r0 - 0x7fc70c60u);
        sw_ = r0;
        switch (sw_) {
        case 0x80267220u:
            break;
        case 0x80267144u:
            r3 = tc_call(0x8026827cu, &a);
            r31 = r3;
            break;
        case 0x80267154u:
            r3 = tc_call(0x802681e0u, &a);
            r31 = r3;
            break;
        case 0x80267164u:
            r3 = tc_call(0x80268164u, &a);
            r31 = r3;
            break;
        case 0x80267184u:
            r3 = tc_call(0x802680e0u, &a);
            r31 = r3;
            break;
        case 0x80267194u:
            r3 = tc_call(0x802680d8u, &a);
            r31 = r3;
            break;
        case 0x80267174u:
            r3 = tc_call(0x802680e8u, &a);
            r31 = r3;
            break;
        case 0x802671a4u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x80267e90u, &a);
            r31 = r3;
            break;
        case 0x802671b4u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x80267c74u, &a);
            r31 = r3;
            break;
        case 0x802671c4u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x80267a50u, &a);
            r31 = r3;
            break;
        case 0x802671d4u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x80267794u, &a);
            r31 = r3;
            break;
        case 0x80267214u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x80267244u, &a);
            r31 = r3;
            break;
        case 0x802671e4u:
            r3 = tc_call(0x802676b0u, &a);
            r31 = r3;
            break;
        case 0x802671f4u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x802673dcu, &a);
            r31 = r3;
            break;
        case 0x80267204u:
            r3 = tc_call(0x80267310u, &a);
            r31 = r3;
            break;
        default:
            a.r[0] = 0x8038f3a0u;
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
    return r31;
}
