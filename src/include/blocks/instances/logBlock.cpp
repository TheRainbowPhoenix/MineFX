#include <sdk/os/lcd.h>
#ifndef MAKE_COLOR
#define MAKE_COLOR(r,g,b) ((((r) >> 3) & 0x1F) << 11 | (((g) >> 2) & 0x3F) << 5 | (((b) >> 3) & 0x1F))
#endif

#include "../baseBlock.cpp"

class LogBlockType : public BaseBlockType
{
public:
    virtual uint8_t id(){ return 0x05; }

    virtual TemplatePatternMap getTextureTemplatePattern()
    {
        static char textureTemplatePattern[17][16] = {
            {'#', '#', '#', '#', '#', '#', '#', 'A', 'A', '#', '#', '#', '#', '#', '#', '#'},
            {'#', '#', '#', '#', '#', 'A', 'A', 'B', 'B', 'A', 'A', '#', '#', '#', '#', '#'},
            {'#', '#', '#', 'A', 'A', 'B', 'B', 'C', 'C', 'B', 'B', 'A', 'A', '#', '#', '#'},
            {'#', 'A', 'A', 'B', 'B', 'C', 'C', 'B', 'B', 'C', 'C', 'B', 'B', 'A', 'A', '#'},
            {'A', 'B', 'B', 'C', 'C', 'B', 'B', 'C', 'C', 'B', 'B', 'C', 'C', 'B', 'B', 'A'},
            {'A', 'A', 'A', 'B', 'B', 'C', 'C', 'B', 'B', 'C', 'C', 'B', 'B', 'A', 'A', 'A'},
            {'A', 'A', 'A', 'A', 'A', 'B', 'B', 'C', 'C', 'B', 'B', 'A', 'A', 'A', 'A', 'A'},
            {'A', 'B', 'B', 'A', 'A', 'A', 'A', 'B', 'B', 'A', 'A', 'A', 'A', 'B', 'B', 'A'},
            {'A', 'B', 'B', 'B', 'B', 'A', 'A', 'A', 'A', 'A', 'A', 'B', 'B', 'B', 'B', 'A'},
            {'A', 'B', 'B', 'B', 'B', 'B', 'B', 'A', 'A', 'B', 'B', 'B', 'B', 'B', 'B', 'A'},
            {'A', 'B', 'B', 'B', 'B', 'B', 'B', 'A', 'A', 'B', 'B', 'B', 'B', 'B', 'B', 'A'},
            {'A', 'B', 'B', 'B', 'B', 'B', 'B', 'A', 'A', 'B', 'B', 'B', 'B', 'B', 'B', 'A'},
            {'A', 'B', 'B', 'B', 'B', 'B', 'B', 'A', 'A', 'B', 'B', 'B', 'B', 'B', 'B', 'A'},
            {'#', 'A', 'A', 'B', 'B', 'B', 'B', 'A', 'A', 'B', 'B', 'B', 'B', 'A', 'A', '#'},
            {'#', '#', '#', 'A', 'A', 'B', 'B', 'A', 'A', 'B', 'B', 'A', 'A', '#', '#', '#'},
            {'#', '#', '#', '#', '#', 'A', 'A', 'A', 'A', 'A', 'A', '#', '#', '#', '#', '#'},
            {'#', '#', '#', '#', '#', '#', '#', 'A', 'A', '#', '#', '#', '#', '#', '#', '#'},
        };

        TemplatePatternMap pattern = TemplatePatternMap(textureTemplatePattern);

        return pattern;
    }
    virtual KeyColorPairMap getTextureTemplateKeys()
    {
        KeyColorPairMap keyColorMap = KeyColorPairMap(4);
        keyColorMap.add(KeyColorPair('A', MAKE_COLOR(41, 24, 7)));
        keyColorMap.add(KeyColorPair('B', MAKE_COLOR(50, 30, 10)));
        keyColorMap.add(KeyColorPair('C', MAKE_COLOR(62, 37, 13)));

        return keyColorMap;
    }
};

class LogBlock : public BaseBlock
{
public:
    LogBlock() : BaseBlock(new LogBlockType()) {}
};