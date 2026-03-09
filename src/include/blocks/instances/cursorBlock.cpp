#include <sdk/os/lcd.h>
#define MAKE_COLOR(r,g,b) RGB_TO_RGB565((r) >> 3, (g) >> 2, (b) >> 3)

#include "../baseBlock.cpp"

class CursorBlockType : public BaseBlockType
{
public:
    virtual uint8_t id(){ return 0xFF; }

    virtual TemplatePatternMap getTextureTemplatePattern()
    {
        static char textureTemplatePattern[17][16] = {
            {'#', '#', '#', '#', '#', '#', '#', 'A', 'A', '#', '#', '#', '#', '#', '#', '#'},
            {'#', '#', '#', '#', '#', 'A', 'A', '#', '#', 'A', 'A', '#', '#', '#', '#', '#'},
            {'#', '#', '#', 'A', 'A', '#', '#', '#', '#', '#', '#', 'A', 'A', '#', '#', '#'},
            {'#', 'A', 'A', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', 'A', 'A', '#'},
            {'A', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', 'A'},
            {'A', 'A', 'A', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', 'A', 'A', 'A'},
            {'A', 'A', 'A', 'A', 'A', '#', '#', '#', '#', '#', '#', 'A', 'A', 'A', 'A', 'A'},
            {'A', '#', '#', 'A', 'A', 'A', 'A', '#', '#', 'A', 'A', 'A', 'A', '#', '#', 'A'},
            {'A', '#', '#', '#', '#', 'A', 'A', 'A', 'A', 'A', 'A', '#', '#', '#', '#', 'A'},
            {'A', '#', '#', '#', '#', '#', '#', 'A', 'A', '#', '#', '#', '#', '#', '#', 'A'},
            {'A', '#', '#', '#', '#', '#', '#', 'A', 'A', '#', '#', '#', '#', '#', '#', 'A'},
            {'A', '#', '#', '#', '#', '#', '#', 'A', 'A', '#', '#', '#', '#', '#', '#', 'A'},
            {'A', '#', '#', '#', '#', '#', '#', 'A', 'A', '#', '#', '#', '#', '#', '#', 'A'},
            {'#', 'A', 'A', '#', '#', '#', '#', 'A', 'A', '#', '#', '#', '#', 'A', 'A', '#'},
            {'#', '#', '#', 'A', 'A', '#', '#', 'A', 'A', '#', '#', 'A', 'A', '#', '#', '#'},
            {'#', '#', '#', '#', '#', 'A', 'A', 'A', 'A', 'A', 'A', '#', '#', '#', '#', '#'},
            {'#', '#', '#', '#', '#', '#', '#', 'A', 'A', '#', '#', '#', '#', '#', '#', '#'},
        };

        TemplatePatternMap pattern = TemplatePatternMap(textureTemplatePattern);

        return pattern;
    }
    virtual KeyColorPairMap getTextureTemplateKeys()
    {
        KeyColorPairMap keyColorMap = KeyColorPairMap(1);
        keyColorMap.add(KeyColorPair('A', MAKE_COLOR(66, 123, 128)));

        return keyColorMap;
    }
};

class CursorBlock : public BaseBlock
{
public:
    CursorBlock() : BaseBlock(new CursorBlockType()) {}
};