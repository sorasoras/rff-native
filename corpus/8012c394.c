#include "tc_rt.h"

void fn_8012c394(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r29 = 0u;
    r6 = rd32((u32)param_1 + 0xcu);
    r3 = rd32(0x80339fa4u);
    r0 = rd32(0x80339fa8u);
    wr32(0x817fdfd8u, rd32(0x80339fa0u));
    wr32(0x817fdfdcu, r3);
    wr32(0x817fdfe0u, r0);
    if (r6 == 1u) {
        r29 = 0u;
    } else {
        if (r6 == 6u) {
            r29 = 1u;
        } else {
            if (r6 == 7u) {
                r29 = 2u;
            }
        }
    }
    a.r[0] = 0x54u;
    r3 = tc_call(0x801bfa94u, &a);
    r28 = r3;
    r30 = (u32)param_1;
    r27 = 0u;
    while ((s32)r27 < (s32)(rd32((u32)param_1 + 0xcu) * 0xau)) {
        a.r[0] = 0x68u;
        r3 = tc_call(0x801ed134u, &a);
        r31 = r3;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r28;
            a.r[2] = 0xffffffffu;
            (void)tc_call(0x801ec1f4u, &a);
        }
        wr32(r30 + 0xb8u, r31);
        r30 = r30 + 4u;
        r27 = r27 + 1u;
    }
    a.r[0] = 0x21u;
    r3 = tc_call(0x801bfb7cu, &a);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 0u;
    r3 = tc_call(0x800f9458u, &a);
    f1 = tc_lastf();
    wr32((u32)param_1 + 0x44u, r3);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x800fef2cu, &a);
    a.r[0] = (u32)param_1 + 0x48u;
    a.r[1] = rd32((u32)param_1 + 0x44u);
    (void)tc_call(0x801f0e3cu, &a);
    a.r[0] = (u32)param_1 + 0x48u;
    a.r[1] = 0x80339ff3u;
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = (u32)param_1 + 0x48u;
    a.r[1] = 0u;
    (void)tc_call(0x801f10b8u, &a);
    a.r[0] = rd32(((r29 << 2u) & 0xfffffffcu) - 0x7e802028u);
    a.r[1] = 0x8012c4ccu;
    a.r[2] = (u32)param_1;
    r3 = tc_call(0x800f939cu, &a);
    wr32((u32)param_1 + 0x30u, r3);
    return;
}
