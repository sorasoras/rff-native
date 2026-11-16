#include "tc_rt.h"

void fn_8014c3e8(f64 param_1, f64 param_2, f64 param_3, f64 param_4, u32 param_5, u32 param_6, u32 param_7, s32 param_8, u32 param_9)
{
    u32 r3 = 0, r4 = 0, r7 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    r7 = param_5 + (param_6 * 0xcu);
    wrf32d(r7 + 0x40u, (f64)(f32)param_1);
    r29 = r7 + 0x40u;
    wrf32d(r7 + 0x44u, (f64)(f32)param_2);
    wrf32d(r7 + 0x48u, (f64)(f32)param_3);
    a.r[0] = param_9;
    r3 = tc_call(0x802550d4u, &a);
    if (r3 == 0u) {
        if ((u32)param_8 != 0xffffffffu) {
            r28 = (param_6 << 2u) & 0xfffffffcu;
            a.r[0] = rd32(rd32(param_5 + 4u) + 0x70u);
            a.r[1] = (u32)param_8;
            r3 = tc_call(0x80031cf8u, &a);
            wr32(param_5 + r28 + 0x34u, r3);
        } else {
            r28 = (param_6 << 2u) & 0xfffffffcu;
            wr32(param_5 + r28 + 0x34u, 0u);
        }
        r28 = param_5 + r28 + 0x28u;
        a.f[0] = param_4;
        a.r[0] = rd32(param_5 + 4u);
        a.r[1] = param_7;
        a.r[2] = (u32)param_8;
        a.r[3] = r29;
        r3 = tc_call(0x800aeaf0u, &a);
        wr32(r28, r3);
    } else {
        a.r[0] = rd32(rd32(param_5 + 4u) + 0x70u);
        a.r[1] = param_9;
        r3 = tc_call(0x80031be0u, &a);
        r7 = param_5 + ((param_6 << 2u) & 0xfffffffcu);
        wr32(r7 + 0x34u, r3);
        r28 = r7 + 0x28u;
        a.f[0] = param_4;
        a.r[0] = rd32(param_5 + 4u);
        a.r[1] = param_7;
        a.r[2] = param_9;
        a.r[3] = r29;
        r3 = tc_call(0x800aeae0u, &a);
        wr32(r28, r3);
    }
    r4 = rd32(r28);
    if (r4 != 0u) {
        wr32(r4 + 0x20u, 0xffffffffu);
        wr32(r4 + 0x24u, 0u);
    }
    r3 = rd32(param_5 + 0x64u);
    wr32(param_5 + 0x64u, r3 | (r3 ^ (((param_6 & 0x20u) != 0u) ? 0u : (1u << (param_6 & 0x1fu)))));
    return;
}
