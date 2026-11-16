#include "tc_rt.h"

void fn_80051d5c(void)
{
    u32 r0 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    a.r[0] = 1u;
    (void)tc_call(0x8004ca7cu, &a);
    a.r[0] = 1u;
    a.r[1] = 1u;
    a.r[2] = 7u;
    (void)tc_call(0x80044e3cu, &a);
    r5 = (u32)rd8(0x8057228du);
    r4 = (u32)rd8(0x8057228eu);
    r0 = (u32)rd8(0x8057228fu);
    wr8(0x817fdff8u, rd8(0x8057228cu));
    wr8(0x817fdff9u, (u8)r5);
    wr8(0x817fdffau, (u8)r4);
    wr8(0x817fdffbu, (u8)r0);
    a.r[0] = 1u;
    (void)tc_call(0x8004cd5cu, &a);
    a.r[0] = 0u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    (void)tc_call(0x8004b358u, &a);
    a.r[0] = 0x817fdff8u;
    a.r[1] = 0x817fdff8u;
    a.r[2] = 1u;
    (void)tc_call(0x8003d05cu, &a);
    a.r[0] = 0x98u;
    a.r[1] = 7u;
    a.r[2] = 4u;
    (void)tc_call(0x80250b74u, &a);
    wrf32d(0xcc008000u, (f64)rdf32(0x80572268u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572268u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572290u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572294u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572268u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572290u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572268u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572298u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572290u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572294u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572298u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572290u));
    a.r[0] = 1u;
    a.r[1] = 1u;
    a.r[2] = 3u;
    (void)tc_call(0x80044e3cu, &a);
    a.r[0] = 0u;
    (void)tc_call(0x8004ca7cu, &a);
    return;
}
