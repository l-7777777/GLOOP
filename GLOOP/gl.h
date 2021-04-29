#pragma once
#include <cstring>

#include "include/GL/gl3w.h"
#include "include/GL/glcorearb.h"

class GL
{
public:
    template<typename T>
    class Vector4
    {
    public:
        // x y z w
        T x;
        T y;
        T z;
        T w;

        // r g b a
        T r;
        T g;
        T b;
        T a;

        Vector4 *operator=(T arr[4])
        {
            one   = arr[0];
            two   = arr[1];
            three = arr[2];
            four  = arr[3];
            reSyncPrivate();
            return this;
        }

        Vector4 *operator+=(Vector4<T> other)
        {
            one   += other.one;
            two   += other.two;
            three += other.three;
            four  += other.four;
            reSyncPrivate();
            return this;
        }

        Vector4 *operator-=(Vector4<T> other)
        {
            one   -= other.one;
            two   -= other.two;
            three -= other.three;
            four  -= other.four;
            reSyncPrivate();
            return this;
        }

        Vector4 *operator*=(Vector4<T> other)
        {
            one   *= other.one;
            two   *= other.two;
            three *= other.three;
            four  *= other.four;
            reSyncPrivate();
            return this;
        }

        Vector4 *operator/=(Vector4<T> other)
        {
            one   /= other.one;
            two   /= other.two;
            three /= other.three;
            four  /= other.four;
            reSyncPrivate();
            return this;
        }

        Vector4 operator+(Vector4<T> other)
        {
            Vector4 copy;
            copy = this;
            copy += other;
            return copy;
        }

        Vector4 operator-(Vector4<T> other)
        {
            Vector4 copy;
            copy = this;
            copy -= other;
            return copy;
        }

        Vector4 operator*(Vector4<T> other)
        {
            Vector4 copy;
            copy = this;
            copy *= other;
            return copy;
        }

        Vector4 operator/(Vector4<T> other)
        {
            Vector4 copy;
            copy = this;
            copy /= other;
            return copy;
        }

        void reSyncXYZW()
        {
            one   = x;
            two   = y;
            three = z;
            four  = w;
        }

        void reSyncRGBA()
        {
            one   = r;
            two   = g;
            three = b;
            four  = a;
        }

    private:
        void reSyncPrivate()
        {
            x = one;
            y = two;
            z = three;
            w = four;
            
            r = one;
            g = two;
            b = three;
            a = four;
        }
        
        T one;
        T two;
        T three;
        T four;
    };

    template<typename T>
    class Vector3
    {
        public:
        // x y z
        T x;
        T y;
        T z;

        // r g b
        T r;
        T g;
        T b;

        Vector3 *operator=(T arr[3])
        {
            one   = arr[0];
            two   = arr[1];
            three = arr[2];
            reSyncPrivate();
            return this;
        }

        Vector3 *operator+=(Vector3<T> other)
        {
            one   += other.one;
            two   += other.two;
            three += other.three;
            reSyncPrivate();
            return this;
        }

        Vector3 *operator-=(Vector3<T> other)
        {
            one   -= other.one;
            two   -= other.two;
            three -= other.three;
            reSyncPrivate();
            return this;
        }

        Vector3 *operator*=(Vector3<T> other)
        {
            one   *= other.one;
            two   *= other.two;
            three *= other.three;
            reSyncPrivate();
            return this;
        }

        Vector3 *operator/=(Vector3<T> other)
        {
            one   /= other.one;
            two   /= other.two;
            three /= other.three;
            reSyncPrivate();
            return this;
        }

        Vector3 operator+(Vector3<T> other)
        {
            Vector3 copy;
            copy = this;
            copy += other;
            return copy;
        }

        Vector3 operator-(Vector3<T> other)
        {
            Vector3 copy;
            copy = this;
            copy -= other;
            return copy;
        }

        Vector3 operator*(Vector3<T> other)
        {
            Vector3 copy;
            copy = this;
            copy *= other;
            return copy;
        }

        Vector3 operator/(Vector3<T> other)
        {
            Vector3 copy;
            copy = this;
            copy /= other;
            return copy;
        }

        void reSyncXYZ()
        {
            one   = x;
            two   = y;
            three = z;
        }

        void reSyncRGB()
        {
            one   = r;
            two   = g;
            three = b;
        }

    private:
        void reSyncPrivate()
        {
            x = one;
            y = two;
            z = three;
            
            r = one;
            g = two;
            b = three;
        }
        
        T one;
        T two;
        T three;
    };

    template<typename T>
    class Vector2
    {
        public:
        // x y
        T x;
        T y;

        // r g
        T s;
        T t;

        Vector2 *operator=(T arr[2])
        {
            one = arr[0];
            two = arr[1];
            reSyncPrivate();
            return this;
        }

        Vector2 *operator+=(Vector2<T> other)
        {
            one   += other.one;
            two   += other.two;
            reSyncPrivate();
            return this;
        }

        Vector2 *operator-=(Vector2<T> other)
        {
            one   -= other.one;
            two   -= other.two;
            reSyncPrivate();
            return this;
        }

        Vector2 *operator*=(Vector2<T> other)
        {
            one   *= other.one;
            two   *= other.two;
            reSyncPrivate();
            return this;
        }

        Vector2 *operator/=(Vector2<T> other)
        {
            one   /= other.one;
            two   /= other.two;
            reSyncPrivate();
            return this;
        }

        Vector2 operator+(Vector2<T> other)
        {
            Vector2 copy;
            copy = this;
            copy += other;
            return copy;
        }

        Vector2 operator-(Vector2<T> other)
        {
            Vector2 copy;
            copy = this;
            copy -= other;
            return copy;
        }

        Vector2 operator*(Vector2<T> other)
        {
            Vector2 copy;
            copy = this;
            copy *= other;
            return copy;
        }

        Vector2 operator/(Vector2<T> other)
        {
            Vector2 copy;
            copy = this;
            copy /= other;
            return copy;
        }

        void reSyncXYZW()
        {
            one   = x;
            two   = y;
        }

        void reSyncRGBA()
        {
            one   = s;
            two   = t;
        }

    private:
        void reSyncPrivate()
        {
            x = one;
            y = two;
            
            s = one;
            t = two;
        }
        
        T one;
        T two;
    };

    static int init()
    {
        if (gl3wInit())
        {
            return -1;
        }
        return 0;
    }

    class Context
    {
    public:
#ifdef WIN32
        explicit Context(HWND hWnd)
        {
            this->hWnd = hWnd;
            hDC = GetDC(hWnd);
            hRC = wglCreateContext(hDC);
            wglMakeCurrent(hDC, hRC);
        }

        ~Context()
        {
            wglMakeCurrent(nullptr, nullptr);
            ReleaseDC(hWnd, hDC);
            wglDeleteContext(hRC);
        }

        HGLRC hRC;
        HDC hDC;
#endif
        
        // GL wrapper functions
        // glClear
        static void clear(int mask)
        {
            glClear(mask);
        }
        // glBegin
        static void begin(int mode)
        {
            ((void(*)(int))gl3wGetProcAddress("glBegin"))(mode);
        }

    private:
#ifdef WIN32
        HWND hWnd;
#endif
    };

    static Context *makeCurrent(Context *context)
    {
        Context *toReturn = currentContext;
#ifdef WIN32
        wglMakeCurrent(context->hDC, context->hRC);
#endif
        return toReturn;
    }
    
    // GL wrapper constants
    // glClear constants
    const int colorBufferBit   = GL_COLOR_BUFFER_BIT;
    const int depthBufferBit   = GL_DEPTH_BUFFER_BIT;
    const int accumBufferBit   = 0x00000200;
    const int stencilBufferBit = GL_STENCIL_BUFFER_BIT;
    // glBegin constants
    const int points = GL_POINTS;
    const int lines = GL_LINES;
    const int lineStrip = GL_LINE_STRIP;
    const int lineLoop = GL_LINE_LOOP;
    const int triangles = GL_TRIANGLES;
    const int triangleStrip = GL_TRIANGLE_STRIP;
    const int triangleFan = GL_TRIANGLE_FAN;
    const int quads = GL_QUADS;
    const int quadStrip = 8;
    const int polygon = 9;
private:
    inline static Context *currentContext = nullptr;
};
