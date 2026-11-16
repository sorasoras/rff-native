#include "tc_rt.h"

void fn_800c6620(u32 param_1, u32 param_2, s32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r0 = param_2 - 0x3cu;
    if (r0 > 7u) {
        return;
    }
    r0 = (r0 << 2u) & 0xfffffffcu;
    r3 = rd32(r0 - 0x7fcaaa6cu);
    sw_ = r3;
    switch (sw_) {
    case 0x800c6644u:
        r0 = ((u32)param_3 + (u32)rd8(0x80499099u)) & 0xffu;
        if (r0 >= 0x63u) {
            r0 = 0x63u;
        }
        wr8(0x80499099u, (u8)r0);
        return;
    case 0x800c6678u:
        r0 = ((u32)param_3 + (u32)rd8(0x8049909au)) & 0xffu;
        if (r0 >= 0x63u) {
            r0 = 0x63u;
        }
        wr8(0x8049909au, (u8)r0);
        return;
    case 0x800c66acu:
        r0 = ((u32)param_3 + (u32)rd8(0x8049909bu)) & 0xffu;
        if (r0 >= 0x63u) {
            r0 = 0x63u;
        }
        wr8(0x8049909bu, (u8)r0);
        return;
    case 0x800c66e0u:
        r0 = ((u32)param_3 + (u32)rd8(0x8049909cu)) & 0xffu;
        if (r0 >= 0x63u) {
            r0 = 0x63u;
        }
        wr8(0x8049909cu, (u8)r0);
        return;
    case 0x800c6714u:
        wr8(0x804990a0u, (u8)((u32)param_3 + (u32)rd8(0x804990a0u)));
        return;
    case 0x800c672cu:
        wr8(0x804990a1u, (u8)((u32)param_3 + (u32)rd8(0x804990a1u)));
        return;
    case 0x800c6744u:
        wr8(0x804990a2u, (u8)((u32)param_3 + (u32)rd8(0x804990a2u)));
        return;
    case 0x800c675cu:
        wr8(0x804990a3u, (u8)((u32)param_3 + (u32)rd8(0x804990a3u)));
        return;
    default:
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = (u32)param_3;
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
        return;
    }
}
