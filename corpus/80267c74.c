#include "tc_rt.h"

u32 fn_80267c74(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r30 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    wr32(0x817fd6c0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r31 = (u32)rd8((u32)param_1 + 0x18u);
    r30 = rd32((u32)param_1 + 0x20u);
    r4 = (u32)rd16((u32)param_1 + 0x1cu);
    if ((r31 & 2u) == 0u) {
        wr32(0x817fd6e0u, r4);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x40u;
        (void)tc_call(0x80266c88u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x817fd7c0u;
        a.r[2] = rd32(0x817fd6e0u);
        (void)tc_call(0x80266b58u, &a);
        a.r[0] = 0x817fd7c0u;
        a.r[1] = r30;
        a.r[2] = 0x817fd6e0u;
        a.r[3] = ((r31 >> 3u) & 1u) ^ 1u;
        a.r[4] = 0u;
        r3 = tc_call(0x8026a1b8u, &a);
        r31 = r3;
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        f1 = tc_callf(0x80266cb8u, &a);
        r4 = tc_lastr4();
        if (r31 == 0u) {
            a.r[0] = 0x817fd764u;
            a.r[1] = 0u;
            a.r[2] = 0x40u;
            (void)tc_call(0x8000446cu, &a);
            r6 = rd32(0x80502708u);
            wr32(0x817fd764u, 0x40u);
            wr8(0x817fd768u, 0x80u);
            wr8(0x817fd76cu, (u8)r31);
            wr32(0x80502708u, r6 + 1u);
            wr32(0x817fd770u, r6);
            a.r[0] = (u32)param_1;
            a.r[1] = 0x817fd764u;
            a.r[2] = 0x40u;
            r3 = tc_call(0x80266be4u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r31 = r3;
        }
        if (r31 == 0u) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8026665cu, &a);
        } else {
            r0 = r31 - 0x700u;
            if (r0 > 6u) {
                r31 = 3u;
            } else {
                r0 = (r0 << 2u) & 0xfffffffcu;
                r3 = 0x8038f410u;
                r0 = rd32(r0 - 0x7fc70bf0u);
                sw_ = r0;
                switch (sw_) {
                case 0x80267de8u:
                    r31 = 0x13u;
                    break;
                case 0x80267e08u:
                    r31 = 3u;
                    break;
                case 0x80267de0u:
                    r31 = 0x15u;
                    break;
                case 0x80267df0u:
                    r31 = 0x21u;
                    break;
                case 0x80267df8u:
                    r31 = 0x22u;
                    break;
                case 0x80267e00u:
                    r31 = 0x20u;
                    break;
                default:
                    a.r[0] = 0x8038f410u;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
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
            a.r[0] = 0x817fd6e4u;
            a.r[1] = 0u;
            a.r[2] = 0x40u;
            (void)tc_call(0x8000446cu, &a);
            r7 = rd32(0x80502708u);
            wr8(0x817fd6e8u, 0x80u);
            r6 = r7 + 1u;
            wr32(0x817fd6f0u, r7);
            wr32(0x80502708u, r6);
            wr32(0x817fd6e4u, 0x40u);
            wr8(0x817fd6ecu, (u8)r31);
            wr32(0x80502708u, r6 + 1u);
            wr32(0x817fd6f0u, r6);
            (void)tc_call(0x8026af8cu, &a);
            r3 = 0u;
        }
    } else {
        a.r[0] = 0x817fd724u;
        a.r[1] = 0u;
        a.r[2] = 0x40u;
        (void)tc_call(0x8000446cu, &a);
        r8 = rd32(0x80502708u);
        wr8(0x817fd728u, 0x80u);
        r7 = r8 + 1u;
        wr32(0x817fd730u, r8);
        wr32(0x80502708u, r7);
        wr32(0x817fd724u, 0x40u);
        wr8(0x817fd72cu, 0x12u);
        wr32(0x80502708u, r7 + 1u);
        wr32(0x817fd730u, r7);
        (void)tc_call(0x8026af8cu, &a);
        r3 = 0u;
    }
    return r3;
}
