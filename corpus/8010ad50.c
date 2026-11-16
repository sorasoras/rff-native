#include "tc_rt.h"

s32 fn_8010ad50(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 4u;
    (void)tc_call(0x8011e378u, &a);
    a.r[0] = (u32)param_1 + 0x40u;
    (void)tc_call(0x802fa590u, &a);
    a.r[0] = (u32)param_1 + 0x168u;
    (void)tc_call(0x802fa16cu, &a);
    a.r[0] = (u32)param_1 + 0x1ecu;
    (void)tc_call(0x802f9d8cu, &a);
    return param_1;
}
