#include "tc_rt.h"

void fn_8003a678(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    r3 = tc_call(0x800a7f50u, &a);
    r29 = rd32(param_r3 + 0x20u);
    r30 = r3;
    a.r[0] = rd32(r29 + 0x28u);
    r3 = tc_call(0x8003a4c4u, &a);
    r28 = r3;
    a.r[0] = rd32(r29 + 0x2cu);
    r3 = tc_call(0x8003a554u, &a);
    f31 = (f64)rdf32(0x80571f14u);
    r27 = r3;
    f30 = (f64)rdf32(0x80571f20u);
    r26 = 0u;
    r25 = 0u;
    r31 = 0u;
    while ((s32)r25 < (s32)rd16(param_r3 + 0x16u)) {
        f1 = (f64)(f32)(f30 * (f64)rdf32(r30));
        if ((f64)(f32)ppc_fabs(f1) > f30) {
            r4 = (u32)(s16)rd16(rd32(r29 + 0x5cu) + r31);
            r3 = rd32(rd32(param_r3 + 0x1cu) + 0x20u);
            if ((s32)r4 >= 0 && r4 < rd32(r3 + 0x10u)) {
                r0 = rd32(r3 + 0x1cu);
                r3 = rd32(r3 + 0x14u);
                r0 = r0 * r4;
                r23 = r3 + r0;
            } else {
                r23 = 0u;
            }
            if (r23 != 0u) {
                f29 = (f64)(f32)ppc_fabs(f1);
                a.f[0] = f1;
                a.r[0] = r28;
                a.r[1] = rd32(r29 + 0x28u);
                a.r[2] = rd32(r23 + 0x28u);
                (void)tc_call(0x8003a5b4u, &a);
                a.f[0] = f29;
                a.f[1] = (f64)(f32)(f31 - f29);
                a.r[0] = r27;
                a.r[1] = rd32(r29 + 0x2cu);
                a.r[2] = rd32(r23 + 0x2cu);
                (void)tc_call(0x8003a610u, &a);
                r26 = 1u;
            }
        }
        r30 = r30 + 4u;
        r31 = r31 + 4u;
        r25 = r25 + 1u;
    }
    if (r28 != 0u) {
        r3 = rd32(r29 + 0x28u);
        r0 = rd32(r3 + 4u);
        r23 = (r0 >> 8u) & 0xffu;
        r24 = (r0 >> 0x18u) & 0xfu;
        if (r26 != 0u) {
            a.r[0] = r28;
            a.r[1] = rd32(r3) * 6u;
            (void)tc_call(0x80227768u, &a);
            a.r[0] = 0u;
            a.r[1] = 9u;
            a.r[2] = 1u;
            a.r[3] = 3u;
            a.r[4] = r24;
            (void)tc_call(0x8024f8a4u, &a);
            a.r[0] = 9u;
            a.r[1] = r28;
            a.r[2] = r23;
            (void)tc_call(0x8024fef4u, &a);
        } else {
            a.r[0] = 0u;
            a.r[1] = 9u;
            a.r[2] = 1u;
            a.r[3] = 3u;
            a.r[4] = r24;
            (void)tc_call(0x8024f8a4u, &a);
            a.r[0] = 9u;
            a.r[1] = rd32(rd32(r29 + 0x28u) + 8u);
            a.r[2] = r23;
            (void)tc_call(0x8024fef4u, &a);
        }
    }
    if (r27 != 0u) {
        if (r26 != 0u) {
            a.r[0] = r27;
            a.r[1] = rd32(rd32(r29 + 0x2cu)) * 0xcu;
            (void)tc_call(0x80227768u, &a);
            a.r[0] = 0u;
            a.r[1] = 0xau;
            a.r[2] = 0u;
            a.r[3] = 4u;
            a.r[4] = 0u;
            (void)tc_call(0x8024f8a4u, &a);
            a.r[0] = 0xau;
            a.r[1] = r27;
            a.r[2] = 0xcu;
            (void)tc_call(0x8024fef4u, &a);
        } else {
            a.r[0] = 0u;
            a.r[1] = 0xau;
            a.r[2] = 0u;
            a.r[3] = 1u;
            a.r[4] = 6u;
            (void)tc_call(0x8024f8a4u, &a);
            a.r[0] = 0xau;
            a.r[1] = rd32(rd32(r29 + 0x2cu) + 8u);
            a.r[2] = 3u;
            (void)tc_call(0x8024fef4u, &a);
        }
    }
    return;
}
