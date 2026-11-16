#include "tc_rt.h"

u32 fn_8007dae8(s32 param_1)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r29 = 0, r30 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    r4 = ((u32)param_1 * 0x38u) - 0x7fb65020u;
    r29 = (u32)rd8(r4 + 0x55u);
    r31 = (u32)rd8(r4 + 0x56u);
    if ((u32)param_1 <= 0x20u) {
        r4 = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fcaf230u);
        sw_ = r4;
        switch (sw_) {
        case 0x8007db38u:
            r30 = rd32(0x805706e8u);
            a.r[0] = rd32((rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u);
            r3 = tc_call(0x8007d150u, &a);
            if (r3 == 0u) {
                r0 = 3u;
            } else {
                r0 = rd32(r3 + 4u);
            }
            if (r29 == 0u) {
                if (r30 != 9u) {
                    if (r0 == 2u) {
                        r29 = 3u;
                    }
                } else {
                    r29 = 4u;
                }
            }
            c0lt = (s32)r31 < 2;
            if (r31 == 2u) {
                r29 = 1u;
                break;
            }
            if (!c0lt) {
                if ((s32)r31 >= 4) break;
                r29 = 2u;
                break;
            }
            c0lt = (s32)r31 < 0;
            if (r31 == 0u) break;
            if (!c0lt) {
                r29 = 1u;
                break;
            }
            break;
        case 0x8007dbccu:
            r29 = r31 + 0xbu;
            break;
        case 0x8007dbd4u:
            r29 = r31 + 0xfu;
            break;
        case 0x8007dbdcu:
            r29 = r31 + 0x13u;
            break;
        case 0x8007dbe4u:
            r29 = r31 + 0x17u;
            break;
        case 0x8007dbecu:
            r29 = r31 + 0x1bu;
            break;
        case 0x8007dbf4u:
            r29 = r31 + 0x1fu;
            break;
        case 0x8007dbfcu:
            c0lt = (s32)r29 < 1;
            if (r29 == 1u) {
                r29 = 0x25u;
                break;
            }
            if (!c0lt) {
                if ((s32)r29 >= 3) break;
                if (r31 != 3u) {
                    r29 = 0x23u;
                    break;
                }
                r29 = 0x24u;
                break;
            }
            if ((s32)r29 >= 0) {
                r29 = r31 + 0x26u;
                break;
            }
            break;
        case 0x8007dc48u:
            r29 = r31 + 0x2au;
            break;
        case 0x8007dc50u:
            r29 = r31 + 0x2eu;
            break;
        case 0x8007dc58u:
            r29 = r31 + 0x32u;
            break;
        case 0x8007dc60u:
            r29 = r31 + 0x36u;
            break;
        case 0x8007dc68u:
            r29 = r31 + 0x3au;
            break;
        case 0x8007dc70u:
            r29 = r31 + 0x3eu;
            break;
        case 0x8007dc78u:
            r29 = 0x42u;
            break;
        case 0x8007dc80u:
            r29 = 0x43u;
            break;
        case 0x8007dc88u:
            r29 = 0x44u;
            break;
        case 0x8007dc90u:
            r29 = 0x45u;
            break;
        case 0x8007dc98u:
            if (r31 != 1u) {
                r29 = 0x46u;
                break;
            }
            r29 = 0x47u;
            break;
        case 0x8007dcb0u:
            r29 = 0x48u;
            break;
        case 0x8007dcb8u:
            r29 = 0x49u;
            break;
        case 0x8007dcc0u:
            if (r31 != 1u) {
                r29 = 0x4au;
                break;
            }
            r29 = 0x4bu;
            break;
        case 0x8007dcd8u:
            r29 = 0x4cu;
            break;
        case 0x8007dce0u:
            r29 = 0x4du;
            break;
        case 0x8007dce8u:
            r29 = 0x4eu;
            break;
        case 0x8007dcf0u:
            r29 = 0x4fu;
            break;
        case 0x8007dcf8u:
            r29 = 0x50u;
            break;
        case 0x8007dd00u:
            r29 = 0x51u;
            break;
        case 0x8007dd08u:
            r29 = 0x52u;
            break;
        case 0x8007dd10u:
            r29 = 0x53u;
            break;
        case 0x8007dd18u:
            r29 = r29 + 5u;
            break;
        case 0x8007dd20u:
            r29 = r29 + 8u;
            break;
        case 0x8007dd28u:
            r29 = 0x54u;
            break;
        default:
            a.r[0] = (u32)param_1;
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
    return r29;
}
