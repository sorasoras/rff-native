#include "tc_rt.h"

void fn_80118358(void)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0;
    f2 = (f64)rdf32(0x80574180u);
    f12 = (f64)rdf32(0x8033951cu);
    f10 = (f64)rdf32(0x80339524u);
    f11 = (f64)rdf32(0x80339520u);
    f4 = (f64)rdf32(0x80574184u);
    f5 = (f64)(f32)(f2 + f10);
    f0 = (f64)rdf32(0x80574188u);
    f9 = (f64)(f32)(f12 - f2);
    wrf32d(0x804bc094u, f11);
    f8 = (f64)(f32)(f10 - f2);
    wrf32d(0x804bc090u, (f64)(f32)(f2 + f12));
    f3 = (f64)(f32)(f0 + f12);
    f2 = (f64)(f32)(f0 + f10);
    wrf32d(0x804bc098u, f5);
    f1 = (f64)(f32)(f12 - f0);
    f0 = (f64)(f32)(f10 - f0);
    wrf32d(0x804bc09cu, f9);
    f7 = (f64)(f32)(f4 + f12);
    f6 = (f64)(f32)(f4 + f10);
    wrf32d(0x804bc0a0u, f11);
    f5 = (f64)(f32)(f12 - f4);
    f4 = (f64)(f32)(f10 - f4);
    wrf32d(0x804bc0a4u, f8);
    wrf32d(0x804bc0a8u, f7);
    wrf32d(0x804bc0acu, f11);
    wrf32d(0x804bc0b0u, f10);
    wrf32d(0x804bc0b4u, f12);
    wrf32d(0x804bc0b8u, f11);
    wrf32d(0x804bc0bcu, f6);
    wrf32d(0x804bc0c0u, f5);
    wrf32d(0x804bc0c4u, f11);
    wrf32d(0x804bc0c8u, f10);
    wrf32d(0x804bc0ccu, f12);
    wrf32d(0x804bc0d0u, f11);
    wrf32d(0x804bc0d4u, f4);
    wrf32d(0x804bc0d8u, f3);
    wrf32d(0x804bc0dcu, f11);
    wrf32d(0x804bc0e0u, f2);
    wrf32d(0x804bc0e4u, f1);
    wrf32d(0x804bc0e8u, f11);
    wrf32d(0x804bc0ecu, f0);
    wrf32d(0x804bc0f0u, f1);
    wrf32d(0x804bc0f4u, f11);
    wrf32d(0x804bc0f8u, f2);
    wrf32d(0x804bc0fcu, f3);
    wrf32d(0x804bc100u, f11);
    wrf32d(0x804bc104u, f0);
    return;
}
