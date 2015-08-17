#pragma once
#include <string>
class Rectangle
{
private:
    int m_left;
    int m_top;
    int m_right;
    int m_bottom;
    char m_horizontalCharacter;
    char m_verticalCharacter;
    std::string m_graphString;

public:
    Rectangle();
    Rectangle(int left, int top, int right, int bottom);
    Rectangle(int left, int top, int right, int bottom, char horizontalCharacter, char verticalCharacter);
    virtual ~Rectangle();

    // setters
    inline void setLeft(int left);
    inline void setTop(int top);
    inline void setRight(int right);
    inline void setBottom(int bottom);

    // getters
    inline int getWidth();
    inline int getHeight();
    inline int getLeft();
    inline int getTop();
    inline int getRight();
    inline int getBottom();

    std::string& drawGraph();
};

