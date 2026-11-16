#include "tc_rt.h"

void fn_802877a8(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r8 = (u32)rd8(0x80577331u);
    r7 = (u32)rd8(0x80577332u);
    r6 = (u32)rd8(0x80577333u);
    r5 = (u32)rd8(0x80577334u);
    r4 = (u32)rd8(0x80577335u);
    r0 = (u32)rd8(0x80577336u);
    wr8(0x817fdfecu, rd8(0x80577330u));
    wr8(0x817fdfedu, (u8)r8);
    wr8(0x817fdfeeu, (u8)r7);
    wr8(0x817fdfefu, (u8)r6);
    wr8(0x817fdfe8u, (u8)r5);
    wr8(0x817fdfe9u, (u8)r4);
    wr8(0x817fdfeau, (u8)r0);
    (void)tc_call(0x80289ba4u, &a);
    a.r[0] = 0x817fdfecu;
    (void)tc_call(0x8028fe68u, &a);
    a.r[0] = 0x817fdfe8u;
    (void)tc_call(0x80296614u, &a);
    a.r[0] = 0x80288c74u;
    (void)tc_call(0x80296834u, &a);
    a.r[0] = 0x80288f68u;
    (void)tc_call(0x802966b4u, &a);
    a.r[0] = 3u;
    a.r[1] = 0x8050f80au;
    a.r[2] = 0x802892a4u;
    f1 = tc_callf(0x80298b30u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0x8000u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x80296904u, &a);
    a.r[0] = 5u;
    (void)tc_call(0x80293bc8u, &a);
    a.r[0] = 0xc80u;
    (void)tc_call(0x80293f94u, &a);
    r29 = 0x8050f100u;
    r30 = 0x8050f224u;
    r28 = 0u;
    do {
        if ((u32)rd8(r29 + 0x13du) == 1u) {
            a.r[0] = r30;
            (void)tc_call(0x80287938u, &a);
        }
        r28 = r28 + 1u;
        r30 = r30 + 0x60u;
        r29 = r29 + 0x60u;
    } while ((s32)r28 < 10);
    r30 = 0x8050f100u;
    r29 = 0x8050f5e4u;
    r28 = 0u;
    do {
        if ((u32)rd8(r30 + 0x4fdu) == 1u) {
            a.r[0] = r29;
            (void)tc_call(0x80287938u, &a);
        }
        r28 = r28 + 1u;
        r29 = r29 + 0x60u;
        r30 = r30 + 0x60u;
    } while ((s32)r28 < 6);
    r3 = tc_call(0x8022c2b0u, &a);
    wr8(0x8050f808u, 3u);
    wr32(0x80571b30u, 1u);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    r3 = tc_call(0x8022c2b0u, &a);
    wr8(0x8050f7ebu, 0u);
    wr8(0x8050f7eau, 1u);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    a.r[0] = 0u;
    a.r[1] = 1u;
    (void)tc_call(0x8028feccu, &a);
    return;
}
