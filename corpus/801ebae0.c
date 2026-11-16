#include "tc_rt.h"

void fn_801ebae0(s32 param_1)
{
    TcArgs a = {0};
    if ((u32)rd8((u32)param_1 + 0x20u) == 1u) {
        a.r[0] = 0x804b9db0u;
        a.r[1] = (u32)rd8((u32)param_1 + 0x21u);
        (void)tc_call(0x8011f2ccu, &a);
        a.r[0] = 0x804b9e80u;
        a.r[1] = (u32)rd8((u32)param_1 + 0x22u);
        (void)tc_call(0x80120d14u, &a);
        a.r[0] = 0x804b9e14u;
        a.r[1] = (u32)rd8((u32)param_1 + 0x24u);
        (void)tc_call(0x8011ebbcu, &a);
        a.r[0] = 0x804bb6e0u;
        a.r[1] = (u32)rd8((u32)param_1 + 0x23u);
        (void)tc_call(0x8014d27cu, &a);
    } else {
        a.r[0] = 0x804b9db0u;
        a.r[1] = 0u;
        (void)tc_call(0x8011f2ccu, &a);
        a.r[0] = 0x804b9e80u;
        a.r[1] = 0u;
        (void)tc_call(0x80120d14u, &a);
        a.r[0] = 0x804b9e14u;
        a.r[1] = 0u;
        (void)tc_call(0x8011ebbcu, &a);
        a.r[0] = 0x804bb6e0u;
        a.r[1] = 0u;
        (void)tc_call(0x8014d27cu, &a);
    }
    return;
}
