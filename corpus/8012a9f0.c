#include "tc_rt.h"

void fn_8012a9f0(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x44u;
    (void)tc_call(0x800f8610u, &a);
    a.r[0] = rd32(0x8057129cu);
    (void)tc_call(0x8011a00cu, &a);
    a.r[0] = (u32)param_1 + 0xe4u;
    (void)tc_call(0x801e63a4u, &a);
    a.r[0] = (u32)param_1 + 0x158u;
    (void)tc_call(0x801e63a4u, &a);
    a.r[0] = (u32)param_1 + 0x1ccu;
    (void)tc_call(0x8020f078u, &a);
    a.r[0] = (u32)param_1 + 0x204u;
    (void)tc_call(0x8020f078u, &a);
    a.r[0] = (u32)param_1 + 0x23cu;
    (void)tc_call(0x8020f078u, &a);
    a.r[0] = (u32)param_1 + 0x274u;
    (void)tc_call(0x8020f078u, &a);
    a.r[0] = (u32)param_1 + 0x2acu;
    (void)tc_call(0x8020f078u, &a);
    a.r[0] = (u32)param_1 + 0x2e4u;
    (void)tc_call(0x8020f078u, &a);
    return;
}
