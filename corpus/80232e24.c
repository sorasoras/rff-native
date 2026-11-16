#include "tc_rt.h"

void fn_80232e24(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    wr32(0x817fdf60u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdf88u, 1u);
    a.r[0] = 0x81280000u;
    r3 = tc_call(0x80227208u, &a);
    f1 = tc_lastf();
    a.r[0] = 0x812f0000u;
    r3 = tc_call(0x802271f0u, &a);
    f1 = tc_lastf();
    r3 = tc_call(0x802de0e8u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        r3 = tc_call(0x8022e0f8u, &a);
        f1 = tc_lastf();
    }
    a.r[0] = 0x817fdfa0u;
    r3 = tc_call(0x802de670u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        r3 = tc_call(0x8022e0f8u, &a);
        f1 = tc_lastf();
    }
    a.r[0] = 0xe0u;
    a.r[1] = 0x20u;
    r3 = tc_call(0x80227210u, &a);
    f1 = tc_lastf();
    r31 = r3;
    if (r3 == 0u) {
        r3 = tc_call(0x8022e0f8u, &a);
        f1 = tc_lastf();
    }
    a.r[0] = r31;
    a.r[1] = 0u;
    a.r[2] = 0xe0u;
    r3 = tc_call(0x8000443cu, &a);
    f1 = tc_lastf();
    a.r[0] = 0u;
    a.r[1] = r31;
    r3 = tc_call(0x802de330u, &a);
    f1 = tc_lastf();
    if (r3 == 0xfffffc07u) {
        r3 = rd32(0x817fdfa0u);
        a.r[0] = r3;
        a.r[1] = rd32(0x817fdfa4u);
        a.r[2] = 0u;
        a.r[3] = 0x817fdf88u;
        r3 = tc_call(0x802de218u, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            r3 = tc_call(0x8022e0f8u, &a);
            f1 = tc_lastf();
        }
        a.r[0] = ((rd32(0x817fdf88u) * 0xd8u) + 0x1fu) & 0xffffffe0u;
        a.r[1] = 0x20u;
        r3 = tc_call(0x80227210u, &a);
        f1 = tc_lastf();
        r30 = r3;
        if (r3 == 0u) {
            r3 = tc_call(0x8022e0f8u, &a);
            f1 = tc_lastf();
        }
        r3 = rd32(0x817fdfa0u);
        a.r[0] = r3;
        a.r[1] = rd32(0x817fdfa4u);
        a.r[2] = r30;
        a.r[3] = 0x817fdf88u;
        r3 = tc_call(0x802de218u, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            r3 = tc_call(0x8022e0f8u, &a);
            f1 = tc_lastf();
        }
        a.r[0] = r31;
        a.r[1] = r30;
        a.r[2] = 0xd8u;
        r3 = tc_call(0x80004338u, &a);
        f1 = tc_lastf();
    } else {
        if (r3 != 0u) {
            r3 = tc_call(0x8022e0f8u, &a);
            f1 = tc_lastf();
        } else {
            r3 = tc_call(0x80232034u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                wr32(0x817fdf84u, 0u);
                wr32(0x817fdf80u, 0xffffffffu);
                a.r[0] = r31;
                a.r[1] = 0x817fdf84u;
                a.r[2] = 0x817fdf80u;
                r3 = tc_call(0x802325acu, &a);
                f1 = tc_lastf();
                if (rd32(0x817fdf80u) == 0u) {
                    r3 = tc_call(0x80232290u, &a);
                    f1 = tc_lastf();
                    r3 = tc_call(0x8022e0f8u, &a);
                    f1 = tc_lastf();
                }
            }
        }
    }
    a.r[0] = 0x2000u;
    a.r[1] = 0x40u;
    r3 = tc_call(0x80227210u, &a);
    f1 = tc_lastf();
    r30 = r3 + 0xfe0u;
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 0x2000u;
    r3 = tc_call(0x8000443cu, &a);
    f1 = tc_lastf();
    r0 = rd32(0x817fdfa0u);
    wr32(r30 + 0x1cu, rd32(0x817fdfa4u));
    wr32(r30 + 0x18u, r0);
    r3 = tc_call(0x802266a4u, &a);
    f1 = tc_lastf();
    wr8(r30 + 0xau, (u8)r3);
    wr8(r30 + 0xbu, 1u);
    wr32(r30 + 0xcu, param_1 | 0x80000000u);
    r3 = tc_call(0x80231e2cu, &a);
    f1 = tc_lastf();
    a.r[0] = r30;
    r3 = tc_call(0x80231edcu, &a);
    f1 = tc_lastf();
    a.r[0] = 0x817fdfc0u;
    r3 = tc_call(0x802317a0u, &a);
    f1 = tc_lastf();
    wr8(0x817fdfc5u, 3u);
    a.r[0] = 0x817fdfc0u;
    r3 = tc_call(0x802316bcu, &a);
    f1 = tc_lastf();
    r3 = rd32(0x817fdfa0u);
    a.r[0] = r3;
    a.r[1] = rd32(0x817fdfa4u);
    a.r[2] = r31;
    r3 = tc_call(0x802de184u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        r3 = tc_call(0x8022e0f8u, &a);
        f1 = tc_lastf();
    }
    for (;;) {
    }
}
