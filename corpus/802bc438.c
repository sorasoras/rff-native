#include "tc_rt.h"

void fn_802bc438(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r24 = 0, r25 = 0;
    TcArgs a = {0};
    a.r[0] = 3u;
    (void)tc_call(0x80227a38u, &a);
    r25 = 0u;
    for (;;) {
        r3 = rd32(0x80571bc4u);
        if ((s32)(r25 & 0xffu) >= (s32)rd16(r3 + 0x696u)) break;
        a.r[0] = rd32(0x80571bc4u);
        a.r[1] = rd32(0x80547180u);
        (void)tc_call(0x802bd450u, &a);
        a.r[0] = rd32(0x80571bc4u);
        a.r[1] = rd32(0x80547184u);
        (void)tc_call(0x802bd450u, &a);
        a.r[0] = rd32(0x80571bc4u);
        a.r[1] = rd32(0x80547188u);
        (void)tc_call(0x802bd450u, &a);
        a.r[0] = rd32(0x80571bc4u);
        a.r[1] = rd32(0x8054718cu);
        (void)tc_call(0x802bd450u, &a);
        a.r[0] = rd32(0x80571bc4u);
        a.r[1] = rd32(0x80547190u);
        (void)tc_call(0x802bdaacu, &a);
        a.r[0] = rd32(0x80571bc4u);
        a.r[1] = rd32(0x80547194u);
        (void)tc_call(0x802be134u, &a);
        r0 = rd32(0x80547198u);
        r24 = (r25 << 4u) & 0xff0u;
        wr32(0x80571c00u, 0x200u);
        r5 = rd32(0x80571bc4u);
        wr32(0x80571c20u, r0);
        r3 = rd32(0x80547180u);
        wr32(0x80571be0u, r5 + (((u32)rd8(r5 + 0x680u) << 8u) & 0xffffff00u));
        a.r[0] = r3;
        a.r[1] = r24;
        (void)tc_call(0x802bc684u, &a);
        a.r[0] = rd32(0x80547184u);
        a.r[1] = r24 + 8u;
        (void)tc_call(0x802bc684u, &a);
        a.r[0] = rd32(0x80547188u);
        a.r[1] = r24;
        (void)tc_call(0x802bcb10u, &a);
        a.r[0] = rd32(0x8054718cu);
        a.r[1] = r24 + 8u;
        (void)tc_call(0x802bcb10u, &a);
        r0 = rd32(0x8054719cu);
        r24 = (r24 >> 1u) & 0x7fffffffu;
        wr32(0x80571c00u, 0x100u);
        r5 = rd32(0x80571bc4u);
        wr32(0x80571c20u, r0);
        r3 = rd32(0x80547190u);
        wr32(0x80571be0u, r5 + (((u32)rd8(r5 + 0x686u) << 8u) & 0xffffff00u));
        a.r[0] = r3;
        a.r[1] = r24;
        (void)tc_call(0x802bc684u, &a);
        r5 = rd32(0x80571bc4u);
        wr32(0x80571c20u, rd32(0x805471a0u));
        r3 = rd32(0x80547194u);
        wr32(0x80571be0u, r5 + (((u32)rd8(r5 + 0x68cu) << 8u) & 0xffffff00u));
        a.r[0] = r3;
        a.r[1] = r24;
        (void)tc_call(0x802bc684u, &a);
        r4 = rd32(0x80571bc4u);
        if ((u32)rd8(r4 + 0x6a9u) != 0u) {
            r3 = (u32)rd16(r4 + 0x6acu) - 1u;
            wr16(r4 + 0x6acu, (u16)r3);
            if ((r3 & 0xffffu) == 0u) {
                r3 = rd32(0x80571bc4u);
                wr16(r3 + 0x6acu, rd16(r3 + 0x6aau));
                r4 = rd32(0x80571bc4u);
                wr32(r4 + 0x6a4u, ((rd32(r4 + 0x6a4u) + 6u) & 0xfffffff8u) + 1u);
                r3 = rd32(0x80571bc4u);
                if (rd32(r3 + 0x6a4u) > 0x21u) {
                    wr32(r3 + 0x6a4u, 0x21u);
                }
                wr16(rd32(0x80571bc4u) + 0x684u, 0u);
                wr16(rd32(0x80571bc4u) + 0x68au, 0u);
                wr16(rd32(0x80571bc4u) + 0x690u, 0u);
            }
        }
        r25 = r25 + 1u;
    }
    r3 = rd32(r3 + 0x6b0u);
    a.r[0] = r3;
    a.r[1] = rd32(0x80547198u);
    a.r[2] = 0x2000u;
    (void)tc_call(0x80227998u, &a);
    a.r[0] = rd32(rd32(0x80571bc4u) + 0x6b4u);
    a.r[1] = rd32(0x8054719cu);
    a.r[2] = 0x800u;
    (void)tc_call(0x80227998u, &a);
    a.r[0] = rd32(rd32(0x80571bc4u) + 0x6b8u);
    a.r[1] = rd32(0x805471a0u);
    a.r[2] = 0x800u;
    (void)tc_call(0x80227998u, &a);
    r4 = rd32(0x80571bc4u);
    wr32(r4 + 0x6b0u, rd32(r4 + 0x6b0u) + 0x2000u);
    r4 = rd32(0x80571bc4u);
    wr32(r4 + 0x6b4u, rd32(r4 + 0x6b4u) + 0x800u);
    r4 = rd32(0x80571bc4u);
    wr32(r4 + 0x6b8u, rd32(r4 + 0x6b8u) + 0x800u);
    return;
}
