#include "tc_rt.h"

u32 fn_80034a78(s32 param_1)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r0 = (u32)rd8((u32)param_1 + 3u);
    if (r0 != 0u) {
        if (r0 != 1u) {
            if (r0 != 2u) {
                if (r0 != 3u) {
                    return 0u;
                }
                r0 = (u32)rd8((u32)param_1 + 2u);
                c0lt = (s32)r0 < 2;
                if (r0 == 2u) {
                    return 0x80033f7cu;
                }
                if (!c0lt) {
                    if ((s32)r0 < 4) {
                        return 0x800349d0u;
                    }
                } else {
                    c0lt = (s32)r0 < 0;
                    if (r0 == 0u) {
                        return 0x800328fcu;
                    }
                    if (!c0lt) {
                        return 0x80033288u;
                    }
                }
                return 0u;
            }
            r0 = (u32)rd8((u32)param_1 + 2u);
            c0lt = (s32)r0 < 2;
            if (r0 == 2u) {
                return 0x80033e34u;
            }
            if (!c0lt) {
                if ((s32)r0 < 4) {
                    return 0x80034840u;
                }
            } else {
                c0lt = (s32)r0 < 0;
                if (r0 == 0u) {
                    return 0x800326f4u;
                }
                if (!c0lt) {
                    return 0x80033140u;
                }
            }
            return 0u;
        }
        r0 = (u32)rd8((u32)param_1 + 2u);
        c0lt = (s32)r0 < 2;
        if (r0 == 2u) {
            return 0x80033b34u;
        }
        if (!c0lt) {
            if ((s32)r0 < 4) {
                return 0x80034768u;
            }
        } else {
            c0lt = (s32)r0 < 0;
            if (r0 == 0u) {
                return 0x800325c4u;
            }
            if (!c0lt) {
                return 0x80032c20u;
            }
        }
        return 0u;
    }
    r0 = (u32)rd8((u32)param_1 + 2u);
    if (r0 <= 6u) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r3 = rd32(r0 - 0x7fcb3c00u);
        sw_ = r3;
        switch (sw_) {
        case 0x80034aa8u:
            return 0x800324f4u;
        case 0x80034ab4u:
            return 0x800329e0u;
        case 0x80034ac0u:
            return 0x80033914u;
        case 0x80034accu:
            return 0x800346d0u;
        case 0x80034af0u:
            break;
        case 0x80034ad8u:
            return 0x80034600u;
        case 0x80034ae4u:
            return 0x80034668u;
        default:
            a.r[0] = r3;
            a.r[1] = 0u;
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
    return 0u;
}
