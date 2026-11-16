#include "tc_rt.h"

u32 fn_802a544c(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r29 = ((u32)param_1 * 0x34u) - 0x7fabf9e8u;
    if ((u32)rd8(r29 + 0x10u) != 0u) {
        r3 = 9u;
    } else {
        wr16(r29 + 0x14u, 0u);
        wr16(r29 + 0x16u, 0u);
        wr16(r29 + 0x1au, 0x100u);
        wr8(r29 + 0x11u, 1u);
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x11u;
        a.r[1] = r29 + 1u;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        r3 = tc_call(0x802a57a0u, &a);
        f1 = tc_lastf();
        wr16(r29 + 0x14u, (u16)r3);
        if ((r3 & 0xffffu) == 0u) {
            if ((u32)rd8(0x80540a19u) >= 2u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x1e0001u;
                a.r[1] = 0x8039532cu;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x8028cc54u, &a);
            }
            r0 = (u32)((s32)ppc_mulhw(1321528399, (s32)(r29 + 0x7fabf9e8u)) >> 4);
            r0 = r0 + ((r0 >> 0x1fu) & 1u);
            r0 = ppc_mulhwu(0x4ec4ec4fu, r0);
            a.r[0] = (r0 >> 4u) & 0xffu;
            a.r[1] = 1u;
            a.r[2] = 0xeu;
            a.r[3] = 0u;
            a.r[4] = 0x4ec4ec4fu;
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
            (void)tc_call(rd32(0x80540958u), &a);
        } else {
            wr8(r29 + 0x10u, 1u);
        }
        r3 = 0u;
    }
    return r3;
}
