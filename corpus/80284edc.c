#include "tc_rt.h"

u32 fn_80284edc(void)
{
    u32 c0eq = 0, r3 = 0, r28 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80273734u, &a);
    if (((((1u - r3) | (r3 - 1u)) >> 0x1fu) & 1u) == 0u) {
        r3 = 0x16u;
    } else {
        a.r[0] = 0x8050f851u;
        a.r[1] = 0u;
        a.r[2] = 0x2bcu;
        (void)tc_call(0x8000443cu, &a);
        r3 = tc_call(0x8022c2b0u, &a);
        r28 = (u32)rd8(0x8050f112u);
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        wr8(0x8050f850u, (u8)r28);
        r29 = 0u;
        r31 = rd32(0x8050f164u);
        while (r31 != 0u) {
            r28 = (r29 & 0xffu) * 0x46u;
            a.r[0] = r28 - 0x7faf07afu;
            a.r[1] = rd32(r31) + 0x40u;
            a.r[2] = 6u;
            (void)tc_call(0x80004338u, &a);
            a.r[0] = r28 - 0x7faf07a9u;
            a.r[1] = rd32(r31);
            a.r[2] = 0x40u;
            (void)tc_call(0x80004338u, &a);
            r31 = rd32(r31 + 8u);
            r29 = r29 + 1u;
        }
        (void)tc_call(0x80289ba4u, &a);
        a.r[0] = 0x8050f850u;
        r3 = tc_call(0x80275290u, &a);
        c0eq = r3 == 0u;
        r3 = 0x16u;
        if (!c0eq) {
            r3 = 0x19u;
        }
    }
    return r3;
}
