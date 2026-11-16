#include "tc_rt.h"

void fn_8008ae3c(u32 param_1, u32 param_2, s32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7)
{
    u32 r3 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    if (rd32(param_2 + 0x5cu) == 0u) {
        a.r[0] = param_2 + 0x14u;
        a.r[1] = param_6;
        (void)tc_call(0x80085774u, &a);
        f1 = (f64)rdf32(0x80572950u);
        wrf32d(param_2 + 0x18u, (f64)rdf32(0x80572908u));
        a.f[0] = f1;
        a.r[0] = param_2 + 0x14u;
        (void)tc_call(0x8008b0c0u, &a);
        a.r[0] = 0x817fdfc0u;
        a.r[1] = param_4;
        a.r[2] = param_5;
        (void)tc_call(0x8008ad80u, &a);
        wrf32d(0x817fdfc4u, (f64)rdf32(0x80572908u));
        a.r[0] = 0x817fdfc0u;
        a.r[1] = param_2 + 0x14u;
        f1 = tc_callf(0x8008b15cu, &a);
        a.f[0] = f1;
        f1 = tc_callf(0x8008ad74u, &a);
        if (f1 > (f64)rdf32(0x80572950u)) {
            a.f[0] = (f64)rdf32(0x80572910u);
            a.r[0] = param_2 + 0x14u;
            (void)tc_call(0x8008b0c0u, &a);
        }
        a.r[0] = param_2 + 0x14u;
        (void)tc_call(0x80088a78u, &a);
        a.r[0] = param_7;
        a.r[1] = 0x804890c8u;
        r3 = tc_call(0x8008ada8u, &a);
        if (r3 == 0u) {
            a.r[0] = param_2 + 0x34u;
            a.r[1] = 0x804890c8u;
            (void)tc_call(0x80085774u, &a);
        } else {
            a.r[0] = param_2 + 0x34u;
            a.r[1] = param_7;
            (void)tc_call(0x80085774u, &a);
            f1 = (f64)rdf32(0x80572950u);
            wrf32d(param_2 + 0x38u, (f64)rdf32(0x80572908u));
            a.f[0] = f1;
            a.r[0] = param_2 + 0x34u;
            (void)tc_call(0x8008b0c0u, &a);
            a.r[0] = 0x817fdfb4u;
            a.r[1] = param_5;
            a.r[2] = param_4;
            (void)tc_call(0x8008ad80u, &a);
            wrf32d(0x817fdfb8u, (f64)rdf32(0x80572908u));
            a.r[0] = 0x817fdfb4u;
            a.r[1] = param_2 + 0x34u;
            f1 = tc_callf(0x8008b15cu, &a);
            a.f[0] = f1;
            f1 = tc_callf(0x8008ad74u, &a);
            if (f1 < (f64)rdf32(0x80572950u)) {
                a.f[0] = (f64)rdf32(0x80572910u);
                a.r[0] = param_2 + 0x34u;
                (void)tc_call(0x8008b0c0u, &a);
            }
            a.r[0] = param_2 + 0x34u;
            (void)tc_call(0x80088a78u, &a);
            a.r[0] = param_2 + 8u;
            a.r[1] = param_2 + 0x40u;
            r3 = tc_call(0x8008acf8u, &a);
            if (r3 != 0u) {
                a.r[0] = 0x817fdfa8u;
                a.r[1] = param_5;
                a.r[2] = param_4;
                (void)tc_call(0x8008ad80u, &a);
                wrf32d(0x817fdfacu, (f64)rdf32(0x80572908u));
                a.r[0] = 0x817fdf9cu;
                a.r[1] = 0x817fdfa8u;
                a.r[2] = param_2 + 0x14u;
                (void)tc_call(0x8008b4bcu, &a);
                wrf32d(0x817fdfa0u, (f64)rdf32(0x80572908u));
                a.r[0] = 0x817fdf90u;
                a.r[1] = 0x817fdfa8u;
                a.r[2] = param_2 + 0x34u;
                (void)tc_call(0x8008b4bcu, &a);
                wrf32d(0x817fdf94u, (f64)rdf32(0x80572908u));
                a.r[0] = 0x817fdfa8u;
                a.r[1] = 0x817fdf9cu;
                f1 = tc_callf(0x8008b15cu, &a);
                f31 = f1;
                a.r[0] = 0x817fdfa8u;
                a.r[1] = 0x817fdf90u;
                f1 = tc_callf(0x8008b15cu, &a);
                f1 = (f64)(f32)(f31 * f1);
                if (f1 < (f64)rdf32(0x80572908u)) {
                    a.r[0] = 0x817fdf84u;
                    a.r[1] = param_2 + 8u;
                    a.r[2] = param_4;
                    (void)tc_call(0x8008ad80u, &a);
                    a.r[0] = 0x817fdf84u;
                    a.r[1] = 0x817fdfa8u;
                    f1 = tc_callf(0x8008b15cu, &a);
                    f1 = (f64)(f32)(f31 * f1);
                    if (f1 < (f64)rdf32(0x80572908u)) {
                        a.r[0] = param_2 + 0x14u;
                        a.r[1] = param_2 + 0x34u;
                        (void)tc_call(0x80085774u, &a);
                    }
                    a.r[0] = param_2 + 0x34u;
                    a.r[1] = 0x804890c8u;
                    (void)tc_call(0x80085774u, &a);
                }
            }
        }
        wr32(param_2, 1u);
        a.r[0] = param_2 + 0x30u;
        a.r[1] = (u32)param_3 + 0xcu;
        (void)tc_call(0x8008b508u, &a);
        a.f[0] = (f64)rdf32(param_2 + 4u);
        f1 = tc_callf(0x8008b4e4u, &a);
        wrf32d(param_2 + 4u, f1);
    } else {
        a.r[0] = 0x817fdf78u;
        a.r[1] = param_4;
        a.r[2] = param_2 + 8u;
        (void)tc_call(0x8008ad80u, &a);
        a.r[0] = param_2 + 0x14u;
        a.r[1] = 0x817fdf78u;
        (void)tc_call(0x80085774u, &a);
        a.r[0] = param_2 + 0x14u;
        (void)tc_call(0x80088a78u, &a);
        a.r[0] = param_2 + 0x34u;
        a.r[1] = 0x804890c8u;
        (void)tc_call(0x80085774u, &a);
        wr32(param_2, 1u);
    }
    return;
}
