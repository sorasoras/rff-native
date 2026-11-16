#include "tc_rt.h"

void fn_80286afc(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    (void)tc_call(0x80289ba4u, &a);
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = r3;
    r3 = tc_call(0x8022c2b0u, &a);
    if (((u32)rd8(0x8050f10cu) == 0u && (u32)rd8(0x8050f10du) == 0u) && ((u32)rd8(0x8050f10fu) == 4u && (u32)rd8(0x8050f110u) == 5u)) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r0 = 0u;
    } else {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r0 = 1u;
    }
    if (r0 != 0u) {
        a.r[0] = 0x8050f810u;
        (void)tc_call(0x80226a70u, &a);
    }
    a.r[0] = 0x8050f851u;
    a.r[1] = 0u;
    a.r[2] = 0x2bcu;
    (void)tc_call(0x8000443cu, &a);
    r25 = 0x8050f851u;
    r27 = rd32(0x8050f164u);
    r26 = 0x8050f857u;
    while (r27 != 0u) {
        a.r[0] = r25;
        a.r[1] = rd32(r27) + 0x40u;
        a.r[2] = 6u;
        (void)tc_call(0x80004338u, &a);
        a.r[0] = r26;
        a.r[1] = rd32(r27);
        a.r[2] = 0x40u;
        (void)tc_call(0x80004338u, &a);
        r27 = rd32(r27 + 8u);
        r25 = r25 + 0x46u;
        r26 = r26 + 0x46u;
    }
    r3 = tc_call(0x8022c2b0u, &a);
    r25 = (u32)rd8(0x8050f112u);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    wr8(0x8050f850u, (u8)r25);
    a.r[0] = 0x80510e61u;
    a.r[1] = 0u;
    a.r[2] = 0x204u;
    (void)tc_call(0x8000443cu, &a);
    if (param_r3 != 0u) {
        r28 = rd32(0x8050f114u);
        r25 = 0x80510e61u;
        r26 = 0x80510e67u;
        r27 = 0x80510ea7u;
        while (r28 != 0u) {
            a.r[0] = r25;
            a.r[1] = rd32(r28) + 0x40u;
            a.r[2] = 6u;
            (void)tc_call(0x80004338u, &a);
            a.r[0] = r26;
            a.r[1] = rd32(r28);
            a.r[2] = 0x40u;
            (void)tc_call(0x80004338u, &a);
            a.r[0] = r27;
            a.r[1] = rd32(r28) + 0x46u;
            a.r[2] = 0x10u;
            (void)tc_call(0x80004338u, &a);
            r28 = rd32(r28 + 8u);
            r25 = r25 + 0x56u;
            r26 = r26 + 0x56u;
            r27 = r27 + 0x56u;
        }
        r3 = tc_call(0x8022c2b0u, &a);
        r25 = (u32)rd8(0x8050f113u);
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        wr8(0x80510e60u, (u8)r25);
    } else {
        wr8(0x80510e60u, 0u);
    }
    wr8(0x8050f111u, 1u);
    a.r[0] = 0x8050f810u;
    (void)tc_call(0x8022671cu, &a);
    r3 = tc_call(0x8023029cu, &a);
    r4 = tc_lastr4();
    a.r[0] = 0x8050f810u;
    a.r[1] = r4;
    a.r[2] = r3;
    a.r[3] = r4;
    a.r[4] = 0u;
    a.r[5] = ((ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu) * 0xau;
    a.r[6] = 0x8028660cu;
    (void)tc_call(0x802269ecu, &a);
    wr8(0x8050f808u, 4u);
    a.r[0] = r29;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
