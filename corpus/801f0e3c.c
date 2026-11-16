#include "tc_rt.h"

void fn_801f0e3c(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(param_1, param_2);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r31 + 0x1cu, param_1);
        wr32(r31, 0x803765d0u);
    }
    a.r[0] = param_1 + 4u;
    a.r[1] = r31;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r31 + 0x1cu, param_1);
        wr32(r31, 0x803765acu);
    }
    a.r[0] = param_1 + 4u;
    a.r[1] = r31;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r31 + 0x1cu, param_1);
        wr32(r31, 0x80376564u);
    }
    a.r[0] = param_1 + 4u;
    a.r[1] = r31;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r31 + 0x1cu, param_1);
        wr32(r31, 0x80376540u);
    }
    a.r[0] = param_1 + 4u;
    a.r[1] = r31;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r31 + 0x1cu, param_1);
        wr32(r31, 0x80376588u);
    }
    a.r[0] = param_1 + 4u;
    a.r[1] = r31;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = param_1 + 4u;
    a.r[1] = 0u;
    (void)tc_call(0x800f8348u, &a);
    wr32(param_1 + 0x48u, 0u);
    wr32(param_1 + 0x4cu, 0u);
    return;
}
