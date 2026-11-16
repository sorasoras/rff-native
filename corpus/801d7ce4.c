#include "tc_rt.h"

static u64 px_f2b(f64 x){union{f64 d;u64 b;}v;v.d=x;return v.b;}

static f64 px_b2f(u64 x){union{f64 d;u64 b;}v;v.b=x;return v.d;}

static f64 px_ctiw(f64 b,s32 w){u64 r=0xfff8000000000000ull|(u32)w;if(w==0&&(px_f2b(b)>>63)!=0)r|=0x100000000ull;return px_b2f(r);}

void fn_801d7ce4(u32 param_r3){u32 c0gt=0,c0lt=0,c1gt=0,ca=0,ctr=0,r0=0,r3=0,r4=0,r5=0,r6=0,r7=0,r8=0;u32 r9=0,r10=0,r11=0,r12=0,r25=0,r30=0,r31=0,sw_=0;
f64 f0=0.0,f1=0.0,f2=0.0,f3=0.0,f4=0.0,f5=0.0,f6=0.0,f7=0.0,f8=0.0,f9=0.0,f10=0.0,f11=0.0;f64 f12=0.0,f13=0.0,f31=0.0;TcArgs a={0};TcArgs za={0};
wr32(0x817fded0u,0x817fe000u);wr32(0x817fe004u,0x817ff000u);wrf64(0x817fdff0u,0.0);wrf32d(0x817fdff8u,0.0);wrf32d(0x817fdffcu,0.0);wr32(0x817fdfd4u,0u);
wr32(0x817fdfd8u,0u);wr32(0x817fdfdcu,0u);wr32(0x817fdfe0u,0u);wr32(0x817fdfe4u,0u);wr32(0x817fdfe8u,0u);wr32(0x817fdfecu,0u);r12=rd32(param_r3);
wr32(0x817fdfa8u,0x43300000u);r12=rd32(r12+0x70u);wr32(0x817fdfb0u,0x43300000u);a=za;a.r[0]=param_r3;r3=tc_call(r12,&a);r4=tc_lastr4();f2=0.0;
if(r3==0u&&(u32)((s32)((rd32(param_r3+0x148u)<<3u)&0xc0000000u)>>31)==0u){f0=(f64)rdf32(0x80576090u);f1=(f64)rdf32(rd32(param_r3+0x70u)+0x54u);
f1=px_ctiw(f1,ppc_fctiwz(f1));wrf32d(0x817fdfa0u,f0);wrf32d(0x817fdf9cu,f0);wrf32d(0x817fdf98u,f0);r0=rd32(param_r3+0x100u);wrf64(0x817fdfb8u,f1);
r31=rd32(0x817fdfbcu);if(r0<=0xbu){r0=(r0<<2u)&0xfffffffcu;r3=rd32(r0-0x7fc8b038u);sw_=r3;switch(sw_){case 0x801d9604u:return;case 0x801d8fe8u:a=za;
a.r[0]=param_r3;a.r[1]=0x817fdf98u;a.r[2]=0x8033c05fu;a.r[3]=0x804890c8u;a.f[0]=f1;f1=tc_callf(rd32(rd32(param_r3)+0x38u),&a);if(rd32(param_r3+0xda4u)==0u){
r0=(u32)((s32)ppc_mulhw(1717986919,(s32)r31)>>2);r0=r0+((r0>>0x1fu)&1u);r0=r0*0xau;r0=r31-r0;}else{r3=(r31>>0x1fu)&1u;r0=((r31<<0x1du)&0xe0000000u)-r3;
r0=(r0<<3u)|(r0>>0x1du);r0=r0+r3;}if(r0==0u){a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;f1=tc_callf(0x801dab0cu,&a);f0=(f64)rdf32(0x80576090u);
if((f1>f0)||(f1==f0)){f1=(f64)rdf32(0x8057610cu);r5=rd32(0x8048912cu);r0=rd32(0x80489130u);wr32(0x817fdef0u,rd32(0x80489128u));wr32(0x817fdef4u,r5);
wr32(0x817fdef8u,r0);a=za;a.f[0]=f1;a.r[0]=0x817fdef0u;a.r[1]=0x817fdef0u;(void)tc_call(0x802343c8u,&a);a=za;a.f[0]=(f64)rdf32(0x80576114u);a.r[0]=0x18u;
a.r[1]=0x817fdf98u;a.r[2]=0x817fdef0u;a.r[3]=0x804b15c0u;(void)tc_call(0x800d782cu,&a);}a=za;a.f[0]=(f64)rdf32(0x805760e0u);a.f[1]=(f64)rdf32(0x80576134u);
a.f[2]=(f64)rdf32(0x805760f4u);a.f[3]=(f64)rdf32(0x80576104u);a.r[0]=(rd32(0x805710e0u)*0x6d0u)-0x7fc2e738u;f1=tc_callf(0x80056b18u,&a);}if(r31!=1u){
if(r31==0x1cu){a=za;a.r[0]=param_r3;f1=tc_callf(0x801d98ecu,&a);}}else{a=za;a.r[0]=param_r3;a.r[1]=1u;f1=tc_callf(0x801d98ecu,&a);}
r0=(u32)((s32)ppc_mulhw(1717986919,(s32)r31)>>1);r0=r0+((r0>>0x1fu)&1u);r0=r0*5u;r0=r31-r0;if(r0!=0u)break;a=za;r3=tc_call(0x80040b64u,&a);
f1=rdf64(0x80576138u);r4=ppc_mulhwu(0x6719f361u,r3);r3=r3-(((((((r3-r4)>>1u)&0x7fffffffu)+r4)>>0xbu)&0x1fffffu)*0xb68u);wr32(0x817fdfacu,r3+0x1e0u);
wrf32d(0x817fdf98u,(f64)(f32)(rdf64(0x817fdfa8u)-f1));a=za;r3=tc_call(0x80040b64u,&a);f2=rdf64(0x80576138u);wrf32d(0x817fdf9cu,(f64)rdf32(0x8057612cu));
f1=(f64)rdf32(0x80576128u);wr32(0x817fdfb4u,r3-(((ppc_mulhwu(0x5d9f7391u,r3)>>0xau)&0x3fffffu)*0xaf0u)+0x6a4u);
wrf32d(0x817fdfa0u,(f64)(f32)((f64)(f32)(rdf64(0x817fdfb0u)-f2)*f1));a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;f1=tc_callf(0x801dab0cu,&a);
f0=(f64)rdf32(0x80576090u);if(!((f1>f0)||(f1==f0)))break;a=za;a.f[0]=f0;a.r[0]=0xffffffffu;a.r[1]=1u;r3=tc_call(0x8017748cu,&a);r25=r3;if(r3!=0u){
wr32(r3+0x124u,0x20104fu);f2=(f64)rdf32(0x80576090u);f5=(f64)rdf32(0x817fdf98u);f1=(f64)rdf32(0x80576108u);wrf32d(r3+0x100u,f5);f0=(f64)rdf32(0x805760dcu);
f4=(f64)rdf32(0x817fdf9cu);wrf32d(r3+0x104u,f4);f3=(f64)rdf32(0x817fdfa0u);wrf32d(r3+0x108u,f3);wrf32d(r3+8u,f5);wrf32d(r3+0xcu,f4);wrf32d(r3+0x10u,f3);
wr32(r3+0x14cu,0x7fu);wr32(r3+0x154u,0x80u);wr32(r3+0x158u,0xfb7u);wr32(r3+0x160u,0x80u);wr32(r3+0x164u,0xfb7u);wr8(r3+0x1a4u,(u8)((u32)rd8(r3+0x1a4u)|0x60u));
wrf32d(r3+0x128u,f2);wrf32d(r3+0x134u,f1);wrf32d(r3+0x138u,f0);wr32(r3+0x148u,0x2du);a=za;a.r[0]=r3;a.r[1]=param_r3;(void)tc_call(0x80177d54u,&a);
f0=(f64)rdf32(param_r3+0xde8u);wrf32d(r25+0x130u,f0);wrf32d(r25+0x24u,f0);}f1=(f64)rdf32(0x805760dcu);wrf32d(0x817fdf9cu,(f64)rdf32(0x80576130u));a=za;
a.f[0]=f1;a.r[0]=0x9eu;a.r[1]=0x817fdf98u;a.r[2]=0x804b15c0u;a.r[3]=0x804890c8u;r3=tc_call(0x800d7768u,&a);
wr32(param_r3+((rd32(param_r3+0xda0u)<<2u)&0xfffffffcu)+0xd78u,r3);a=za;a.r[0]=rd32(param_r3+((rd32(param_r3+0xda0u)<<2u)&0xfffffffcu)+0xd78u);a.r[1]=0x2du;
f1=tc_callf(0x80157f28u,&a);r4=rd32(param_r3+0xda0u)+1u;r0=r4-0xau;ca=(r0-0x7ffffff6u)<r0;r0=r0-0x7ffffff6u;r0=r4& ~(u32)((u64)~r0+(u64)r0+(u64)ca);
wr32(param_r3+0xda0u,r0);break;case 0x801d8908u:if(r31==5u){a=za;a.r[0]=param_r3;f1=tc_callf(0x801d9978u,&a);r4=tc_lastr4();f2=0.0;}c1gt=(s32)r31>20;
if(r31!=0x14u){if(r31!=0x44u){if(r31!=0x5au){if(c1gt&&(s32)rd32(param_r3+0xda0u)<10){r3=ppc_mulhw(1431655766,(s32)r31);if((r31-((r3+((r3>>0x1fu)&1u))*3u))==0u){
r0=(u32)rd8(param_r3+0xd11u);if(r0==4u){r0=(u32)rd8(param_r3+0xd10u);}r0=r0&0xffu;c0lt=(s32)r0<2;if(r0==2u){a=za;r3=tc_call(0x80040b64u,&a);
f1=rdf64(0x80576138u);r4=ppc_mulhwu(0x6719f361u,r3);r3=r3-(((((((r3-r4)>>1u)&0x7fffffffu)+r4)>>0xau)&0x3fffffu)*0x5b4u);wr32(0x817fdfacu,r3+0x794u);
wrf32d(0x817fdf98u,(f64)(f32)(rdf64(0x817fdfa8u)-f1));a=za;r3=tc_call(0x80040b64u,&a);f1=rdf64(0x80576138u);
r3=r3-(((ppc_mulhwu(0x5d9f7391u,r3)>>9u)&0x7fffffu)*0x578u);wr32(0x817fdfb4u,r3+0xc1cu);wrf32d(0x817fdfa0u,(f64)(f32)(rdf64(0x817fdfb0u)-f1));}else if(!c0lt){
if((s32)r0<4){a=za;r3=tc_call(0x80040b64u,&a);f1=rdf64(0x80576138u);r4=ppc_mulhwu(0x6719f361u,r3);
r3=r3-(((((((r3-r4)>>1u)&0x7fffffffu)+r4)>>0xau)&0x3fffffu)*0x5b4u);wr32(0x817fdfacu,r3+0x1e0u);wrf32d(0x817fdf98u,(f64)(f32)(rdf64(0x817fdfa8u)-f1));a=za;
r3=tc_call(0x80040b64u,&a);f1=rdf64(0x80576138u);r3=r3-(((ppc_mulhwu(0x5d9f7391u,r3)>>9u)&0x7fffffu)*0x578u);wr32(0x817fdfb4u,r3+0xc1cu);
wrf32d(0x817fdfa0u,(f64)(f32)(rdf64(0x817fdfb0u)-f1));}}else{c0lt=(s32)r0<0;if(r0==0u){a=za;r3=tc_call(0x80040b64u,&a);f1=rdf64(0x80576138u);
r4=ppc_mulhwu(0x6719f361u,r3);r3=r3-(((((((r3-r4)>>1u)&0x7fffffffu)+r4)>>0xau)&0x3fffffu)*0x5b4u);wr32(0x817fdfacu,r3+0x1e0u);
wrf32d(0x817fdf98u,(f64)(f32)(rdf64(0x817fdfa8u)-f1));a=za;r3=tc_call(0x80040b64u,&a);f1=rdf64(0x80576138u);
r3=r3-(((ppc_mulhwu(0x5d9f7391u,r3)>>9u)&0x7fffffu)*0x578u);wr32(0x817fdfb4u,r3+0x6a4u);wrf32d(0x817fdfa0u,(f64)(f32)(rdf64(0x817fdfb0u)-f1));}else if(!c0lt){
a=za;r3=tc_call(0x80040b64u,&a);f1=rdf64(0x80576138u);r4=ppc_mulhwu(0x6719f361u,r3);r3=r3-(((((((r3-r4)>>1u)&0x7fffffffu)+r4)>>0xau)&0x3fffffu)*0x5b4u);
wr32(0x817fdfacu,r3+0x794u);wrf32d(0x817fdf98u,(f64)(f32)(rdf64(0x817fdfa8u)-f1));a=za;r3=tc_call(0x80040b64u,&a);f1=rdf64(0x80576138u);
r3=r3-(((ppc_mulhwu(0x5d9f7391u,r3)>>9u)&0x7fffffu)*0x578u);wr32(0x817fdfb4u,r3+0x6a4u);wrf32d(0x817fdfa0u,(f64)(f32)(rdf64(0x817fdfb0u)-f1));}}
f1=(f64)(f32)((f64)rdf32(0x817fdfa0u)*(f64)rdf32(0x80576128u));wrf32d(0x817fdf9cu,(f64)rdf32(0x8057612cu));wrf32d(0x817fdfa0u,f1);a=za;a.r[0]=param_r3;
a.r[1]=0x817fdf98u;f1=tc_callf(0x801dab0cu,&a);f0=(f64)rdf32(0x80576090u);if((f1>f0)||(f1==f0)){a=za;a.f[0]=f0;a.r[0]=0xffffffffu;a.r[1]=1u;
r3=tc_call(0x8017748cu,&a);r25=r3;if(r3!=0u){wr32(r3+0x124u,0x20104fu);f2=(f64)rdf32(0x80576090u);f5=(f64)rdf32(0x817fdf98u);f1=(f64)rdf32(0x80576108u);
wrf32d(r3+0x100u,f5);f0=(f64)rdf32(0x805760dcu);f4=(f64)rdf32(0x817fdf9cu);wrf32d(r3+0x104u,f4);f3=(f64)rdf32(0x817fdfa0u);wrf32d(r3+0x108u,f3);
wrf32d(r3+8u,f5);wrf32d(r3+0xcu,f4);wrf32d(r3+0x10u,f3);wr32(r3+0x14cu,0x7fu);wr32(r3+0x154u,0x80u);wr32(r3+0x158u,0xfb7u);wr32(r3+0x160u,0x80u);
wr32(r3+0x164u,0xfb7u);wr8(r3+0x1a4u,(u8)((u32)rd8(r3+0x1a4u)|0x60u));wrf32d(r3+0x128u,f2);wrf32d(r3+0x134u,f1);wrf32d(r3+0x138u,f0);wr32(r3+0x148u,0x2du);a=za;
a.r[0]=r3;a.r[1]=param_r3;(void)tc_call(0x80177d54u,&a);f0=(f64)rdf32(param_r3+0xde8u);wrf32d(r25+0x130u,f0);wrf32d(r25+0x24u,f0);}f1=(f64)rdf32(0x805760dcu);
wrf32d(0x817fdf9cu,(f64)rdf32(0x80576130u));a=za;a.f[0]=f1;a.r[0]=0x9eu;a.r[1]=0x817fdf98u;a.r[2]=0x804b15c0u;a.r[3]=0x804890c8u;r3=tc_call(0x800d7768u,&a);
wr32(param_r3+((rd32(param_r3+0xda0u)<<2u)&0xfffffffcu)+0xd78u,r3);a=za;a.r[0]=rd32(param_r3+((rd32(param_r3+0xda0u)<<2u)&0xfffffffcu)+0xd78u);a.r[1]=0x2du;
(void)tc_call(0x80157f28u,&a);wr32(param_r3+0xda0u,rd32(param_r3+0xda0u)+1u);}a=za;a.f[0]=(f64)rdf32(0x805760e0u);a.f[1]=(f64)rdf32(0x80576134u);
a.f[2]=(f64)rdf32(0x805760f4u);a.f[3]=(f64)rdf32(0x80576104u);a.r[0]=(rd32(0x805710e0u)*0x6d0u)-0x7fc2e738u;f1=tc_callf(0x80056b18u,&a);}}}else{a=za;
a.r[0]=param_r3;a.r[1]=r4;a.f[0]=(f64)rdf32(0x805760dcu);f1=tc_callf(rd32(rd32(param_r3)+0x50u),&a);r3=rd32(param_r3+0xd68u);if(r3!=0u){a=za;a.r[0]=r3;
f1=tc_callf(0x80157e6cu,&a);wr32(param_r3+0xd68u,0u);}}}else{if(rd32(param_r3+0xda4u)==0u){f1=(f64)rdf32(0x80576124u);}else{f1=(f64)rdf32(0x80576120u);}a=za;
a.r[0]=param_r3;a.r[1]=r4;a.f[0]=f1;(void)tc_call(rd32(rd32(param_r3)+0x50u),&a);a=za;a.r[0]=param_r3;(void)tc_call(0x801d98ecu,&a);a=za;a.r[0]=param_r3;
a.r[1]=1u;f1=tc_callf(0x801d9978u,&a);a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;a.r[2]=0x8033c052u;a.r[3]=0x804890c8u;a.f[0]=f1;
(void)tc_call(rd32(rd32(param_r3)+0x38u),&a);f1=(f64)rdf32(0x8057610cu);r5=rd32(0x8048912cu);r0=rd32(0x80489130u);wr32(0x817fdf08u,rd32(0x80489128u));
wr32(0x817fdf0cu,r5);wr32(0x817fdf10u,r0);a=za;a.f[0]=f1;a.r[0]=0x817fdf08u;a.r[1]=0x817fdf08u;(void)tc_call(0x802343c8u,&a);a=za;
a.f[0]=(f64)rdf32(0x80576114u);a.r[0]=0x18u;a.r[1]=0x817fdf98u;a.r[2]=0x817fdf08u;a.r[3]=0x804b15c0u;(void)tc_call(0x800d782cu,&a);a=za;
a.f[0]=(f64)rdf32(0x805760e0u);a.f[1]=(f64)rdf32(0x80576118u);a.f[2]=(f64)rdf32(0x805760b8u);a.f[3]=(f64)rdf32(0x80576104u);
a.r[0]=(rd32(0x805710e0u)*0x6d0u)-0x7fc2e738u;(void)tc_call(0x80056b18u,&a);a=za;a.r[0]=0x804b9da0u;a.r[1]=0xfb6u;f1=tc_callf(0x8010a74cu,&a);
wr32(param_r3+0xda0u,0u);}}else{if(rd32(param_r3+0xda4u)==0u){f1=(f64)rdf32(0x805760b8u);}else{f2=(f64)rdf32(0x805760d8u);
f1=(f64)(f32)((f64)rdf32(0x805760b8u)*(f64)(f32)(f2*(f64)rdf32(param_r3+0xdf0u)));}a=za;a.r[0]=param_r3;a.r[1]=r4;a.f[0]=f1;a.f[1]=f2;
(void)tc_call(rd32(rd32(param_r3)+0x50u),&a);a=za;a.r[0]=param_r3;a.r[1]=1u;f1=tc_callf(0x801d98ecu,&a);a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;
a.r[2]=0x8033c052u;a.r[3]=0x804890c8u;a.f[0]=f1;(void)tc_call(rd32(rd32(param_r3)+0x38u),&a);f1=(f64)rdf32(0x8057610cu);r5=rd32(0x8048912cu);
r0=rd32(0x80489130u);wr32(0x817fdf14u,rd32(0x80489128u));wr32(0x817fdf18u,r5);wr32(0x817fdf1cu,r0);a=za;a.f[0]=f1;a.r[0]=0x817fdf14u;a.r[1]=0x817fdf14u;
(void)tc_call(0x802343c8u,&a);a=za;a.f[0]=(f64)rdf32(0x80576114u);a.r[0]=0x18u;a.r[1]=0x817fdf98u;a.r[2]=0x817fdf14u;a.r[3]=0x804b15c0u;
(void)tc_call(0x800d782cu,&a);a=za;a.f[0]=(f64)rdf32(0x805760e0u);a.f[1]=(f64)rdf32(0x80576118u);a.f[2]=(f64)rdf32(0x8057611cu);a.f[3]=(f64)rdf32(0x80576104u);
a.r[0]=(rd32(0x805710e0u)*0x6d0u)-0x7fc2e738u;(void)tc_call(0x80056b18u,&a);a=za;a.r[0]=0x804b9da0u;a.r[1]=0xfb6u;f1=tc_callf(0x8010a74cu,&a);
wr32(param_r3+0xda0u,0u);}if((s32)r31<=20||(s32)r31>=70){return;}r0=(u32)((s32)ppc_mulhw(1717986919,(s32)r31)>>2);r0=r0+((r0>>0x1fu)&1u);r0=r0*0xau;r0=r31-r0;
if(r0!=0u){return;}a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;a.r[2]=0x8033c052u;a.r[3]=0x804890c8u;a.f[0]=f1;(void)tc_call(rd32(rd32(param_r3)+0x38u),&a);
f1=(f64)rdf32(0x8057610cu);r5=rd32(0x8048912cu);r0=rd32(0x80489130u);wr32(0x817fdefcu,rd32(0x80489128u));wr32(0x817fdf00u,r5);wr32(0x817fdf04u,r0);a=za;
a.f[0]=f1;a.r[0]=0x817fdefcu;a.r[1]=0x817fdefcu;(void)tc_call(0x802343c8u,&a);a=za;a.f[0]=(f64)rdf32(0x80576114u);a.r[0]=0x18u;a.r[1]=0x817fdf98u;
a.r[2]=0x817fdefcu;a.r[3]=0x804b15c0u;(void)tc_call(0x800d782cu,&a);a=za;a.f[0]=(f64)rdf32(0x805760e0u);a.f[1]=(f64)rdf32(0x80576134u);
a.f[2]=(f64)rdf32(0x805760f4u);a.f[3]=(f64)rdf32(0x80576104u);a.r[0]=(rd32(0x805710e0u)*0x6d0u)-0x7fc2e738u;(void)tc_call(0x80056b18u,&a);return;
case 0x801d817cu:if(r31!=0x1eu){c0gt=(s32)r31>40;if(r31!=0x28u){if(!c0gt||(s32)r31>=50){c0gt=(s32)r31>65;if(r31!=0x41u){if(!c0gt||(s32)r31>=85){if(r31!=0x5au){
return;}a=za;a.r[0]=param_r3;(void)tc_call(0x801d98ecu,&a);return;}r3=(r31>>0x1fu)&1u;if((((r31&1u)^r3)-r3)!=0u){return;}a=za;a.r[0]=param_r3;
a.r[1]=0x817fdf98u;a.r[2]=0x8033c038u;a.r[3]=0x804890c8u;a.f[0]=f1;(void)tc_call(rd32(rd32(param_r3)+0x38u),&a);f1=(f64)rdf32(0x805760dcu);
wrf32d(0x817fdf9cu,(f64)rdf32(0x805760e0u));a=za;a.f[0]=f1;a.r[0]=0x18u;a.r[1]=0x817fdf98u;a.r[2]=0x804b15c0u;a.r[3]=0x804890c8u;(void)tc_call(0x800d783cu,&a);
return;}a=za;a.r[0]=0x804b9da0u;a.r[1]=0xfbau;(void)tc_call(0x8010a74cu,&a);return;}a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;a.r[2]=0x8033c038u;
a.r[3]=0x804890c8u;a.f[0]=f1;(void)tc_call(rd32(rd32(param_r3)+0x38u),&a);f1=(f64)rdf32(0x805760dcu);wrf32d(0x817fdf9cu,(f64)rdf32(0x805760e0u));a=za;a.f[0]=f1;
a.r[0]=0x18u;a.r[1]=0x817fdf98u;a.r[2]=0x804b15c0u;a.r[3]=0x804890c8u;(void)tc_call(0x800d783cu,&a);return;}a=za;a.r[0]=0x804b9da0u;a.r[1]=0xfbau;
(void)tc_call(0x8010a74cu,&a);return;}a=za;a.r[0]=param_r3;a.r[1]=1u;(void)tc_call(0x801d98ecu,&a);a=za;a.r[0]=param_r3;a.r[1]=1u;(void)tc_call(0x8007fa58u,&a);
return;case 0x801d82c0u:if((u32)(s8)rd8(0x805713adu)==0u){r4=0x804e0000u;wrf32d(0x804dcad8u,f0);wrf32d(0x804dcae0u,f0);wrf32d(0x804dcadcu,f0);
wr8(0x805713adu,1u);}if(rd32(param_r3+0xd74u)!=0u&&(s32)r31<150){a=za;a.f[0]=(f64)rdf32(0x805760e4u);a.r[0]=param_r3;(void)tc_call(0x80064b48u,&a);a=za;
a.r[0]=param_r3;f1=tc_callf(0x801d98ecu,&a);r4=tc_lastr4();r3=rd32(param_r3+0xd68u);if(r3!=0u){a=za;a.r[0]=r3;f1=tc_callf(0x80157f30u,&a);r4=tc_lastr4();
wr32(param_r3+0xd68u,0u);}}if((s32)r31<45){f1=(f64)rdf32(param_r3+0x2d8u);if(!((f64)rdf32(0x805760e8u)<f1)){f0=(f64)rdf32(0x805760f0u);if((f0>f1)||(f0==f1)){
f1=(f64)(f32)((f64)rdf32(0x805760ecu)+f1);}}else{f1=(f64)(f32)(f1-(f64)rdf32(0x805760ecu));}f0=(f64)rdf32(0x805760f4u);wrf32d(param_r3+0x19cu,f1);
r3=rd32(param_r3+0x1a4u);wrf32d(param_r3+0x188u,f0);a=za;a.r[0]=r3;a.r[1]=r4;a.f[0]=f1;r3=tc_call(rd32(rd32(r3)+0x28u),&a);f1=tc_lastf();
wrf32d(0x804dcad8u,(f64)rdf32(r3));wrf32d(0x804dcadcu,(f64)rdf32(r3+4u));wrf32d(0x804dcae0u,(f64)rdf32(r3+8u));}if(r31!=0x30u||rd32(param_r3+0xd68u)!=0u){
if(r31!=0x8cu){if(r31!=0x96u){if((s32)r31<160||rd32(param_r3+0xd74u)!=1u){if((s32)r31>=280){r3=rd32(param_r3+0xd6cu);if(r3!=0u){a=za;a.r[0]=r3;
(void)tc_call(0x80157e6cu,&a);wr32(param_r3+0xd6cu,0u);return;}}if((s32)r31<=46||(s32)r31>130||rd32(param_r3+0xd68u)==0u){return;}
r0=(u32)((s32)ppc_mulhw(1717986919,(s32)r31)>>2);r0=r0+((r0>>0x1fu)&1u);r0=r0*0xau;r0=r31-r0;if(r0!=0u){return;}a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;
a.r[2]=0x8033c043u;a.r[3]=0x804890c8u;a.f[0]=f1;(void)tc_call(rd32(rd32(param_r3)+0x38u),&a);a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;a.r[2]=0x804dcad8u;
f1=tc_callf(0x8007eeacu,&a);if(!((f64)rdf32(0x805760e8u)<f1)){a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;a.r[2]=0x804dcad8u;f1=tc_callf(0x8007eeacu,&a);
f0=(f64)rdf32(0x805760f0u);if(!((f0>f1)||(f0==f1))){a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;a.r[2]=0x804dcad8u;f1=tc_callf(0x8007eeacu,&a);}else{a=za;
a.r[0]=param_r3;a.r[1]=0x817fdf98u;a.r[2]=0x804dcad8u;f1=tc_callf(0x8007eeacu,&a);f1=(f64)(f32)((f64)rdf32(0x805760ecu)+f1);}f31=f1;}else{a=za;a.r[0]=param_r3;
a.r[1]=0x817fdf98u;a.r[2]=0x804dcad8u;f1=tc_callf(0x8007eeacu,&a);f31=(f64)(f32)(f1-(f64)rdf32(0x805760ecu));}a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;
a.r[2]=0x804dcad8u;f1=tc_callf(0x801daa58u,&a);if(!((f64)rdf32(0x805760e8u)<f1)){a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;a.r[2]=0x804dcad8u;
f1=tc_callf(0x801daa58u,&a);f0=(f64)rdf32(0x805760f0u);if(!((f0>f1)||(f0==f1))){a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;a.r[2]=0x804dcad8u;
f1=tc_callf(0x801daa58u,&a);}else{a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;a.r[2]=0x804dcad8u;f1=tc_callf(0x801daa58u,&a);
f1=(f64)(f32)((f64)rdf32(0x805760ecu)+f1);}}else{a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;a.r[2]=0x804dcad8u;f1=tc_callf(0x801daa58u,&a);
f1=(f64)(f32)(f1-(f64)rdf32(0x805760ecu));}f0=(f64)rdf32(0x80576090u);wrf32d(0x817fdf5cu,f1);wrf32d(0x817fdf60u,f31);wrf32d(0x817fdf64u,f0);a=za;a.f[0]=f0;
a.r[0]=0xffffffffu;a.r[1]=1u;r3=tc_call(0x8017748cu,&a);r25=r3;if(r3==0u){return;}f2=(f64)rdf32(0x80576110u);wr32(r3+0x124u,0x2080c5u);
f6=(f64)rdf32(0x817fdf98u);f1=(f64)(f32)(f2*(f64)rdf32(0x817fdf5cu));f3=(f64)rdf32(0x80576108u);wrf32d(r3+0x100u,f6);f5=(f64)rdf32(0x817fdf9cu);f1= -f1;
f0=(f64)(f32)(f2*(f64)(f32)f31);f2=(f64)rdf32(0x8057610cu);wrf32d(r3+0x104u,f5);f1=px_ctiw(f1,ppc_fctiwz(f1));f4=(f64)rdf32(0x817fdfa0u);
f0=px_ctiw(f0,ppc_fctiwz(f0));wrf32d(r3+0x108u,f4);wrf32d(r3+8u,f6);wrf32d(r3+0xcu,f5);wrf32d(r3+0x10u,f4);wr32(r3+0x154u,0x80u);wr32(r3+0x160u,0x80u);
r5=(u32)rd8(r3+0x1a4u);wrf64(0x817fdfb8u,f1);r5=r5|0x60u;wr8(r3+0x1a4u,(u8)r5);r5=rd32(0x817fdfbcu);wrf32d(r3+0x128u,f3);wrf32d(r3+0x134u,f2);
wr32(r3+0x148u,0x32u);wrf64(0x817fdfc0u,f0);wr16(r3+0x140u,(u16)r5);wr16(r3+0x142u,(u16)rd32(0x817fdfc4u));a=za;a.r[0]=r3;a.r[1]=param_r3;
(void)tc_call(0x80177d54u,&a);f0=(f64)rdf32(param_r3+0xddcu);wrf32d(r25+0x130u,f0);wrf32d(r25+0x24u,f0);wr32(r25+0x64u,rd32(r25+0x64u)|0x80000000u);return;}
a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;a.r[2]=0x8033c038u;a.r[3]=0x804890c8u;a.f[0]=f1;(void)tc_call(rd32(rd32(param_r3)+0x38u),&a);f1=(f64)rdf32(0x805760dcu);
wrf32d(0x817fdf9cu,(f64)rdf32(0x805760e0u));a=za;a.f[0]=f1;a.r[0]=0x18u;a.r[1]=0x817fdf98u;a.r[2]=0x804b15c0u;a.r[3]=0x804890c8u;f1=tc_callf(0x800d783cu,&a);
a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;a.r[2]=0x8033c038u;a.r[3]=0x804890c8u;a.f[0]=f1;(void)tc_call(rd32(rd32(param_r3)+0x38u),&a);
wrf32d(0x817fdf9cu,(f64)(f32)((f64)rdf32(0x817fdf9cu)+(f64)rdf32(0x80576100u)));if(rd32(param_r3+0xd6cu)==0u){r7=rd32(0x817fdf9cu);r0=rd32(0x817fdfa0u);
wr32(0x817fdf20u,rd32(0x817fdf98u));f1=(f64)rdf32(0x80576104u);wr32(0x817fdf24u,r7);wr32(0x817fdf28u,r0);a=za;a.f[0]=f1;a.r[0]=0x31u;a.r[1]=0x817fdf20u;
a.r[2]=0x804890c8u;a.r[3]=0x804b15c0u;r3=tc_call(0x800d7758u,&a);wr32(param_r3+0xd6cu,r3);}wr32(param_r3+0xd74u,0u);return;}a=za;a.r[0]=param_r3;
(void)tc_call(0x801d98ecu,&a);if(rd32(param_r3+0xd74u)!=0u){return;}a=za;a.f[0]=(f64)rdf32(0x805760fcu);a.r[0]=param_r3;(void)tc_call(0x80064b48u,&a);return;}
r3=rd32(param_r3+0xd68u);if(r3==0u){return;}a=za;a.r[0]=r3;(void)tc_call(0x80157f30u,&a);wr32(param_r3+0xd68u,0u);return;}a=za;a.r[0]=param_r3;a.r[1]=1u;
f1=tc_callf(0x801d98ecu,&a);a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;a.r[2]=0x8033c043u;a.r[3]=0x804890c8u;a.f[0]=f1;
(void)tc_call(rd32(rd32(param_r3)+0x38u),&a);a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;a.r[2]=0x804dcad8u;f1=tc_callf(0x8007eeacu,&a);
if(!((f64)rdf32(0x805760e8u)<f1)){a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;a.r[2]=0x804dcad8u;f1=tc_callf(0x8007eeacu,&a);f0=(f64)rdf32(0x805760f0u);
if(!((f0>f1)||(f0==f1))){a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;a.r[2]=0x804dcad8u;f1=tc_callf(0x8007eeacu,&a);}else{a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;
a.r[2]=0x804dcad8u;f1=tc_callf(0x8007eeacu,&a);f1=(f64)(f32)((f64)rdf32(0x805760ecu)+f1);}f31=f1;}else{a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;
a.r[2]=0x804dcad8u;f1=tc_callf(0x8007eeacu,&a);f31=(f64)(f32)(f1-(f64)rdf32(0x805760ecu));}a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;a.r[2]=0x804dcad8u;
f1=tc_callf(0x801daa58u,&a);if(!((f64)rdf32(0x805760e8u)<f1)){a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;a.r[2]=0x804dcad8u;f1=tc_callf(0x801daa58u,&a);
f0=(f64)rdf32(0x805760f0u);if(!((f0>f1)||(f0==f1))){a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;a.r[2]=0x804dcad8u;f1=tc_callf(0x801daa58u,&a);}else{a=za;
a.r[0]=param_r3;a.r[1]=0x817fdf98u;a.r[2]=0x804dcad8u;f1=tc_callf(0x801daa58u,&a);f1=(f64)(f32)((f64)rdf32(0x805760ecu)+f1);}}else{a=za;a.r[0]=param_r3;
a.r[1]=0x817fdf98u;a.r[2]=0x804dcad8u;f1=tc_callf(0x801daa58u,&a);f1=(f64)(f32)(f1-(f64)rdf32(0x805760ecu));}f0=(f64)rdf32(0x80576090u);wrf32d(0x817fdf68u,f1);
f1=(f64)rdf32(0x805760f8u);wrf32d(0x817fdf6cu,f31);wrf32d(0x817fdf70u,f0);a=za;a.f[0]=f1;a.r[0]=0x2cu;a.r[1]=0x817fdf98u;a.r[2]=0x817fdf68u;a.r[3]=0x804890c8u;
r3=tc_call(0x800d7768u,&a);wr32(param_r3+0xd68u,r3);wr32(r3+0x20u,0xfb4u);wr32(r3+0x24u,0u);return;case 0x801d92fcu:break;case 0x801d9510u:if(r31!=0x20u){
if(r31!=0x2du){if(r31!=0x3cu){if(r31!=0x49u){return;}a=za;a.r[0]=param_r3;(void)tc_call(0x801d98ecu,&a);return;}a=za;a.r[0]=0x804b9da0u;a.r[1]=0xfbcu;
(void)tc_call(0x8010a74cu,&a);return;}a=za;a.r[0]=0x804b9da0u;a.r[1]=0xfbcu;(void)tc_call(0x8010a74cu,&a);return;}a=za;a.r[0]=param_r3;a.r[1]=1u;
(void)tc_call(0x801d98ecu,&a);a=za;a.r[0]=0x804b9da0u;a.r[1]=0xfbcu;(void)tc_call(0x8010a74cu,&a);return;case 0x801d7d84u:if(rd32(param_r3+0xcfcu)!=0xeu){
if(r31!=0x19u){if(r31!=0x32u){return;}a=za;a.r[0]=param_r3;a.r[1]=r4;a.f[0]=(f64)rdf32(0x805760dcu);(void)tc_call(rd32(rd32(param_r3)+0x50u),&a);return;}a=za;
a.r[0]=0x804b9da0u;a.r[1]=0xfb4u;(void)tc_call(0x8010a74cu,&a);r4=tc_lastr4();f2=0.0;if(rd32(param_r3+0xda4u)==0u){f1=(f64)rdf32(0x805760b8u);}else{
f2=(f64)rdf32(0x805760d8u);f1=(f64)(f32)((f64)rdf32(0x805760b8u)*(f64)(f32)(f2*(f64)rdf32(param_r3+0xdf0u)));}a=za;a.r[0]=param_r3;a.r[1]=r4;a.f[0]=f1;
a.f[1]=f2;(void)tc_call(rd32(rd32(param_r3)+0x50u),&a);return;}if(r31!=0x14u){if(r31==0x4bu){r3=rd32(param_r3+0xd68u);if(r3!=0u){a=za;a.r[0]=r3;
(void)tc_call(0x80157f30u,&a);wr32(param_r3+0xd68u,0u);}a=za;r3=tc_call(0x80040b64u,&a);f1=tc_lastf();
r3=r3-(((ppc_mulhwu(0x51eb851fu,r3)>>5u)&0x7ffffffu)*0x64u);r3=0x32u-(u32)((u64)(r3>=0x32u)+0x32ull);r0=(u32)rd8(0x805713acu)&r3;r3=(r0>>0x1fu)&1u;r0=r0&1u;
r0=r0^r3;r0=r0-r3;wr8(0x805713acu,(u8)r0);}}else{if((u32)rd8(0x805713acu)==0u){a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;a.r[2]=0x8033c038u;a.r[3]=0x804890c8u;
a.f[0]=f1;(void)tc_call(rd32(rd32(param_r3)+0x38u),&a);f0=(f64)rdf32(0x80576090u);f3=(f64)(f32)((f64)rdf32(0x817fdf9cu)*(f64)rdf32(0x805760b8u));
f2=(f64)rdf32(0x805760bcu);wrf32d(0x817fdf90u,f0);f1=(f64)rdf32(0x805760c0u);wrf32d(0x817fdf9cu,f3);wrf32d(0x817fdf8cu,f2);wrf32d(0x817fdf94u,f0);a=za;
a.f[0]=f1;a.r[0]=0x2cu;a.r[1]=0x817fdf98u;a.r[2]=0x817fdf8cu;a.r[3]=0x804890c8u;r3=tc_call(0x800d7768u,&a);f1=tc_lastf();wr32(param_r3+0xd68u,r3);
wr32(r3+0x20u,0xfb4u);wr32(r3+0x24u,0u);}wr8(0x805713acu,(u8)((u32)rd8(0x805713acu)+1u));}if((u32)rd8(0x805713acu)==1u){a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;
a.r[2]=0x8033c038u;a.r[3]=0x804890c8u;a.f[0]=f1;f1=tc_callf(rd32(rd32(param_r3)+0x38u),&a);wrf32d(0x817fdf9cu,(f64)rdf32(0x805760c4u));
r0=(u32)((s32)ppc_mulhw(1717986919,(s32)r31)>>2);r0=r0+((r0>>0x1fu)&1u);r0=r0*0xau;r0=r31-r0;if(r0==0u&&(s32)r31>=20&&(s32)r31<=70){a=za;
a.f[0]=(f64)rdf32(0x80576090u);a.r[0]=0xffffffffu;a.r[1]=1u;r3=tc_call(0x8017748cu,&a);f1=tc_lastf();r30=r3;if(r3!=0u){f1=(f64)rdf32(0x805760c8u);
wr32(r3+0x124u,0x208025u);f0=(f64)rdf32(0x805760ccu);f4=(f64)rdf32(0x817fdf98u);wrf32d(r3+0x100u,f4);f3=(f64)rdf32(0x817fdf9cu);wrf32d(r3+0x104u,f3);
f2=(f64)rdf32(0x817fdfa0u);wrf32d(r3+0x108u,f2);wrf32d(r3+8u,f4);wrf32d(r3+0xcu,f3);wrf32d(r3+0x10u,f2);wr32(r3+0x160u,0x80u);
wr8(r3+0x1a4u,(u8)(((u32)rd8(r3+0x1a4u)&0xffffffbfu)|0x20u));wrf32d(r3+0x128u,f1);wrf32d(r3+0x134u,f0);wr32(r3+0x148u,0x3cu);a=za;a.r[0]=r3;a.r[1]=param_r3;
f1=tc_callf(0x80177d54u,&a);f0=(f64)rdf32(param_r3+0xde4u);wrf32d(r30+0x130u,f0);wrf32d(r30+0x24u,f0);r0=(u32)((s32)ppc_mulhw(1717986919,(s32)r31)>>2);
r0=r0+((r0>>0x1fu)&1u)-2u;wr32(r30+0x64u,rd32(r30+0x64u)|0x80000000u);r0=(r0<<2u)&0xfffffffcu;wr32(param_r3+r0+0xdb0u,r30);}}}f31=(f64)rdf32(0x805760d4u);
r31=param_r3;r30=0u;do{if(rd32(r31+0xdb0u)!=0u){r5=rd32(0x804890ccu);r0=rd32(0x804890d0u);wr32(0x817fdf80u,rd32(0x804890c8u));r3=rd32(0x804863d8u);
wr32(0x817fdf84u,r5);wr32(0x817fdf88u,r0);a=za;a.r[0]=r3;a.r[1]=0x817fdf80u;a.r[2]=rd32(r31+0xdb0u);a.f[0]=f1;r3=tc_call(rd32(rd32(r3)+0x7cu),&a);f1=tc_lastf();
if(r3!=0u){a=za;r3=tc_call(0x801daaf8u,&a);f1=tc_lastf();if(r3==0u){r0=rd32(rd32(0x804863d8u)+0x290u);if(r0==0x18u||r0==0x1au){r0=1u;}else{r0=0u;}if(r0==0u){
r5=rd32(0x804890d8u);r0=rd32(0x804890dcu);wr32(0x817fdf74u,rd32(0x804890d4u));f1=(f64)rdf32(0x805760d0u);wr32(0x817fdf78u,r5);wr32(0x817fdf7cu,r0);a=za;
a.f[0]=f1;a.r[0]=0x817fdf74u;a.r[1]=0x817fdf74u;f1=tc_callf(0x802343c8u,&a);r3=rd32(0x804863d8u);wrf32d(r3+0x90u,(f64)rdf32(0x817fdf74u));
wrf32d(r3+0x94u,(f64)rdf32(0x817fdf78u));wrf32d(r3+0x98u,(f64)rdf32(0x817fdf7cu));r3=rd32(0x80571140u);if(r3!=0u){wrf32d(r3+0x90u,(f64)rdf32(0x817fdf74u));
wrf32d(r3+0x94u,(f64)rdf32(0x817fdf78u));wrf32d(r3+0x98u,(f64)rdf32(0x817fdf7cu));}}}}f0=(f64)rdf32(rd32(r31+0xdb0u)+0x10u);if((f0>f31)||(f0==f31)){
wr32(r31+0xdb0u,0u);}}r30=r30+1u;r31=r31+4u;}while((s32)r30<6);return;case 0x801d9588u:if(r31!=0x20u){return;}a=za;a.r[0]=param_r3;
(void)tc_call(0x801dab34u,&a);return;case 0x801d959cu:if(rd32(param_r3+0xcfcu)!=0xfu||r31!=5u){return;}a=za;a.r[0]=param_r3;a.r[1]=r4;a.f[0]=f1;
r3=tc_call(rd32(rd32(param_r3)+0x28u),&a);r0=rd32(r3+8u);wr32(0x817fdf2cu,rd32(r3));r3=rd32(r3+4u);f2=(f64)rdf32(0x80576090u);f1=(f64)rdf32(0x817fdf2cu);
wr32(0x817fdf34u,r0);f0=(f64)rdf32(0x817fdf34u);wr32(0x817fdf30u,r3);wrf32d(0x817fdf30u,f2);wrf32d(param_r3+0x84u,f1);wrf32d(param_r3+0x88u,f2);
wrf32d(param_r3+0x8cu,f0);wrf32d(param_r3+4u,f1);wrf32d(param_r3+8u,f2);wrf32d(param_r3+0xcu,f0);return;default:a=za;a.r[0]=r3;a.r[1]=r4;a.f[0]=f1;
r3=tc_call(sw_,&a);r0=0u;r4=tc_lastr4();r5=0u;r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;r11=0u;r12=0u;f0=0.0;f2=0.0;f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;f9=0.0;
f10=0.0;f11=0.0;f12=0.0;f13=0.0;ctr=0u;return;}f0=(f64)rdf32(0x80576090u);wrf32d(0x817fdf58u,f0);wrf32d(0x817fdf54u,f0);wrf32d(0x817fdf50u,f0);
wrf32d(0x817fdf4cu,f0);wrf32d(0x817fdf48u,f0);wrf32d(0x817fdf44u,f0);a=za;a.r[0]=param_r3;a.r[1]=0x817fdf50u;a.r[2]=0x8033c06cu;a.r[3]=0x804890c8u;a.f[0]=f1;
f1=tc_callf(rd32(rd32(param_r3)+0x38u),&a);a=za;a.r[0]=param_r3;a.r[1]=0x817fdf44u;a.r[2]=0x8033c07bu;a.r[3]=0x804890c8u;a.f[0]=f1;
(void)tc_call(rd32(rd32(param_r3)+0x38u),&a);a=za;a.r[0]=param_r3;a.r[1]=0x817fdf44u;a.r[2]=0x817fdf50u;f1=tc_callf(0x8007eeacu,&a);
if(!((f64)rdf32(0x805760e8u)<f1)){a=za;a.r[0]=param_r3;a.r[1]=0x817fdf44u;a.r[2]=0x817fdf50u;f1=tc_callf(0x8007eeacu,&a);f0=(f64)rdf32(0x805760f0u);
if(!((f0>f1)||(f0==f1))){a=za;a.r[0]=param_r3;a.r[1]=0x817fdf44u;a.r[2]=0x817fdf50u;f1=tc_callf(0x8007eeacu,&a);}else{a=za;a.r[0]=param_r3;a.r[1]=0x817fdf44u;
a.r[2]=0x817fdf50u;f1=tc_callf(0x8007eeacu,&a);f1=(f64)(f32)((f64)rdf32(0x805760ecu)+f1);}}else{a=za;a.r[0]=param_r3;a.r[1]=0x817fdf44u;a.r[2]=0x817fdf50u;
f1=tc_callf(0x8007eeacu,&a);f1=(f64)(f32)(f1-(f64)rdf32(0x805760ecu));}f2=(f64)rdf32(0x80576124u);f0=(f64)rdf32(0x80576090u);wrf32d(0x817fdf38u,f2);
wrf32d(0x817fdf3cu,f1);wrf32d(0x817fdf40u,f0);a=za;a.r[0]=param_r3;a.r[1]=0x817fdf98u;a.r[2]=0x8033c08au;a.r[3]=0x804890c8u;a.f[0]=f1;a.f[1]=f2;
(void)tc_call(rd32(rd32(param_r3)+0x38u),&a);if(r31!=0x1eu){if(r31==0x127u){a=za;a.r[0]=param_r3;(void)tc_call(0x801d98ecu,&a);r3=rd32(param_r3+0xd70u);
if(r3!=0u){a=za;a.r[0]=r3;(void)tc_call(0x80157f30u,&a);wr32(param_r3+0xd70u,0u);}a=za;a.r[0]=param_r3;a.r[1]=3u;(void)tc_call(0x8007fa58u,&a);}}else{a=za;
a.r[0]=param_r3;a.r[1]=1u;(void)tc_call(0x801d98ecu,&a);a=za;a.f[0]=(f64)rdf32(0x80576104u);a.r[0]=0xf8u;a.r[1]=0x817fdf98u;a.r[2]=0x817fdf38u;
a.r[3]=0x804890c8u;r3=tc_call(0x800d7768u,&a);wr32(param_r3+0xd70u,r3);a=za;a.r[0]=0x804b9da0u;a.r[1]=0xfb4u;(void)tc_call(0x8010a74cu,&a);a=za;a.r[0]=param_r3;
a.r[1]=3u;a.r[2]=1u;(void)tc_call(0x8007fa58u,&a);}if(rd32(param_r3+0xd70u)!=0u){r3=rd32(0x817fdf3cu);r0=rd32(0x817fdf40u);wr32(0x817fdee4u,rd32(0x817fdf38u));
wr32(0x817fdee8u,r3);wr32(0x817fdeecu,r0);a=za;a.r[0]=rd32(param_r3+0xd70u);a.r[1]=0x817fdee4u;(void)tc_call(0x801582b4u,&a);r3=rd32(0x817fdf9cu);
r0=rd32(0x817fdfa0u);wr32(0x817fded8u,rd32(0x817fdf98u));wr32(0x817fdedcu,r3);wr32(0x817fdee0u,r0);a=za;a.r[0]=rd32(param_r3+0xd70u);a.r[1]=0x817fded8u;
(void)tc_call(0x8015811cu,&a);}}}return;}
