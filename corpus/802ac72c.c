#include "tc_rt.h"

void fn_802ac72c(u32 param_1, u32 param_2, u32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r12 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r29 = 0u;
    if ((u32)rd8(0x8054161cu) >= 4u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x90003u;
        a.r[1] = 0x80396e78u;
        a.r[2] = param_3;
        a.r[3] = 0x80541208u;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x8028cc6cu, &a);
    }
    if (param_2 != 0u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        r3 = tc_call(0x802acd40u, &a);
        r29 = r3;
        if (r3 == 0u) {
            return;
        }
        wr8(r3 + 0x24u, (u8)((ppc_cntlzw(param_3) >> 5u) & 0xffu));
    } else {
        wr8(param_1 + 0x71u, (u8)param_3);
    }
    r28 = 0u;
    r30 = 0x80541270u;
    for (;;) {
        if (param_2 == 0u) {
            r29 = r30;
            if ((u32)rd8(r30 + 1u) == 0u || rd32(r30 + 0x6cu) != param_1 || (u32)rd8(r30 + 0x68u) != 4u) {
                r28 = r28 + 1u;
                r30 = r30 + 0xa4u;
                if ((s32)r28 < 5) continue;
                break;
            }
        }
        a.r[0] = r29;
        r3 = tc_call(0x802ace1cu, &a);
        r31 = r3;
        a.r[0] = r29;
        r3 = tc_call(0x802ac85cu, &a);
        f1 = tc_lastf();
        r12 = rd32(r29 + 0x8cu);
        r3 = r31 | r3;
        r3 = r3 & rd32(r29 + 0x88u);
        if (r12 != 0u && r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = (u32)rd8(r29);
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            (void)tc_call(r12, &a);
        }
        if (param_2 != 0u) break;
        r28 = r28 + 1u;
        r30 = r30 + 0xa4u;
        if ((s32)r28 >= 5) break;
    }
    return;
}
