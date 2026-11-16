#include "tc_rt.h"

u32 fn_8007d150(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r3 = param_1;
    r5 = 0u;
    if (param_1 <= 0x3fu) {
        r4 = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7fcaf380u);
        sw_ = r4;
        switch (sw_) {
        case 0x8007d180u:
            r3 = tc_call(0x800f62d8u, &a);
            r5 = r3;
            break;
        case 0x8007d18cu:
            r3 = tc_call(0x800f62e4u, &a);
            r5 = r3;
            break;
        case 0x8007d198u:
            r3 = tc_call(0x801459d8u, &a);
            r5 = r3;
            break;
        case 0x8007d1a4u:
            r3 = tc_call(0x800f62f0u, &a);
            r5 = r3;
            break;
        case 0x8007d1b0u:
            r3 = tc_call(0x801459e4u, &a);
            r5 = r3;
            break;
        case 0x8007d1bcu:
            r3 = tc_call(0x800f62fcu, &a);
            r5 = r3;
            break;
        case 0x8007d1c8u:
            r3 = tc_call(0x800f6308u, &a);
            r5 = r3;
            break;
        case 0x8007d1d4u:
            r3 = tc_call(0x800f6314u, &a);
            r5 = r3;
            break;
        case 0x8007d1e0u:
            r3 = tc_call(0x800f6320u, &a);
            r5 = r3;
            break;
        case 0x8007d1ecu:
            r3 = tc_call(0x800f632cu, &a);
            r5 = r3;
            break;
        case 0x8007d1f8u:
            r3 = tc_call(0x800f6338u, &a);
            r5 = r3;
            break;
        case 0x8007d204u:
            r3 = tc_call(0x800f6344u, &a);
            r5 = r3;
            break;
        case 0x8007d210u:
            r3 = tc_call(0x8014eb30u, &a);
            r5 = r3;
            break;
        case 0x8007d21cu:
            r3 = tc_call(0x8010c2ccu, &a);
            r5 = r3;
            break;
        case 0x8007d228u:
            r3 = tc_call(0x801459ccu, &a);
            r5 = r3;
            break;
        case 0x8007d234u:
            r3 = tc_call(0x80169cb4u, &a);
            r5 = r3;
            break;
        case 0x8007d240u:
            r3 = tc_call(0x80169cc0u, &a);
            r5 = r3;
            break;
        case 0x8007d24cu:
            r3 = tc_call(0x8010c2e4u, &a);
            r5 = r3;
            break;
        case 0x8007d258u:
            r3 = tc_call(0x8010c2d8u, &a);
            r5 = r3;
            break;
        case 0x8007d264u:
            r3 = tc_call(0x80118770u, &a);
            r5 = r3;
            break;
        case 0x8007d270u:
            r3 = tc_call(0x80169cccu, &a);
            r5 = r3;
            break;
        case 0x8007d27cu:
            r3 = tc_call(0x80169cd8u, &a);
            r5 = r3;
            break;
        case 0x8007d288u:
            r3 = tc_call(0x800f6350u, &a);
            r5 = r3;
            break;
        case 0x8007d294u:
            r3 = tc_call(0x800f635cu, &a);
            r5 = r3;
            break;
        case 0x8007d2a0u:
            r3 = tc_call(0x800f6368u, &a);
            r5 = r3;
            break;
        case 0x8007d2acu:
            r3 = tc_call(0x800f6374u, &a);
            r5 = r3;
            break;
        case 0x8007d2b8u:
            r3 = tc_call(0x800f62a8u, &a);
            r5 = r3;
            break;
        case 0x8007d2c4u:
            r3 = tc_call(0x80121528u, &a);
            r5 = r3;
            break;
        case 0x8007d2d0u:
            r3 = tc_call(0x80121534u, &a);
            r5 = r3;
            break;
        case 0x8007d2dcu:
            r3 = tc_call(0x80121764u, &a);
            r5 = r3;
            break;
        case 0x8007d2e8u:
            r3 = tc_call(0x8011a4bcu, &a);
            r5 = r3;
            break;
        case 0x8007d2f4u:
            r3 = tc_call(0x8014eb3cu, &a);
            r5 = r3;
            break;
        case 0x8007d300u:
            r3 = tc_call(0x8014eb48u, &a);
            r5 = r3;
            break;
        case 0x8007d30cu:
            r3 = tc_call(0x8014eb54u, &a);
            r5 = r3;
            break;
        case 0x8007d318u:
            r3 = tc_call(0x80169ce4u, &a);
            r5 = r3;
            break;
        case 0x8007d324u:
            r3 = tc_call(0x8013e344u, &a);
            r5 = r3;
            break;
        case 0x8007d330u:
            r3 = tc_call(0x800f62b4u, &a);
            r5 = r3;
            break;
        case 0x8007d33cu:
            r3 = tc_call(0x8011a4c8u, &a);
            r5 = r3;
            break;
        case 0x8007d348u:
            r3 = tc_call(0x8010c9f8u, &a);
            r5 = r3;
            break;
        case 0x8007d354u:
            r3 = tc_call(0x80118444u, &a);
            r5 = r3;
            break;
        case 0x8007d360u:
            r3 = tc_call(0x800f62c0u, &a);
            r5 = r3;
            break;
        case 0x8007d36cu:
            r3 = tc_call(0x80121758u, &a);
            r5 = r3;
            break;
        case 0x8007d378u:
            r3 = tc_call(0x80169c84u, &a);
            r5 = r3;
            break;
        case 0x8007d384u:
            r3 = tc_call(0x80169c90u, &a);
            r5 = r3;
            break;
        case 0x8007d390u:
            r3 = tc_call(0x8014eb60u, &a);
            r5 = r3;
            break;
        case 0x8007d39cu:
            r3 = tc_call(0x8014eb6cu, &a);
            r5 = r3;
            break;
        case 0x8007d3a8u:
            r3 = tc_call(0x800f62ccu, &a);
            r5 = r3;
            break;
        case 0x8007d3b4u:
            r3 = tc_call(0x80169cf0u, &a);
            r5 = r3;
            break;
        case 0x8007d3c0u:
            r3 = tc_call(0x80169cfcu, &a);
            r5 = r3;
            break;
        case 0x8007d3ccu:
            r3 = tc_call(0x80169d08u, &a);
            r5 = r3;
            break;
        case 0x8007d3d8u:
            r3 = tc_call(0x80169d14u, &a);
            r5 = r3;
            break;
        case 0x8007d3e4u:
            r3 = tc_call(0x80169d20u, &a);
            r5 = r3;
            break;
        case 0x8007d3f0u:
            r3 = tc_call(0x80118450u, &a);
            r5 = r3;
            break;
        case 0x8007d3fcu:
            r3 = tc_call(0x80169c9cu, &a);
            r5 = r3;
            break;
        case 0x8007d408u:
            r3 = tc_call(0x80169d2cu, &a);
            r5 = r3;
            break;
        case 0x8007d414u:
            r3 = tc_call(0x80169d38u, &a);
            r5 = r3;
            break;
        case 0x8007d420u:
            r3 = tc_call(0x80169ca8u, &a);
            r5 = r3;
            break;
        case 0x8007d42cu:
            r3 = tc_call(0x80169d44u, &a);
            r5 = r3;
            break;
        case 0x8007d438u:
            r3 = tc_call(0x80169d50u, &a);
            r5 = r3;
            break;
        case 0x8007d444u:
            r3 = tc_call(0x8011845cu, &a);
            r5 = r3;
            break;
        case 0x8007d450u:
            r3 = tc_call(0x80118468u, &a);
            r5 = r3;
            break;
        case 0x8007d45cu:
            r3 = tc_call(0x8011842cu, &a);
            r5 = r3;
            break;
        case 0x8007d468u:
            r3 = tc_call(0x80118438u, &a);
            r5 = r3;
            break;
        case 0x8007d474u:
            r3 = tc_call(0x80169d5cu, &a);
            r5 = r3;
            break;
        default:
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = 0.0;
            r3 = tc_call(sw_, &a);
            r0 = 0u;
            r4 = tc_lastr4();
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            r11 = 0u;
            r12 = 0u;
            f0 = 0.0;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            f9 = 0.0;
            f10 = 0.0;
            f11 = 0.0;
            f12 = 0.0;
            f13 = 0.0;
            ctr = 0u;
            return r3;
        }
    }
    return r5;
}
