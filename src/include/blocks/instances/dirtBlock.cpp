#include <sdk/os/lcd.h>
#ifndef MAKE_COLOR
#define MAKE_COLOR(r,g,b) ((((r) >> 3) & 0x1F) << 11 | (((g) >> 2) & 0x3F) << 5 | (((b) >> 3) & 0x1F))
#endif

#include "../baseBlock.cpp"

class DirtBlockType : public BaseBlockType
{
public:
    virtual uint8_t id(){ return 0x02; }

    virtual KeyColorPairMap getTextureTemplateKeys()
    {
        KeyColorPairMap keyColorMap = KeyColorPairMap(2);
        keyColorMap.add(KeyColorPair('A', MAKE_COLOR(37, 21, 4)));
        keyColorMap.add(KeyColorPair('B', MAKE_COLOR(54, 31, 6)));

        return keyColorMap;
    }
};

class DirtBlock : public BaseBlock
{
public:
    DirtBlock() : BaseBlock(new DirtBlockType()) {}
};