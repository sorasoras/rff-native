#include "tc_rt.h"

u32 fn_800593d0(void)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32(0x80571114u);
    wr32(0x80468a80u, 0u);
    if (r0 != 0u) {
        (void)tc_call(0x80080b44u, &a);
        (void)tc_call(0x800d8940u, &a);
        a.r[0] = 0x803d29f8u;
        (void)tc_call(0x800996e4u, &a);
        (void)tc_call(0x8018364cu, &a);
        (void)tc_call(0x8013f10cu, &a);
        (void)tc_call(0x80142830u, &a);
        wr32(0x80571114u, 0u);
    }
    (void)tc_call(0x80059e28u, &a);
    (void)tc_call(0x8020e0e8u, &a);
    (void)tc_call(0x8014108cu, &a);
    a.r[0] = 0x804b9da0u;
    (void)tc_call(0x8010b300u, &a);
    (void)tc_call(0x800532bcu, &a);
    (void)tc_call(0x80059ffcu, &a);
    (void)tc_call(0x80050850u, &a);
    (void)tc_call(0x80209afcu, &a);
    (void)tc_call(0x80051aa8u, &a);
    (void)tc_call(0x8011a564u, &a);
    (void)tc_call(0x80060710u, &a);
    wr32(0x80571128u, 0u);
    wr32(0x80571110u, 0u);
    return 1u;
}
