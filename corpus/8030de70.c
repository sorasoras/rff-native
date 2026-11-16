#include "tc_rt.h"

u32 fn_8030de70(void)
{
    TcArgs a = {0};
    if ((u32)(s8)rd8(0x80571de8u) == 0u) {
        wr32(0x80563e14u, 0u);
        wr32(0x80563e18u, 0u);
        wr32(0x80563e20u, 0u);
        wr32(0x80563e24u, 0u);
        wr8(0x80563e0cu, 0u);
        wr32(0x80563e10u, 0u);
        wr32(0x80563e14u, 0x80563e14u);
        wr32(0x80563e18u, 0x80563e14u);
        wr32(0x80563e1cu, 0u);
        wr32(0x80563e20u, 0x80563e20u);
        wr32(0x80563e24u, 0x80563e20u);
        a.r[0] = 0x80563e0cu;
        a.r[1] = 0x8030defcu;
        a.r[2] = 0x80563e00u;
        (void)tc_call(0x802551b8u, &a);
        wr8(0x80571de8u, 1u);
    }
    return 0x80563e0cu;
}
