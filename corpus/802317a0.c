#include "tc_rt.h"

u32 fn_802317a0(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdf50u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    a.r[0] = 0x80386a90u;
    a.r[1] = 0x817fdf58u;
    a.r[2] = 1u;
    r3 = tc_call(0x80271a64u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = 0x20u;
        (void)tc_call(0x8000443cu, &a);
        r3 = 0u;
    } else {
        a.r[0] = 0x817fdf58u;
        a.r[1] = 0x804e0f20u;
        a.r[2] = 0x20u;
        r3 = tc_call(0x80271148u, &a);
        r31 = r3;
        a.r[0] = 0x817fdf58u;
        (void)tc_call(0x80271ce4u, &a);
        if (r31 == 0x20u) {
            if (rd32(0x804e0f20u) == (rd32(0x804e0f24u) + rd32(0x804e0f28u) + rd32(0x804e0f2cu) + rd32(0x804e0f30u) + rd32(0x804e0f34u) + rd32(0x804e0f38u) + rd32(0x804e0f3cu))) {
                a.r[0] = param_1;
                a.r[1] = 0x804e0f20u;
                a.r[2] = 0x20u;
                (void)tc_call(0x80004338u, &a);
                r3 = 1u;
            } else {
                a.r[0] = param_1;
                a.r[1] = 0u;
                a.r[2] = 0x20u;
                (void)tc_call(0x8000443cu, &a);
                r3 = 0u;
            }
        } else {
            a.r[0] = 0x80386a90u;
            (void)tc_call(0x80270f40u, &a);
            a.r[0] = param_1;
            a.r[1] = 0u;
            a.r[2] = 0x20u;
            (void)tc_call(0x8000443cu, &a);
            r3 = 0u;
        }
    }
    return r3;
}
