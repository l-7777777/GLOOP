#include "../GLOOP/gl.h"
#pragma comment(lib, "gl3w.lib")

int main(int argc, char* argv[])
{
    GL::init();
    GL::Vector3<float> vector3;
    vector3.x = 0;
    vector3.y = 0;
    vector3.z = 0;
    vector3.reSyncXYZ();
    return 0;
}
