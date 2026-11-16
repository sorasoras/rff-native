#include "tc_rt.h"

s32 fn_80083190(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = (u32)param_2;
    a.r[2] = 0x808u;
    r3 = tc_call(0x80004338u, &a);
    f1 = tc_lastf();
    r28 = (u32)param_2 + 0x820u;
    r27 = 0u;
    do {
        a.r[0] = r27;
        r3 = tc_call(0x800bf01cu, &a);
        f1 = tc_lastf();
        r26 = rd32(r3);
        r30 = r3;
        r25 = 0u;
        r29 = 0u;
        while (r25 < r26) {
            a.r[0] = (u32)param_1;
            a.r[1] = r27;
            a.r[2] = r25;
            r3 = tc_call(0x8017b190u, &a);
            f1 = tc_lastf();
            r24 = rd32(r30 + 4u) + r29;
            r0 = (rd32(r24 + 0x14u) << 3u) & 0xfffffff8u;
            a.r[0] = r3;
            a.r[1] = r28;
            a.r[2] = rd32(r24 + 0x18u) * r0;
            r3 = tc_call(0x80004338u, &a);
            f1 = tc_lastf();
            r29 = r29 + 0x20u;
            r25 = r25 + 1u;
            r0 = (rd32(r24 + 0x14u) << 3u) & 0xfffffff8u;
            r0 = (rd32(r24 + 0x18u) * r0) + 0x1fu;
            r0 = r0 & 0xffffffe0u;
            r28 = r28 + r0;
        }
        r27 = r27 + 1u;
    } while (r27 < 0x19u);
    return (s32)r28;
}
