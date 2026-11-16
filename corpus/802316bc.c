#include "tc_rt.h"

u32 fn_802316bc(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdf60u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = 0x804e0f20u;
    a.r[1] = param_1;
    a.r[2] = 0x20u;
    (void)tc_call(0x80004338u, &a);
    wr32(0x804e0f20u, rd32(0x804e0f24u) + rd32(0x804e0f28u) + rd32(0x804e0f2cu) + rd32(0x804e0f30u) + rd32(0x804e0f34u) + rd32(0x804e0f38u) + rd32(0x804e0f3cu));
    a.r[0] = 0x80386a90u;
    a.r[1] = 0x817fdf68u;
    a.r[2] = 2u;
    r3 = tc_call(0x80271a64u, &a);
    if (r3 == 0u) {
        a.r[0] = 0x817fdf68u;
        a.r[1] = 0x804e0f20u;
        a.r[2] = 0x20u;
        r3 = tc_call(0x80271228u, &a);
        if (r3 != 0x20u) {
            a.r[0] = 0x817fdf68u;
            (void)tc_call(0x80271ce4u, &a);
            r3 = 0u;
            return r3;
        }
        a.r[0] = 0x817fdf68u;
        r3 = tc_call(0x80271ce4u, &a);
        if (r3 == 0u) {
            r3 = 1u;
            return r3;
        }
        r3 = 0u;
        return r3;
    }
    r3 = 0u;
    return r3;
}
