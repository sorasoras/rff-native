#include "tc_rt.h"

void fn_80132ac0(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x450u) != 0u) {
        a.r[0] = (u32)param_1 + 4u;
        f1 = tc_callf(0x800f8388u, &a);
        r3 = rd32((u32)param_1 + 0x454u);
        if (r3 != 0u) {
            a.r[0] = r3;
            f1 = tc_callf(0x801370a8u, &a);
            r3 = rd32((u32)param_1 + 0x454u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 1u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3 + 0x28u) + 8u), &a);
            }
            wr32((u32)param_1 + 0x454u, 0u);
        }
        r3 = rd32((u32)param_1 + 0x45cu);
        if (r3 != 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r3;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x801384c4u, &a);
            r3 = rd32((u32)param_1 + 0x45cu);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 1u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3 + 0x28u) + 8u), &a);
            }
            wr32((u32)param_1 + 0x45cu, 0u);
        }
        r3 = rd32((u32)param_1 + 0x458u);
        if (r3 != 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r3;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x80137b54u, &a);
            r3 = rd32((u32)param_1 + 0x458u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 1u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3 + 0x28u) + 8u), &a);
            }
            wr32((u32)param_1 + 0x458u, 0u);
        }
        if (rd32((u32)param_1 + 0x450u) != 0u) {
            wr32((u32)param_1 + 0x450u, 0u);
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80191368u, &a);
        a.r[0] = (u32)param_1 + 0x64cu;
        f1 = tc_callf(0x8014b3bcu, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)param_1 + 0x464u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80221b20u, &a);
        r31 = (u32)param_1 + 0x7c8u;
        r30 = 0u;
        do {
            f1 = tc_callf(0x8020f160u, &a);
            r30 = r30 + 1u;
            r31 = r31 + 0x38u;
        } while ((s32)r30 < 5);
        r31 = rd32((u32)param_1 + 0x8e4u);
        if (r31 != 0u) {
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = r31;
            f1 = tc_callf(0x801b3a38u, &a);
            wr32((u32)param_1 + 0x8e4u, 0u);
        }
        r31 = rd32((u32)param_1 + 0x8ecu);
        if (r31 != 0u) {
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = r31;
            f1 = tc_callf(0x801b3a38u, &a);
            wr32((u32)param_1 + 0x8ecu, 0u);
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)param_1 + 0x48u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80119f2cu, &a);
        a.r[0] = 0x80571250u;
        (void)tc_call(0x80103074u, &a);
        a.r[0] = 0x804b9d30u;
        (void)tc_call(0x80100404u, &a);
    }
    return;
}
