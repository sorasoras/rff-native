#include "tc_rt.h"

s32 fn_80081c68(u32 param_1, s32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r3 = param_1;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 0u;
    if (param_1 <= 9u) {
        r5 = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7fcaf000u);
        sw_ = r5;
        switch (sw_) {
        case 0x80081c9cu:
            r6 = (u32)rd8(0x804990acu);
            if (r6 >= 0x63u) break;
            r0 = (u32)param_2 + (u32)rd16(0x804990b8u);
            if (r0 < (u32)rd16(((r6 << 2u) & 0xfffffffcu) - 0x7fb5395au)) {
                wr16(0x804990b8u, (u16)r0);
                break;
            }
            wr8(0x804990acu, (u8)(r6 + 1u));
            r31 = 1u;
            wr16(0x804990b8u, 0u);
            break;
        case 0x80081cf4u:
            r6 = (u32)rd8(0x804990adu);
            if (r6 >= 0x63u) break;
            r0 = (u32)param_2 + (u32)rd16(0x804990bau);
            if (r0 < (u32)rd16(((r6 << 2u) & 0xfffffffcu) - 0x7fb5395au)) {
                wr16(0x804990bau, (u16)r0);
                break;
            }
            wr8(0x804990adu, (u8)(r6 + 1u));
            r31 = 1u;
            wr16(0x804990bau, 0u);
            break;
        case 0x80081d4cu:
            r6 = (u32)rd8(0x804990aeu);
            if (r6 >= 0x63u) break;
            r0 = (u32)param_2 + (u32)rd16(0x804990bcu);
            if (r0 < (u32)rd16(((r6 << 2u) & 0xfffffffcu) - 0x7fb5395au)) {
                wr16(0x804990bcu, (u16)r0);
                break;
            }
            wr8(0x804990aeu, (u8)(r6 + 1u));
            r31 = 1u;
            wr16(0x804990bcu, 0u);
            break;
        case 0x80081da4u:
            r6 = (u32)rd8(0x804990afu);
            if (r6 >= 0x63u) break;
            r0 = (u32)param_2 + (u32)rd16(0x804990beu);
            if (r0 < (u32)rd16(((r6 << 2u) & 0xfffffffcu) - 0x7fb5395au)) {
                wr16(0x804990beu, (u16)r0);
                break;
            }
            wr8(0x804990afu, (u8)(r6 + 1u));
            r31 = 1u;
            wr16(0x804990beu, 0u);
            break;
        case 0x80081dfcu:
            r6 = (u32)rd8(0x804990b0u);
            if (r6 >= 0x63u) break;
            r0 = (u32)param_2 + (u32)rd16(0x804990c0u);
            if (r0 < (u32)rd16(((r6 << 2u) & 0xfffffffcu) - 0x7fb5395au)) {
                wr16(0x804990c0u, (u16)r0);
                break;
            }
            wr8(0x804990b0u, (u8)(r6 + 1u));
            r31 = 1u;
            wr16(0x804990c0u, 0u);
            break;
        case 0x80081e54u:
            r6 = (u32)rd8(0x804990b1u);
            if (r6 >= 0x63u) break;
            r0 = (u32)param_2 + (u32)rd16(0x804990c2u);
            if (r0 < (u32)rd16(((r6 << 2u) & 0xfffffffcu) - 0x7fb5395au)) {
                wr16(0x804990c2u, (u16)r0);
                break;
            }
            wr8(0x804990b1u, (u8)(r6 + 1u));
            r31 = 1u;
            wr16(0x804990c2u, 0u);
            break;
        case 0x80081eacu:
            r6 = (u32)rd8(0x804990b2u);
            if (r6 >= 0x63u) break;
            r0 = (u32)param_2 + (u32)rd16(0x804990c4u);
            if (r0 < (u32)rd16(((r6 << 2u) & 0xfffffffcu) - 0x7fb5395au)) {
                wr16(0x804990c4u, (u16)r0);
                break;
            }
            wr8(0x804990b2u, (u8)(r6 + 1u));
            r31 = 1u;
            wr16(0x804990c4u, 0u);
            break;
        case 0x80081f04u:
            r6 = (u32)rd8(0x804990b3u);
            if (r6 >= 0x63u) break;
            r0 = (u32)param_2 + (u32)rd16(0x804990c6u);
            if (r0 < (u32)rd16(((r6 << 2u) & 0xfffffffcu) - 0x7fb5395au)) {
                wr16(0x804990c6u, (u16)r0);
                break;
            }
            wr8(0x804990b3u, (u8)(r6 + 1u));
            r31 = 1u;
            wr16(0x804990c6u, 0u);
            break;
        case 0x80081f5cu:
            r6 = (u32)rd8(0x804990b4u);
            if (r6 >= 0x63u) break;
            r0 = (u32)param_2 + (u32)rd16(0x804990c8u);
            if (r0 < (u32)rd16(((r6 << 2u) & 0xfffffffcu) - 0x7fb5395au)) {
                wr16(0x804990c8u, (u16)r0);
                break;
            }
            wr8(0x804990b4u, (u8)(r6 + 1u));
            r31 = 1u;
            wr16(0x804990c8u, 0u);
            break;
        case 0x80081fb4u:
            r6 = (u32)rd8(0x804990b5u);
            if (r6 >= 0x63u) break;
            r0 = (u32)param_2 + (u32)rd16(0x804990cau);
            if (r0 < (u32)rd16(((r6 << 2u) & 0xfffffffcu) - 0x7fb5395au)) {
                wr16(0x804990cau, (u16)r0);
                break;
            }
            wr8(0x804990b5u, (u8)(r6 + 1u));
            r31 = 1u;
            wr16(0x804990cau, 0u);
            break;
        default:
            a.r[0] = param_1;
            a.r[1] = (u32)param_2;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.r[4] = 0u;
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
    }
    if (r31 != 0u) {
        f0 = (f64)rdf32(0x805728c8u);
        r3 = rd32(0x804863d8u);
        wrf32d(0x817fdff0u, f0);
        wrf32d(0x817fdfecu, f0);
        wrf32d(0x817fdfe8u, f0);
        a.r[0] = r3;
        a.r[1] = 0x817fdfe8u;
        (void)tc_call(0x8019fbdcu, &a);
        a.f[0] = (f64)rdf32(0x805728ccu);
        a.r[0] = 0x2eu;
        a.r[1] = 0x817fdfe8u;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        (void)tc_call(0x800d783cu, &a);
    }
    return (s32)r31;
}
