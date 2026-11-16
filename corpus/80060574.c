#include "tc_rt.h"

void fn_80060574(void)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32(0x80468b08u);
    wr32(0x80468af0u, 0u);
    if (r0 != 0u) {
        a.r[0] = 0x80468b0cu;
        (void)tc_call(0x80094e18u, &a);
        a.r[0] = 0x80468b0cu;
        (void)tc_call(0x80094dd4u, &a);
    }
    r0 = rd32(0x80468b60u);
    wr32(0x80468b48u, 0u);
    if (r0 != 0u) {
        a.r[0] = 0x80468b64u;
        (void)tc_call(0x80094e18u, &a);
        a.r[0] = 0x80468b64u;
        (void)tc_call(0x80094dd4u, &a);
    }
    r0 = rd32(0x80468bb8u);
    wr32(0x80468ba0u, 0u);
    if (r0 != 0u) {
        a.r[0] = 0x80468bbcu;
        (void)tc_call(0x80094e18u, &a);
        a.r[0] = 0x80468bbcu;
        (void)tc_call(0x80094dd4u, &a);
    }
    r0 = rd32(0x80468c10u);
    wr32(0x80468bf8u, 0u);
    if (r0 != 0u) {
        a.r[0] = 0x80468c14u;
        (void)tc_call(0x80094e18u, &a);
        a.r[0] = 0x80468c14u;
        (void)tc_call(0x80094dd4u, &a);
    }
    r0 = rd32(0x80468c68u);
    wr32(0x80468c50u, 0u);
    if (r0 != 0u) {
        a.r[0] = 0x80468c6cu;
        (void)tc_call(0x80094e18u, &a);
        a.r[0] = 0x80468c6cu;
        (void)tc_call(0x80094dd4u, &a);
    }
    r0 = rd32(0x80468cc0u);
    wr32(0x80468ca8u, 0u);
    if (r0 != 0u) {
        a.r[0] = 0x80468cc4u;
        (void)tc_call(0x80094e18u, &a);
        a.r[0] = 0x80468cc4u;
        (void)tc_call(0x80094dd4u, &a);
    }
    r0 = rd32(0x80468d18u);
    wr32(0x80468d00u, 0u);
    if (r0 != 0u) {
        a.r[0] = 0x80468d1cu;
        (void)tc_call(0x80094e18u, &a);
        a.r[0] = 0x80468d1cu;
        (void)tc_call(0x80094dd4u, &a);
    }
    r0 = rd32(0x80468d70u);
    wr32(0x80468d58u, 0u);
    if (r0 != 0u) {
        a.r[0] = 0x80468d74u;
        (void)tc_call(0x80094e18u, &a);
        a.r[0] = 0x80468d74u;
        (void)tc_call(0x80094dd4u, &a);
    }
    r0 = rd32(0x80468dc8u);
    wr32(0x80468db0u, 0u);
    if (r0 != 0u) {
        a.r[0] = 0x80468dccu;
        (void)tc_call(0x80094e18u, &a);
        a.r[0] = 0x80468dccu;
        (void)tc_call(0x80094dd4u, &a);
    }
    return;
}
