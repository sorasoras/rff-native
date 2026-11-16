#include "tc_rt.h"

void fn_80044f70(void)
{
    TcArgs a = {0};
    a.r[0] = 1u;
    (void)tc_call(0x80044da4u, &a);
    a.r[0] = 2u;
    (void)tc_call(0x80044e28u, &a);
    a.r[0] = 1u;
    (void)tc_call(0x80044eb8u, &a);
    a.r[0] = 1u;
    (void)tc_call(0x80044e2cu, &a);
    a.r[0] = 1u;
    (void)tc_call(0x80044e34u, &a);
    a.r[0] = 1u;
    a.r[1] = 1u;
    a.r[2] = 3u;
    (void)tc_call(0x80044e3cu, &a);
    a.r[0] = 4u;
    a.r[1] = 0u;
    (void)tc_call(0x80044e50u, &a);
    a.r[0] = 0u;
    a.r[1] = 0u;
    (void)tc_call(0x80044e64u, &a);
    a.r[0] = 0u;
    (void)tc_call(0x80044e6cu, &a);
    a.f[0] = (f64)rdf32(0x805720e0u);
    a.f[1] = (f64)rdf32(0x805720e4u);
    (void)tc_call(0x80044e74u, &a);
    a.r[0] = 0u;
    (void)tc_call(0x80044ec4u, &a);
    return;
}
