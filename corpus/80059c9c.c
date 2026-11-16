#include "tc_rt.h"

void fn_80059c9c(f64 param_f1, f64 param_f2)
{
    u32 r0 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfdcu, 0u);
    if (rd32(0x80468a80u) != 0u) {
        a.r[0] = 1u;
        a.r[1] = 1u;
        a.r[2] = 7u;
        (void)tc_call(0x80044e3cu, &a);
        a.r[0] = 0u;
        (void)tc_call(0x80044da4u, &a);
        a.r[0] = 0x80468a88u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        (void)tc_call(0x8004b358u, &a);
        a.r[0] = 1u;
        (void)tc_call(0x8004ca7cu, &a);
        r5 = (u32)rd8(0x805723b1u);
        r4 = (u32)rd8(0x805723b2u);
        r0 = (u32)rd8(0x805723b3u);
        wr8(0x817fdfc8u, rd8(0x805723b0u));
        wr8(0x817fdfc9u, (u8)r5);
        wr8(0x817fdfcau, (u8)r4);
        wr8(0x817fdfcbu, (u8)r0);
        a.r[0] = 0x101u;
        (void)tc_call(0x8004cd5cu, &a);
        a.r[0] = 0x817fdfc8u;
        a.r[1] = 0x817fdfc8u;
        a.r[2] = 0x101u;
        (void)tc_call(0x8003d05cu, &a);
        a.r[0] = 0x98u;
        a.r[1] = 7u;
        a.r[2] = 4u;
        (void)tc_call(0x80250b74u, &a);
        f0 = (f64)rdf32(0x805723b8u);
        wrf32d(0xcc008000u, (f64)rdf32(0x805723b4u));
        f2 = (f64)(f32)(f0 * param_f1);
        f0 = (f64)rdf32(0x805723c0u);
        wrf32d(0xcc008000u, (f64)rdf32(0x805723b4u));
        f1 = (f64)(f32)(f0 * param_f1);
        wrf32d(0xcc008000u, param_f2);
        wrf32d(0xcc008000u, (f64)rdf32(0x805723b4u));
        wrf32d(0xcc008000u, (f64)rdf32(0x805723b4u));
        wrf32d(0xcc008000u, f2);
        wrf32d(0xcc008000u, (f64)rdf32(0x805723b4u));
        wrf32d(0xcc008000u, param_f2);
        wrf32d(0xcc008000u, (f64)rdf32(0x805723bcu));
        wrf32d(0xcc008000u, (f64)rdf32(0x805723b4u));
        wrf32d(0xcc008000u, (f64)rdf32(0x805723b4u));
        wrf32d(0xcc008000u, f1);
        wrf32d(0xcc008000u, param_f2);
        wrf32d(0xcc008000u, (f64)rdf32(0x805723b4u));
        wrf32d(0xcc008000u, (f64)rdf32(0x805723bcu));
        wrf32d(0xcc008000u, f2);
        wrf32d(0xcc008000u, f1);
        wrf32d(0xcc008000u, param_f2);
        wrf32d(0xcc008000u, (f64)rdf32(0x805723bcu));
        wrf32d(0xcc008000u, (f64)rdf32(0x805723bcu));
        a.r[0] = 0u;
        (void)tc_call(0x8004ca7cu, &a);
        a.r[0] = 1u;
        (void)tc_call(0x80044da4u, &a);
    }
    return;
}
