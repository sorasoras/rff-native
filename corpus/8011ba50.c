#include "tc_rt.h"

void fn_8011ba50(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = (u32)rd8(0x80492820u);
    a.r[1] = (u32)rd8(0x80492821u);
    a.r[2] = (u32)rd8(0x80492823u);
    a.r[3] = param_1;
    a.r[4] = param_2;
    (void)tc_call(0x8011ba1cu, &a);
    return;
}
