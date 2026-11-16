#include "tc_rt.h"

u32 fn_801b449c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x28u);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x801b5990u, &a);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801b4358u, &a);
    if (rd32((u32)param_1 + 0x28u) != 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x801b434cu, &a);
        r4 = rd32((u32)param_1 + 0x28u);
        r0 = rd32(r3 + 0x3ecu);
        r3 = r4;
        r4 = r0 + rd32(r4 + 0x10u);
        a.r[0] = r3;
        a.r[1] = r4;
        r3 = tc_call(0x801b5438u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = r3;
        (void)tc_call(0x801b3eb4u, &a);
    }
    wr32((u32)param_1 + 0x128cu, rd32((u32)param_1 + 0x128cu) + 1u);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801b434cu, &a);
    if (rd32(r3 + 0x3f0u) != 0u) {
        wr32((u32)param_1 + 0x128cu, 0u);
    }
    a.r[0] = (u32)param_1;
    a.r[1] = rd32((u32)param_1 + 0x1284u);
    a.r[2] = rd32((u32)param_1 + 0x1288u);
    r3 = tc_call(0x801b3d0cu, &a);
    r29 = r3;
    if (r3 == 0xb7u) {
        wr32((u32)param_1 + 0x128cu, 0x2eu);
    }
    if ((s32)rd32((u32)param_1 + 0x128cu) > 45) {
        r0 = rd32((u32)param_1 + 0x68u);
        wr32((u32)param_1 + 0x128cu, 0u);
        if (r0 != r3) {
            a.r[0] = (u32)param_1 + 0x6cu;
            a.r[1] = r3;
            (void)tc_call(0x80210e90u, &a);
            wr32((u32)param_1 + 0x68u, r29);
            if (r29 != 0xb7u) {
                r5 = 0u;
                if (rd32((u32)param_1 + 0x1288u) != 0u) {
                    r5 = 0x29u;
                }
                a.r[0] = (u32)param_1 + 0x6cu;
                a.r[1] = r5 + rd32(rd32(0x80571398u) + 0xe4u);
                (void)tc_call(0x80210878u, &a);
                if (rd32((u32)param_1 + 0x1288u) == 0u) {
                    r28 = 0u;
                    r30 = 0u;
                    do {
                        a.r[0] = (u32)param_1 + 0x6cu;
                        a.r[1] = rd32((rd32((u32)param_1 + 0x1284u) * 0x38u) - 0x7fb65020u + r30 + 0x24u);
                        a.r[2] = 0xffffffffu;
                        (void)tc_call(0x80210c98u, &a);
                        r28 = r28 + 1u;
                        r30 = r30 + 4u;
                    } while ((s32)r28 < 12);
                } else {
                    a.r[0] = (u32)param_1 + 0x6cu;
                    (void)tc_call(0x80210df0u, &a);
                }
            }
        }
    }
    a.r[0] = (u32)param_1 + 0x6cu;
    (void)tc_call(0x8021076cu, &a);
    a.r[0] = (u32)param_1 + 0x2cu;
    a.r[1] = 1u;
    r3 = tc_call(0x800f857cu, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = (u32)param_1 + 0x6cu;
        (void)tc_call(0x80210928u, &a);
        r3 = 1u;
    }
    return r3;
}
