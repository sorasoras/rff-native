#include "tc_rt.h"

u32 fn_8030abd4(void)
{
    TcArgs a = {0};
    if ((u32)(s8)rd8(0x80571de0u) == 0u) {
        a.r[0] = 0x80563dc4u;
        a.r[1] = 0x8030ad2cu;
        a.r[2] = 0x8030acd4u;
        a.r[3] = 0xcu;
        a.r[4] = 3u;
        (void)tc_call(0x80255624u, &a);
        wr32(0x80563de8u, 0u);
        wr8(0x80563decu, 0u);
        a.r[0] = 0x80563df0u;
        (void)tc_call(0x8022efd4u, &a);
        a.r[0] = 0x80563df8u;
        (void)tc_call(0x8022efd4u, &a);
        a.r[0] = 0x80563dc4u;
        a.r[1] = 0x8030ac70u;
        a.r[2] = 0x80563db8u;
        (void)tc_call(0x802551b8u, &a);
        wr8(0x80571de0u, 1u);
    }
    return 0x80563dc4u;
}
