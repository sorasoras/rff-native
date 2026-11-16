#version 450
layout(location = 0) in vec3 p;
layout(location = 1) in vec4 c;
layout(location = 2) in vec2 uv;
layout(location = 0) out vec4 vc;
layout(location = 1) out vec2 vuv;
void main()
{
    gl_Position = vec4(p.x, p.y, p.z, 1.0);
    vc = c;
    vuv = uv;
}