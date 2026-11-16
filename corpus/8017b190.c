#include "tc_rt.h"

s32 fn_8017b190(s32 param_1, u32 param_2, u32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    wr32(0x817fde10u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = param_2;
    r3 = tc_call(0x800bf01cu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (rd32(r3) >= param_3) {
        if (param_2 > 0x18u) {
            r3 = 0u;
        } else {
            r3 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fc90ec0u);
            sw_ = r3;
            switch (sw_) {
            case 0x8017b1f0u:
                r3 = (u32)param_1 + 0x840u;
                break;
            case 0x8017b1f8u:
                wr32(0x817fdf84u, (u32)param_1 + 0x1500u);
                wr32(0x817fdf88u, (u32)param_1 + 0x15a0u);
                wr32(0x817fdf8cu, (u32)param_1 + 0x1600u);
                wr32(0x817fdf90u, (u32)param_1 + 0x1660u);
                wr32(0x817fdf94u, (u32)param_1 + 0x16c0u);
                r3 = rd32(((param_3 << 2u) & 0xfffffffcu) - 0x7e80207cu);
                break;
            case 0x8017b230u:
                wr32(0x817fdea0u, (u32)param_1 + 0x1760u);
                wr32(0x817fdea4u, (u32)param_1 + 0x1800u);
                wr32(0x817fdea8u, (u32)param_1 + 0x18a0u);
                wr32(0x817fdeacu, (u32)param_1 + 0x1900u);
                r3 = rd32(((param_3 << 2u) & 0xfffffffcu) - 0x7e802160u);
                break;
            case 0x8017b260u:
                wr32(0x817fde90u, (u32)param_1 + 0x1960u);
                wr32(0x817fde94u, (u32)param_1 + 0x1a00u);
                wr32(0x817fde98u, (u32)param_1 + 0x1aa0u);
                r3 = rd32(((param_3 << 2u) & 0xfffffffcu) - 0x7e802170u);
                break;
            case 0x8017b288u:
                wr32(0x817fde28u, (u32)param_1 + 0x1b00u);
                wr32(0x817fde2cu, (u32)param_1 + 0x1ba0u);
                r3 = rd32(((param_3 << 2u) & 0xfffffffcu) - 0x7e8021d8u);
                break;
            case 0x8017b2a8u:
                r3 = (u32)param_1 + 0x1c40u;
                break;
            case 0x8017b2b0u:
                wr32(0x817fde80u, (u32)param_1 + 0x1ce0u);
                wr32(0x817fde84u, (u32)param_1 + 0x1e00u);
                wr32(0x817fde88u, (u32)param_1 + 0x1f20u);
                wr32(0x817fde8cu, (u32)param_1 + 0x1fc0u);
                r3 = rd32(((param_3 << 2u) & 0xfffffffcu) - 0x7e802180u);
                break;
            case 0x8017b2e0u:
                wr32(0x817fdfc0u, (u32)param_1 + 0x2060u);
                wr32(0x817fdfc4u, (u32)param_1 + 0x2100u);
                wr32(0x817fdfc8u, (u32)param_1 + 0x22c0u);
                wr32(0x817fdfccu, (u32)param_1 + 0x2320u);
                wr32(0x817fdfd0u, (u32)param_1 + 0x2380u);
                wr32(0x817fdfd4u, (u32)param_1 + 0x23e0u);
                wr32(0x817fdfd8u, (u32)param_1 + 0x2480u);
                wr32(0x817fdfdcu, (u32)param_1 + 0x2520u);
                wr32(0x817fdfe0u, (u32)param_1 + 0x25c0u);
                wr32(0x817fdfe4u, (u32)param_1 + 0x2660u);
                r3 = rd32(((param_3 << 2u) & 0xfffffffcu) - 0x7e802040u);
                break;
            case 0x8017b340u:
                wr32(0x817fdf70u, (u32)param_1 + 0x26c0u);
                wr32(0x817fdf74u, (u32)param_1 + 0x2760u);
                wr32(0x817fdf78u, (u32)param_1 + 0x27c0u);
                wr32(0x817fdf7cu, (u32)param_1 + 0x2860u);
                wr32(0x817fdf80u, (u32)param_1 + 0x2900u);
                r3 = rd32(((param_3 << 2u) & 0xfffffffcu) - 0x7e802090u);
                break;
            case 0x8017b378u:
                wr32(0x817fde70u, (u32)param_1 + 0x29a0u);
                wr32(0x817fde74u, (u32)param_1 + 0x2a40u);
                wr32(0x817fde78u, (u32)param_1 + 0x2ae0u);
                wr32(0x817fde7cu, (u32)param_1 + 0x2b80u);
                r3 = rd32(((param_3 << 2u) & 0xfffffffcu) - 0x7e802190u);
                break;
            case 0x8017b3a8u:
                wr32(0x817fde20u, (u32)param_1 + 0x2c20u);
                wr32(0x817fde24u, (u32)param_1 + 0x2cc0u);
                r3 = rd32(((param_3 << 2u) & 0xfffffffcu) - 0x7e8021e0u);
                break;
            case 0x8017b3c8u:
                wr32(0x817fdf58u, (u32)param_1 + 0x2d60u);
                wr32(0x817fdf5cu, (u32)param_1 + 0x2dc0u);
                wr32(0x817fdf60u, (u32)param_1 + 0x2e60u);
                wr32(0x817fdf64u, (u32)param_1 + 0x2f00u);
                wr32(0x817fdf68u, (u32)param_1 + 0x2fa0u);
                wr32(0x817fdf6cu, (u32)param_1 + 0x3040u);
                r3 = rd32(((param_3 << 2u) & 0xfffffffcu) - 0x7e8020a8u);
                break;
            case 0x8017b408u:
                wr32(0x817fdf38u, (u32)param_1 + 0x30e0u);
                wr32(0x817fdf3cu, (u32)param_1 + 0x3200u);
                wr32(0x817fdf40u, (u32)param_1 + 0x32a0u);
                wr32(0x817fdf44u, (u32)param_1 + 0x3340u);
                wr32(0x817fdf48u, (u32)param_1 + 0x33e0u);
                wr32(0x817fdf4cu, (u32)param_1 + 0x3480u);
                wr32(0x817fdf50u, (u32)param_1 + 0x3520u);
                r3 = rd32(((param_3 << 2u) & 0xfffffffcu) - 0x7e8020c8u);
                break;
            case 0x8017b450u:
                wr32(0x817fdf20u, (u32)param_1 + 0x3640u);
                wr32(0x817fdf24u, (u32)param_1 + 0x3760u);
                wr32(0x817fdf28u, (u32)param_1 + 0x3880u);
                wr32(0x817fdf2cu, (u32)param_1 + 0x3920u);
                wr32(0x817fdf30u, (u32)param_1 + 0x39c0u);
                wr32(0x817fdf34u, (u32)param_1 + 0x3a60u);
                r3 = rd32(((param_3 << 2u) & 0xfffffffcu) - 0x7e8020e0u);
                break;
            case 0x8017b490u:
                wr32(0x817fdf04u, (u32)param_1 + 0x3b00u);
                wr32(0x817fdf08u, (u32)param_1 + 0x3ba0u);
                wr32(0x817fdf0cu, (u32)param_1 + 0x3c40u);
                wr32(0x817fdf10u, (u32)param_1 + 0x3ce0u);
                wr32(0x817fdf14u, (u32)param_1 + 0x3d80u);
                wr32(0x817fdf18u, (u32)param_1 + 0x3e20u);
                wr32(0x817fdf1cu, (u32)param_1 + 0x3fe0u);
                r3 = rd32(((param_3 << 2u) & 0xfffffffcu) - 0x7e8020fcu);
                break;
            case 0x8017b4d8u:
                wr32(0x817fdee8u, (u32)param_1 + 0x4080u);
                wr32(0x817fdeecu, (u32)param_1 + 0x4120u);
                wr32(0x817fdef0u, (u32)param_1 + 0x41c0u);
                wr32(0x817fdef4u, (u32)param_1 + 0x4260u);
                wr32(0x817fdef8u, (u32)param_1 + 0x4300u);
                wr32(0x817fdefcu, (u32)param_1 + 0x43a0u);
                wr32(0x817fdf00u, (u32)param_1 + 0x4440u);
                r3 = rd32(((param_3 << 2u) & 0xfffffffcu) - 0x7e802118u);
                break;
            case 0x8017b520u:
                wr32(0x817fde18u, (u32)param_1 + 0x44e0u);
                wr32(0x817fde1cu, (u32)param_1 + 0x4580u);
                r3 = rd32(((param_3 << 2u) & 0xfffffffcu) - 0x7e8021e8u);
                break;
            case 0x8017b540u:
                wr32(0x817fdec8u, (u32)param_1 + 0x46a0u);
                wr32(0x817fdeccu, (u32)param_1 + 0x4740u);
                wr32(0x817fded0u, (u32)param_1 + 0x47e0u);
                wr32(0x817fded4u, (u32)param_1 + 0x4880u);
                wr32(0x817fded8u, (u32)param_1 + 0x4920u);
                wr32(0x817fdedcu, (u32)param_1 + 0x49c0u);
                wr32(0x817fdee0u, (u32)param_1 + 0x4a60u);
                wr32(0x817fdee4u, (u32)param_1 + 0x4b00u);
                r3 = rd32(((param_3 << 2u) & 0xfffffffcu) - 0x7e802138u);
                break;
            case 0x8017b590u:
                wr32(0x817fde60u, (u32)param_1 + 0x4c20u);
                wr32(0x817fde64u, (u32)param_1 + 0x4d40u);
                wr32(0x817fde68u, (u32)param_1 + 0x4e60u);
                wr32(0x817fde6cu, (u32)param_1 + 0x4f00u);
                r3 = rd32(((param_3 << 2u) & 0xfffffffcu) - 0x7e8021a0u);
                break;
            case 0x8017b5c0u:
                wr32(0x817fde50u, (u32)param_1 + 0x4fa0u);
                wr32(0x817fde54u, (u32)param_1 + 0x5040u);
                wr32(0x817fde58u, (u32)param_1 + 0x50e0u);
                wr32(0x817fde5cu, (u32)param_1 + 0x5180u);
                r3 = rd32(((param_3 << 2u) & 0xfffffffcu) - 0x7e8021b0u);
                break;
            case 0x8017b5f0u:
                wr32(0x817fdeb0u, (u32)param_1 + 0x5220u);
                wr32(0x817fdeb4u, (u32)param_1 + 0x52c0u);
                wr32(0x817fdeb8u, (u32)param_1 + 0x5360u);
                wr32(0x817fdebcu, (u32)param_1 + 0x5480u);
                wr32(0x817fdec0u, (u32)param_1 + 0x55a0u);
                r3 = rd32(((param_3 << 2u) & 0xfffffffcu) - 0x7e802150u);
                break;
            case 0x8017b628u:
                wr32(0x817fde40u, (u32)param_1 + 0x56c0u);
                wr32(0x817fde44u, (u32)param_1 + 0x57e0u);
                wr32(0x817fde48u, (u32)param_1 + 0x5900u);
                wr32(0x817fde4cu, (u32)param_1 + 0x59a0u);
                r3 = rd32(((param_3 << 2u) & 0xfffffffcu) - 0x7e8021c0u);
                break;
            case 0x8017b658u:
                wr32(0x817fde30u, (u32)param_1 + 0x5ac0u);
                wr32(0x817fde34u, (u32)param_1 + 0x5b60u);
                wr32(0x817fde38u, (u32)param_1 + 0x5c00u);
                wr32(0x817fde3cu, (u32)param_1 + 0x5ca0u);
                r3 = rd32(((param_3 << 2u) & 0xfffffffcu) - 0x7e8021d0u);
                break;
            case 0x8017b688u:
                r3 = (u32)param_1 + 0x5dc0u;
                break;
            case 0x8017b690u:
                wr32(0x817fdf98u, (u32)param_1 + 0x6000u);
                wr32(0x817fdf9cu, (u32)param_1 + 0x6120u);
                wr32(0x817fdfa0u, (u32)param_1 + 0x6240u);
                wr32(0x817fdfa4u, (u32)param_1 + 0x6360u);
                wr32(0x817fdfa8u, (u32)param_1 + 0x6480u);
                wr32(0x817fdfacu, (u32)param_1 + 0x6520u);
                wr32(0x817fdfb0u, (u32)param_1 + 0x65c0u);
                wr32(0x817fdfb4u, (u32)param_1 + 0x6660u);
                wr32(0x817fdfb8u, (u32)param_1 + 0x6700u);
                wr32(0x817fdfbcu, (u32)param_1 + 0x67a0u);
                r3 = rd32(((param_3 << 2u) & 0xfffffffcu) - 0x7e802068u);
                break;
            default:
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                a.f[0] = f1;
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
                return (s32)r3;
            }
        }
    } else {
        r3 = 0u;
    }
    return (s32)r3;
}
