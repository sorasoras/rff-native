#include "tc_rt.h"

void fn_8011ba70(void)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r28 = (u32)rd8(0x80492823u);
    r29 = (u32)rd8(0x80492821u);
    r30 = (u32)rd8(0x80492820u);
    a.r[0] = 0x14u;
    a.r[1] = 0xffffffffu;
    r3 = tc_call(0x800a51f8u, &a);
    r31 = r3;
    a.r[0] = 0x13u;
    a.r[1] = 0xffffffffu;
    r3 = tc_call(0x800a51f8u, &a);
    a.r[0] = r30;
    a.r[1] = r29;
    a.r[2] = r28;
    a.r[3] = r3;
    a.r[4] = r31;
    (void)tc_call(0x8011ba1cu, &a);
    return;
}
