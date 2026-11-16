#include "tc_rt.h"

u32 fn_80196c9c(s32 param_1, u32 param_2, u32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    r9 = 0u;
    r6 = 0u;
    ctr = 0x1fu;
    for (;;) {
        f1 = (f64)rdf32(param_2);
        if ((f64)rdf32(r6 - 0x7fc8fa10u) < f1) {
            r7 = r6 - 0x7fc8fa10u;
            if (f1 < (f64)rdf32(r7 + 8u)) {
                f1 = (f64)rdf32(param_2 + 4u);
                if ((f64)rdf32(r7 + 4u) < f1 && f1 < (f64)rdf32(r7 + 0xcu)) break;
            }
        }
        r9 = r9 + 1u;
        r6 = r6 + 0x10u;
        ctr = ctr - 1u;
        if (ctr == 0u) {
            r3 = 0u;
            return r3;
        }
    }
    r6 = (r9 << 2u) & 0xfffffffcu;
    wr8(param_3, (u8)rd32(r6 - 0x7fc8f820u));
    wr8((u32)param_1 + 0x793u, (u8)rd32(r6 - 0x7fc8f820u));
    r0 = rd32(r6 - 0x7fc8f820u) - 0xcu;
    if (r0 <= 0x32u) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r3 = rd32(r0 - 0x7fc8f7a4u);
        sw_ = r3;
        switch (sw_) {
        case 0x80196e30u:
            a.r[0] = 0x58u;
            r3 = tc_call(0x8014d9a4u, &a);
            if (r3 != 0u) break;
            r3 = 0u;
            return r3;
        case 0x80196e48u:
            break;
        case 0x80196e18u:
            a.r[0] = 0x57u;
            r3 = tc_call(0x8014d9a4u, &a);
            if (r3 != 0u) break;
            r3 = 0u;
            return r3;
        case 0x80196dc4u:
            a.r[0] = 0x48u;
            r3 = tc_call(0x8014d9a4u, &a);
            if (r3 == 0u) break;
            wr8(param_3, 0x19u);
            break;
        case 0x80196de0u:
            a.r[0] = 0x2049u;
            r3 = tc_call(0x8014d9a4u, &a);
            if (r3 != 3u) break;
            wr8(param_3, 0x1au);
            break;
        case 0x80196dfcu:
            a.r[0] = 0x4bu;
            r3 = tc_call(0x8014d9a4u, &a);
            if (r3 == 0u) break;
            wr8(param_3, 0x1bu);
            break;
        case 0x80196d48u:
            if ((u32)rd8(0x80492833u) != 0u) break;
            r3 = 0u;
            return r3;
        case 0x80196d64u:
            a.r[0] = 0x2cu;
            r3 = tc_call(0x8014d9a4u, &a);
            if (r3 != 0u) break;
            r3 = 0u;
            return r3;
        case 0x80196d7cu:
            a.r[0] = 0x202du;
            r3 = tc_call(0x8014d9a4u, &a);
            if (r3 != 0u) break;
            r3 = 0u;
            return r3;
        case 0x80196dacu:
            a.r[0] = 0x2au;
            r3 = tc_call(0x8014d9a4u, &a);
            if (r3 != 0u) break;
            r3 = 0u;
            return r3;
        case 0x80196d94u:
            a.r[0] = 0x2bu;
            r3 = tc_call(0x8014d9a4u, &a);
            if (r3 != 0u) break;
            r3 = 0u;
            return r3;
        default:
            a.r[0] = r3;
            a.r[1] = 0x803707e0u;
            a.r[2] = param_3;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = 0x803705f0u;
            a.r[6] = r9;
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
    r3 = 1u;
    return r3;
}
