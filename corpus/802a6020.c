#include "tc_rt.h"

u32 fn_802a6020(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0x80577388u;
    a.r[1] = param_1;
    a.r[2] = 6u;
    r3 = tc_call(0x802592d8u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x802a99acu, &a);
        if ((r3 != 0u && (u32)rd8(r3) != 0u) && rd32(r3 + 4u) == 4u) {
            wr16(r3 + 0x58u, (u16)param_2);
            r3 = 1u;
            return r3;
        }
        r3 = 0u;
        return r3;
    }
    if ((u32)rd8(0x80540a28u) != 0u && rd32(0x80540a2cu) == 4u) {
        wr16(0x80540a80u, (u16)param_2);
    }
    if ((u32)rd8(0x80540a84u) != 0u && rd32(0x80540a88u) == 4u) {
        wr16(0x80540adcu, (u16)param_2);
    }
    if ((u32)rd8(0x80540ae0u) != 0u && rd32(0x80540ae4u) == 4u) {
        wr16(0x80540b38u, (u16)param_2);
    }
    if ((u32)rd8(0x80540b3cu) != 0u && rd32(0x80540b40u) == 4u) {
        wr16(0x80540b94u, (u16)param_2);
    }
    r3 = 1u;
    return r3;
}
