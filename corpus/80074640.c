#include "tc_rt.h"

u32 fn_80074640(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r26 = 0, r27 = 0, r28 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_2;
    a.r[0] = 0x804b9da0u;
    (void)tc_call(0x8010a90cu, &a);
    a.r[0] = 0x804b9da0u;
    (void)tc_call(0x8010a6ecu, &a);
    a.r[0] = 0x8046d8c8u;
    (void)tc_call(0x8008c408u, &a);
    a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
    (void)tc_call(0x8008b6b4u, &a);
    a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
    (void)tc_call(0x8008b708u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x800f4a7cu, &a);
    a.r[0] = 0u;
    r3 = tc_call(0x8007dae8u, &a);
    a.r[0] = r3;
    (void)tc_call(0x8007dd4cu, &a);
    r26 = rd32(0x804863d8u);
    r28 = rd32(r26 + 0x88cu);
    r27 = rd32(r26 + 0xa60u);
    a.r[0] = 0u;
    r3 = tc_call(0x8007dae8u, &a);
    f1 = tc_lastf();
    a.r[0] = r26;
    a.r[1] = r3;
    a.r[2] = 1u;
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32(r26) + 0x8cu), &a);
    wr32(rd32(0x804863d8u) + 0x88cu, r28);
    wr32(rd32(0x804863d8u) + 0xa60u, r27);
    r26 = rd32(0x8046d874u);
    while (r26 != 0u) {
        r3 = r26;
        r26 = rd32(r26);
        r3 = rd32(r3 + 8u);
        if (param_1 == (u32)rd8(r3 + 4u)) {
            wr32(r3 + 0xd4u, rd32(r3 + 0xd4u) | 0x80000000u);
            r3 = rd32(r3 + 0x10cu);
            if (r3 != 0u) {
                a.r[0] = r3;
                f1 = tc_callf(0x8014ed14u, &a);
            }
        }
    }
    r26 = rd32(0x8046adecu);
    while (r26 != 0u) {
        r3 = r26;
        r26 = rd32(r26);
        r27 = rd32(r3 + 8u);
        if (param_1 == rd32(r27 + 0x7cu)) {
            wr32(r27 + 0x74u, rd32(r27 + 0x74u) | 0x80000000u);
            a.r[0] = r27;
            a.r[1] = 1u;
            a.r[2] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r27) + 0x88u), &a);
            a.r[0] = r27;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r27) + 0x54u), &a);
            a.r[0] = r27;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r27) + 0x84u), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 != 0u) {
                a.r[0] = r27;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r27) + 0x74u), &a);
                f1 = tc_lastf();
                if (r3 != 0u) {
                    wr32(r3 + 0x18u, 1u);
                    a.r[0] = r3;
                    f1 = tc_callf(0x800cb55cu, &a);
                }
            }
        }
    }
    if ((param_1 == 7u || param_1 == 4u) || param_1 == 8u) {
        a.r[0] = 0u;
        (void)tc_call(0x801b10dcu, &a);
    }
    a.r[0] = 0x80475e24u;
    a.r[1] = param_1;
    (void)tc_call(0x8017c304u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x800cec60u, &a);
    r26 = rd32((rd32(0x80471a18u) * 0x4150u) - 0x7fb92730u);
    while (r26 != 0u) {
        r3 = r26;
        r26 = rd32(r26);
        r3 = rd32(r3 + 8u);
        if ((rd32(r3 + 0x90u) & 0x200000u) != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x8019dec0u, &a);
        }
    }
    a.r[0] = param_1;
    a.r[1] = (u32)rd8(0x80492821u);
    (void)tc_call(0x80054098u, &a);
    a.r[0] = 0x804b9da0u;
    a.r[1] = param_1;
    (void)tc_call(0x8010b398u, &a);
    (void)tc_call(0x800b5e24u, &a);
    a.r[0] = param_1;
    r3 = tc_call(0x8007d150u, &a);
    if (rd32(r3 + 8u) == 0u) {
        wr32(0x80571170u, 1u);
    } else {
        wr32(0x80571170u, 0u);
    }
    wr32(0x805711a0u, 0u);
    return 1u;
}
