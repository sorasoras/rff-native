#include "tc_rt.h"

u32 fn_800590f4(void)
{
    u32 r3 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    wr32(0x805706e0u, 1u);
    wr32(0x805706e4u, 1u);
    a.r[0] = 1u;
    (void)tc_call(0x8003ca84u, &a);
    r3 = tc_call(0x8003c20cu, &a);
    if (r3 == 0u) {
        wr32(0x80571124u, 0u);
    } else {
        wr32(0x80571124u, 0u);
    }
    a.r[0] = 0u;
    (void)tc_call(0x80035b6cu, &a);
    a.r[0] = 0u;
    (void)tc_call(0x80035ba0u, &a);
    (void)tc_call(0x800603f0u, &a);
    (void)tc_call(0x8011a4d4u, &a);
    a.r[0] = 0x80468ac8u;
    a.r[1] = 4u;
    a.r[2] = 0x280u;
    a.r[3] = 0x1e0u;
    a.r[4] = 0u;
    a.r[5] = 0x803d2a80u;
    (void)tc_call(0x8004b72cu, &a);
    a.r[0] = 0x80468a88u;
    a.r[1] = 0u;
    a.r[2] = 0x80468ac8u;
    a.r[3] = 0u;
    (void)tc_call(0x8004b7a0u, &a);
    a.r[0] = 0x80468aa8u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    (void)tc_call(0x80252494u, &a);
    a.r[0] = 0x80468aa8u;
    a.r[1] = 1u;
    a.r[2] = 1u;
    (void)tc_call(0x802524b0u, &a);
    wr32(0x80468a80u, 0u);
    wr32(0x80468a84u, 0u);
    (void)tc_call(0x8007ab2cu, &a);
    r3 = tc_call(0x8003c9c8u, &a);
    if (r3 == 1u) {
        f0 = (f64)rdf32(0x805723a0u);
    } else {
        f0 = (f64)rdf32(0x805723a4u);
    }
    wrf32d(0x80571118u, f0);
    (void)tc_call(0x800a8424u, &a);
    (void)tc_call(0x80051980u, &a);
    (void)tc_call(0x80209ae0u, &a);
    (void)tc_call(0x80050748u, &a);
    (void)tc_call(0x80059ff8u, &a);
    (void)tc_call(0x80080494u, &a);
    (void)tc_call(0x80053204u, &a);
    (void)tc_call(0x8020dd44u, &a);
    (void)tc_call(0x80059e24u, &a);
    a.r[0] = 0u;
    (void)tc_call(0x80059e34u, &a);
    a.r[0] = 0u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffu;
    (void)tc_call(0x80044e78u, &a);
    wr32(0x80571110u, 1u);
    wr32(0x80571114u, 0u);
    wr32(0x80571120u, 0u);
    return 1u;
}
