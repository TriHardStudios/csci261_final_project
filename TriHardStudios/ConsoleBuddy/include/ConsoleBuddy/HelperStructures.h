#ifndef HELPER_STRUCTURES_H
#define HELPER_STRUCTURES_H

namespace THS {
    struct Size {
        unsigned int height;
        unsigned int width;

        Size(unsigned int _height, unsigned int _width);

        bool operator != (const Size& SIZE) const;
        bool operator == (const Size& SIZE) const;
        bool operator >  (const Size& SIZE) const;
        bool operator <  (const Size& SIZE) const;

    };


    struct Buffer{
        Pixel** buffer;
        const Size* size;

        Buffer(Pixel** _buffer, const Size* _size);



    };

    struct ConsoleConfig {
        std::string name;
        Size* bufferSize;

    };
}


#endif //HELPER_STRUCTURES_H