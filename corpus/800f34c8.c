#include "tc_rt.h"

void fn_800f34c8(u32 param_r3)
{
    u32 r3 = 0, r4 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((rd32(0x8057118cu) & 0x80u) != 0u) {
        a.f[0] = (f64)rdf32(rd32(param_r3 + 0x70u) + 0x54u);
        r3 = tc_call(0x802558e4u, &a);
        r29 = r3;
        r27 = rd32(param_r3 + 0x100u);
        a.r[0] = rd32(param_r3 + 0xacu);
        r3 = tc_call(0x8007dad4u, &a);
        r3 = rd32(r3 + 0xcu);
        a.r[0] = r3;
        r3 = tc_call(0x800f2a0cu, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r27 = r27 * 0x24u;
        r30 = r3;
        r26 = 0u;
        r28 = 0u;
        do {
            r3 = rd32(r30) + (r28 + r27);
            if ((u32)(s16)rd16(r3 + 4u) != 0xffffffffu && r29 == (u32)(s16)rd16(r3 + 6u)) {
                a.r[0] = param_r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
                f1 = tc_lastf();
                a.r[0] = param_r3;
                a.r[1] = (u32)(s16)rd16(rd32(r30) + (r28 + r27) + 4u);
                a.r[2] = r3;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(param_r3) + 0xbcu), &a);
                r4 = tc_lastr4();
            }
            r26 = r26 + 1u;
            r28 = r28 + 4u;
        } while (r26 < 6u);
        r3 = rd32(r30) + r27;
        if ((u32)(s16)rd16(r3 + 0x1cu) != 0xffffffffu && r29 == (u32)(s16)rd16(r3 + 6u)) {
            a.r[0] = param_r3;
            a.r[1] = (u32)(s16)rd16(r3 + 4u);
            (void)tc_call(0x800f3674u, &a);
        }
    }
    return;
}
