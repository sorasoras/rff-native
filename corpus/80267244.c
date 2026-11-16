#include "tc_rt.h"

u32 fn_80267244(s32 param_1)
{
    u32 r7 = 0, r8 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r30 = (u32)rd8((u32)param_1 + 0x1cu);
    if ((u32)rd8((u32)param_1 + 0x18u) == 1u) {
        a.r[0] = 0x8033dac8u;
        (void)tc_call(0x80267074u, &a);
        if (r30 != 0u) {
            a.r[0] = 0x8033dae8u;
            (void)tc_call(0x80267074u, &a);
        } else {
            a.r[0] = 0x8033daf0u;
            (void)tc_call(0x80267074u, &a);
        }
        a.r[0] = r30;
        (void)tc_call(0x8026b31cu, &a);
    }
    a.r[0] = 0x817fdfb8u;
    a.r[1] = 0u;
    a.r[2] = 0x40u;
    (void)tc_call(0x8000446cu, &a);
    r8 = rd32(0x80502708u);
    wr8(0x817fdfbcu, 0x80u);
    r7 = r8 + 1u;
    wr32(0x817fdfc4u, r8);
    wr32(0x80502708u, r7);
    wr32(0x817fdfb8u, 0x40u);
    wr8(0x817fdfc0u, 0u);
    wr32(0x80502708u, r7 + 1u);
    wr32(0x817fdfc4u, r7);
    (void)tc_call(0x8026af8cu, &a);
    return 0u;
}
