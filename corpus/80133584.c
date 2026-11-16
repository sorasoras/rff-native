#include "tc_rt.h"

void fn_80133584(s32 param_1)
{
    u32 r3 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
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
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x450u);
    a.r[1] = 0x8033a2eau;
    a.r[2] = 0u;
    r3 = tc_call(0x800fe848u, &a);
    f1 = tc_lastf();
    wr32((u32)param_1 + 0x20u, r3);
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
    (void)tc_call(0x800ff574u, &a);
    r27 = rd32(rd32((u32)param_1 + 0x1cu) + 0x454u);
    r28 = 0u;
    r30 = 0u;
    wr16(0x817fdfd8u, 0x2e8u);
    wr8(0x817fdfdau, 1u);
    wr8(0x817fdfdbu, 1u);
    while ((s32)r28 < (s32)rd32(r27 + 0xcu)) {
        a.r[0] = r30 - 0x7fb66dc0u;
        a.r[1] = 0x817fdfd8u;
        a.r[2] = 4u;
        (void)tc_call(0x80004338u, &a);
        r28 = r28 + 1u;
        r30 = r30 + 4u;
    }
    r26 = 0u;
    r30 = 0u;
    r28 = 0u;
    while ((s32)r26 < (s32)rd32(r27 + 0xcu)) {
        a.r[0] = r30 - 0x7fb66dc0u;
        a.r[1] = rd32(rd32(r27 + 0x2cu) + r28) + 0xbcu;
        a.r[2] = 4u;
        (void)tc_call(0x80004338u, &a);
        r28 = r28 + 4u;
        r26 = r26 + 1u;
        r30 = r30 + 4u;
    }
    r27 = 0u;
    r29 = 0u;
    r26 = rd32(rd32((u32)param_1 + 0x1cu) + 0x458u);
    do {
        a.r[0] = rd32(rd32(r26 + 0x2cu) + r29) + 0xbcu;
        (void)tc_call(0x80082354u, &a);
        r27 = r27 + 1u;
        r29 = r29 + 4u;
    } while ((s32)r27 < 6);
    return;
}
