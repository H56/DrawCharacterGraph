#include "stdafx.h"
#include "Rectangle.h"


Rectangle::Rectangle() {
    m_horizontalCharacter = '-';
    m_verticalCharacter = '|';
}

Rectangle::Rectangle(int left, int top, int right, int bottom) {
    Rectangle();
    m_left = left;
    m_top = top;
    m_right = right;
    m_bottom = bottom;
}

Rectangle::Rectangle(int left, int top, int right, int bottom, char horizontalCharacter, char verticalCharacter) {
    m_left = left;
    m_top = top;
    m_right = right;
    m_bottom = bottom;
    m_horizontalCharacter = horizontalCharacter;
    m_verticalCharacter = verticalCharacter;
}


Rectangle::~Rectangle()
{
}

void Rectangle::setLeft(int left) {
    m_left = left;
}

void Rectangle::setTop(int top) {
    m_top = top;
}

void Rectangle::setRight(int right) {
    m_right = right;
}

void Rectangle::setBottom(int bottom) {
    m_bottom = bottom;
}


int Rectangle::getWidth() {
    return abs(m_right - m_left + 1);
}

int Rectangle::getHeight() {
    return abs(m_top - m_bottom + 1);
}

int Rectangle::getLeft() {
    return m_left;
}

int Rectangle::getTop() {
    return m_top;
}

int Rectangle::getRight() {
    return m_right;
}

int Rectangle::getBottom() {
    return m_bottom;
}

std::string& Rectangle::drawGraph() {
    m_graphString = "";
    m_graphString.resize((getWidth() + 1) * getHeight(), ' ');
    for (int i = 0; i < getWidth(); ++i) {
        m_graphString[i] = m_horizontalCharacter;
    }
    for (int i = (getWidth() + 1) * (getHeight() - 1); i < m_graphString.length(); ++i) {
        m_graphString[i] = m_horizontalCharacter;
    }
    for (int i = getWidth() + 1; i < m_graphString.length(); i += getWidth() + 1) {
        m_graphString[i] = m_verticalCharacter;
        m_graphString[i + getWidth() - 1] = m_verticalCharacter;
    }
    for (int i = getWidth(); i < m_graphString.length(); ++i) {
        m_graphString[i] = '\n';
    }
    return m_graphString;
}