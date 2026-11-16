#include "tc_rt.h"

void fn_802508fc(void)
{
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(0x80576c88u);
    r30 = rd32(r31 + 0x5fcu);
    if ((r30 & 1u) != 0u) {
        (void)tc_call(0x80252a04u, &a);
    }
    if ((r30 & 2u) != 0u) {
        (void)tc_call(0x80253308u, &a);
    }
    if ((r30 & 4u) != 0u) {
        wr8(0xcc008000u, 0x61u);
        r5 = rd32(0x80576c88u);
        wr32(0xcc008000u, rd32(r5 + 0x254u));
        wr16(r5 + 2u, 0u);
    }
    if ((r30 & 8u) != 0u) {
        (void)tc_call(0x8024f4e0u, &a);
    }
    if ((r30 & 0x10u) != 0u) {
        (void)tc_call(0x8024fc08u, &a);
    }
    if ((r30 & 0x18u) != 0u) {
        (void)tc_call(0x8024f590u, &a);
    }
    r30 = r30 & 0xffffff00u;
    if (r30 != 0u) {
        r4 = r30 & 0xf00u;
        if (r4 != 0u) {
            if ((r4 & 0x100u) != 0u) {
                wr8(0xcc008000u, 0x10u);
                wr32(0xcc008000u, 0x100au);
                wr32(0xcc008000u, rd32(r31 + 0xa8u));
            }
            if ((r4 & 0x200u) != 0u) {
                wr8(0xcc008000u, 0x10u);
                wr32(0xcc008000u, 0x100bu);
                wr32(0xcc008000u, rd32(r31 + 0xacu));
            }
            if ((r4 & 0x400u) != 0u) {
                wr8(0xcc008000u, 0x10u);
                wr32(0xcc008000u, 0x100cu);
                wr32(0xcc008000u, rd32(r31 + 0xb0u));
            }
            if ((r4 & 0x800u) != 0u) {
                wr8(0xcc008000u, 0x10u);
                wr32(0xcc008000u, 0x100du);
                wr32(0xcc008000u, rd32(r31 + 0xb4u));
            }
        }
        r7 = (r30 & 0x1000000u) | (r30 & 0xf000u);
        if (r7 != 0u) {
            r6 = 0x100eu;
            if ((r7 & 0x1000000u) != 0u) {
                r5 = rd32(r31 + 0x254u);
                wr8(0xcc008000u, 0x10u);
                wr32(0xcc008000u, 0x1009u);
                wr32(0xcc008000u, (r5 >> 4u) & 7u);
            }
            r5 = r31;
            r7 = (r7 >> 0xcu) & 0xfu;
            while (r7 != 0u) {
                if ((r7 & 1u) != 0u) {
                    wr8(0xcc008000u, 0x10u);
                    wr32(0xcc008000u, r6);
                    wr32(0xcc008000u, rd32(r5 + 0xb8u));
                }
                r7 = (r7 >> 1u) & 0x7fffffffu;
                r5 = r5 + 4u;
                r6 = r6 + 1u;
            }
        }
        r8 = r30 & 0x2ff0000u;
        if (r8 != 0u) {
            r6 = 0x1040u;
            if ((r8 & 0x2000000u) != 0u) {
                r5 = rd32(r31 + 0x254u);
                wr8(0xcc008000u, 0x10u);
                wr32(0xcc008000u, 0x103fu);
                wr32(0xcc008000u, r5 & 0xfu);
            }
            r7 = r31;
            r8 = (r8 >> 0x10u) & 0xffu;
            while (r8 != 0u) {
                r5 = r6 + 0x10u;
                if ((r8 & 1u) != 0u) {
                    wr8(0xcc008000u, 0x10u);
                    wr32(0xcc008000u, r6);
                    wr32(0xcc008000u, rd32(r7 + 0xc8u));
                    wr8(0xcc008000u, 0x10u);
                    wr32(0xcc008000u, r5);
                    wr32(0xcc008000u, rd32(r7 + 0xe8u));
                }
                r8 = (r8 >> 1u) & 0x7fffffffu;
                r6 = r6 + 1u;
                r7 = r7 + 4u;
            }
        }
        if ((r30 & 0x4000000u) != 0u) {
            a.r[0] = 0u;
            (void)tc_call(0x80254810u, &a);
            a.r[0] = 5u;
            (void)tc_call(0x80254810u, &a);
        }
        if ((r30 & 0x10000000u) != 0u) {
            (void)tc_call(0x8025461cu, &a);
        }
        if ((r30 & 0x8000000u) != 0u) {
            (void)tc_call(0x8025436cu, &a);
        }
        wr16(r31 + 2u, 1u);
    }
    wr32(r31 + 0x5fcu, 0u);
    return;
}
