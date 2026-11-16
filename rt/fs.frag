#version 450
layout(location = 0) in vec4 vc;
layout(location = 1) in vec2 vuv;
layout(location = 0) out vec4 o;
void main()
{
    o = vc;
}