#include "tc_rt.h"

u32 fn_8009e294(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 1u;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r5 = rd32((u32)param_1 + 0x10u);
    r4 = rd32(r5 + 0x10u);
    a.r[0] = r4 + (((rd32((u32)param_1 + 0x24u) & 0xffffu) + 2u) & 0xffffu);
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32((u32)param_1 + 0xcu)), &a);
    f1 = tc_lastf();
    r0 = (u32)rd8((u32)param_1 + 0x68u);
    r30 = r3 & 0xffffu;
    c0lt = (s32)r0 < 2;
    if (r0 == 2u) {
        r4 = (r30 << 1u) & 0x1fffeu;
        r6 = rd32(rd32((u32)param_1 + 0x10u) + 0x10u);
        r5 = ((((rd32((u32)param_1 + 0x24u) & 0xffffu) + 2u) & 0xffffu) + 2u) & 0xffffu;
        a.r[0] = ((rd32((u32)param_1 + 0x6cu) << 2u) & 0x3fffcu) + (r6 + ((r5 + r4) & 0xffffu));
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = r6;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32((u32)param_1 + 0xcu) + 4u), &a);
        a.r[0] = rd32((u32)param_1 + 0xcu);
        a.r[1] = r3;
        a.r[2] = 0u;
        r3 = tc_call(0x8009c3c4u, &a);
        if ((u32)(s8)r3 != 0u) {
            r0 = rd32((u32)param_1 + 0x6cu) + 1u;
            wr32((u32)param_1 + 0x6cu, r0);
            if (r0 >= r30) {
                wr8((u32)param_1 + 0x68u, 3u);
            }
            r31 = 0u;
        }
    } else if (!c0lt) {
        if ((s32)r0 < 4) {
            a.r[0] = rd32((u32)param_1 + 0xcu);
            a.r[1] = r30;
            a.r[2] = 0x817fdfe8u;
            r3 = tc_call(0x8009c3fcu, &a);
            f1 = tc_lastf();
            if ((u32)(s8)r3 != 0u) {
                r0 = rd32((u32)param_1 + 0x24u);
                r31 = 0u;
                wr8((u32)param_1 + 0x68u, 0u);
                r0 = (r0 & 0xffffu) + 2u;
                r5 = rd32(rd32((u32)param_1 + 0x10u) + 0x10u);
                r4 = ((r0 & 0xffffu) + 2u) & 0xffffu;
                a.r[0] = ((rd32(0x817fdfe8u) << 1u) & 0x1fffeu) + (r5 + r4);
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32((u32)param_1 + 0xcu)), &a);
                wr32((u32)param_1 + 0x24u, r3 & 0xffffu);
            }
        }
    } else {
        c0lt = (s32)r0 < 0;
        if (r0 == 0u) {
            wr8((u32)param_1 + 0x68u, 1u);
        } else if (c0lt) {
            return r31;
        }
        a.r[0] = rd32((u32)param_1 + 0xcu);
        a.r[1] = r30;
        a.r[2] = 0u;
        r3 = tc_call(0x8009c3e0u, &a);
        if ((u32)(s8)r3 != 0u) {
            wr8((u32)param_1 + 0x68u, 2u);
            r31 = 0u;
            wr32((u32)param_1 + 0x6cu, 0u);
        }
    }
    return r31;
}
