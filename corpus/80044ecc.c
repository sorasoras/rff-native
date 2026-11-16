#include "tc_rt.h"

void fn_80044ecc(void)
{
    TcArgs a = {0};
    (void)tc_call(0x8004e040u, &a);
    a.r[0] = 0u;
    a.r[1] = 1u;
    a.r[2] = 1u;
    (void)tc_call(0x80250e00u, &a);
    a.r[0] = 1u;
    a.r[1] = 1u;
    a.r[2] = 1u;
    (void)tc_call(0x80250e00u, &a);
    a.r[0] = 2u;
    a.r[1] = 1u;
    a.r[2] = 1u;
    (void)tc_call(0x80250e00u, &a);
    a.r[0] = 3u;
    a.r[1] = 1u;
    a.r[2] = 1u;
    (void)tc_call(0x80250e00u, &a);
    a.r[0] = 4u;
    a.r[1] = 1u;
    a.r[2] = 1u;
    (void)tc_call(0x80250e00u, &a);
    a.r[0] = 5u;
    a.r[1] = 1u;
    a.r[2] = 1u;
    (void)tc_call(0x80250e00u, &a);
    a.r[0] = 6u;
    a.r[1] = 1u;
    a.r[2] = 1u;
    (void)tc_call(0x80250e00u, &a);
    a.r[0] = 7u;
    a.r[1] = 1u;
    a.r[2] = 1u;
    (void)tc_call(0x80250e00u, &a);
    (void)tc_call(0x80044f70u, &a);
    return;
}
