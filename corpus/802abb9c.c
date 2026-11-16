#include "tc_rt.h"

void fn_802abb9c(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r12 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x802acd40u, &a);
    f1 = tc_lastf();
    r31 = r3;
    if ((u32)rd8(0x8054161cu) >= 4u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x90003u;
        a.r[1] = 0x80396cbcu;
        a.r[2] = (u32)param_2;
        a.r[3] = param_3;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x8028cc84u, &a);
    }
    if (r31 == 0u) {
        a.r[0] = (u32)param_2;
        r3 = tc_call(0x802acd94u, &a);
        f1 = tc_lastf();
        r31 = r3;
        if (r3 == 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = (u32)param_2;
            a.r[2] = 0u;
            a.r[3] = 1u;
            (void)tc_call(0x802af86cu, &a);
            return;
        }
        wr8((u32)param_1 + (u32)param_2 + 0x24u, rd8(r3));
    }
    if (param_3 != 0u && param_3 < (u32)rd16(r31 + 0x14u)) {
        wr16(r31 + 0x14u, (u16)param_3);
    }
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = (u32)param_1;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x802b1624u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = (u32)rd16(r31 + 0x12u);
    a.r[3] = 0u;
    f1 = tc_callf(0x802af86cu, &a);
    r12 = rd32(r31 + 0x8cu);
    if (r12 != 0u && (rd32(r31 + 0x88u) & 0x200u) != 0u) {
        a.r[0] = 0x200u;
        a.r[1] = (u32)rd8(r31);
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(r12, &a);
    }
    r12 = rd32(r31 + 0x90u);
    if (r12 != 0u) {
        a.r[0] = 0u;
        a.r[1] = (u32)rd8(r31);
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        (void)tc_call(r12, &a);
    }
    wr8(r31 + 2u, 2u);
    return;
}
