#include "../baseBlock.cpp"

class GrassBlockType : public BaseBlockType
{
public:
    virtual uint8_t id(){ return 0x03; }

    virtual TemplatePatternMap getTextureTemplatePattern()
    { 
        static char textureTemplatePattern[17][16] = {
            {'#', '#', '#', '#', '#', '#', '#', 'A', 'A', '#', '#', '#', '#', '#', '#', '#'},
            {'#', '#', '#', '#', '#', 'A', 'A', 'B', 'B', 'A', 'A', '#', '#', '#', '#', '#'},
            {'#', '#', '#', 'A', 'A', 'B', 'B', 'B', 'B', 'B', 'B', 'A', 'A', '#', '#', '#'},
            {'#', 'A', 'A', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'A', 'A', '#'},
            {'A', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'A'},
            {'C', 'A', 'A', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'A', 'A', 'C'},
            {'C', 'C', 'C', 'A', 'A', 'B', 'B', 'B', 'B', 'B', 'B', 'A', 'A', 'C', 'C', 'C'},
            {'C', 'D', 'D', 'C', 'C', 'A', 'A', 'B', 'B', 'A', 'A', 'C', 'C', 'D', 'D', 'C'},
            {'C', 'D', 'D', 'D', 'D', 'C', 'C', 'A', 'A', 'C', 'C', 'D', 'D', 'D', 'D', 'C'},
            {'C', 'D', 'D', 'D', 'D', 'D', 'D', 'C', 'C', 'D', 'D', 'D', 'D', 'D', 'D', 'C'},
            {'C', 'D', 'D', 'D', 'D', 'D', 'D', 'C', 'C', 'D', 'D', 'D', 'D', 'D', 'D', 'C'},
            {'C', 'D', 'D', 'D', 'D', 'D', 'D', 'C', 'C', 'D', 'D', 'D', 'D', 'D', 'D', 'C'},
            {'C', 'D', 'D', 'D', 'D', 'D', 'D', 'C', 'C', 'D', 'D', 'D', 'D', 'D', 'D', 'C'},
            {'#', 'C', 'C', 'D', 'D', 'D', 'D', 'C', 'C', 'D', 'D', 'D', 'D', 'C', 'C', '#'},
            {'#', '#', '#', 'C', 'C', 'D', 'D', 'C', 'C', 'D', 'D', 'C', 'C', '#', '#', '#'},
            {'#', '#', '#', '#', '#', 'C', 'C', 'C', 'C', 'C', 'C', '#', '#', '#', '#', '#'},
            {'#', '#', '#', '#', '#', '#', '#', 'C', 'C', '#', '#', '#', '#', '#', '#', '#'},
        };

        TemplatePatternMap pattern = TemplatePatternMap(textureTemplatePattern);

        return pattern;
    }
    virtual KeyColorPairMap getTextureTemplateKeys()
    {
        KeyColorPairMap keyColorMap = KeyColorPairMap(4);
        keyColorMap.add(KeyColorPair('A', LCD_MakeColor(26, 71, 15)));
        keyColorMap.add(KeyColorPair('B', LCD_MakeColor(27, 82, 17)));
        keyColorMap.add(KeyColorPair('C', LCD_MakeColor(37, 21, 4)));
        keyColorMap.add(KeyColorPair('D', LCD_MakeColor(54, 31, 6)));

        return keyColorMap;
    }
};

class GrassBlock : public BaseBlock
{
public:
    GrassBlock() : BaseBlock(new GrassBlockType()) {}
};