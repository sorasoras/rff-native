#include "tc_rt.h"

void fn_800522a8(void)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(0x805706d0u) != 7u || rd32(0x805710c8u) != 0u) {
        a.r[0] = 1u;
        (void)tc_call(0x8004cd5cu, &a);
        a.r[0] = 0u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        (void)tc_call(0x8004b358u, &a);
        if (rd32(0x805710c4u) != 0u) {
            a.r[0] = 0x805710bcu;
            a.r[1] = 0x805710bcu;
            a.r[2] = 1u;
            (void)tc_call(0x8003d05cu, &a);
        } else {
            a.r[0] = 0x805710b8u;
            a.r[1] = 0x805710b8u;
            a.r[2] = 1u;
            (void)tc_call(0x8003d05cu, &a);
        }
        if (rd32(0x805710c8u) != 0u) {
            wr32(0x805710c8u, 0u);
            wr32(0x805710c4u, 0u);
        }
        a.r[0] = 0x98u;
        a.r[1] = 7u;
        a.r[2] = 4u;
        (void)tc_call(0x80250b74u, &a);
        f1 = (f64)rdf32(0x805710b0u);
        wrf32d(0xcc008000u, (f64)rdf32(0x80572268u));
        wrf32d(0xcc008000u, (f64)rdf32(0x80572268u));
        wrf32d(0xcc008000u, f1);
        f1 = (f64)rdf32(0x805710b0u);
        wrf32d(0xcc008000u, (f64)rdf32(0x80572294u));
        wrf32d(0xcc008000u, (f64)rdf32(0x80572268u));
        wrf32d(0xcc008000u, f1);
        f1 = (f64)rdf32(0x805710b0u);
        wrf32d(0xcc008000u, (f64)rdf32(0x80572268u));
        wrf32d(0xcc008000u, (f64)rdf32(0x80572298u));
        wrf32d(0xcc008000u, f1);
        f1 = (f64)rdf32(0x805710b0u);
        wrf32d(0xcc008000u, (f64)rdf32(0x80572294u));
        wrf32d(0xcc008000u, (f64)rdf32(0x80572298u));
        wrf32d(0xcc008000u, f1);
    }
    return;
}
