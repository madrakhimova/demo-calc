#include "Calc.h"

Calc::Calc(QObject *parent)
    : QObject(parent)
{
    connect(this, &Calc::leftArgChanged, &Calc::sumChanged);
    connect(this, &Calc::rightArgChanged, &Calc::sumChanged);
    connect(this, &Calc::leftArgChanged, &Calc::differenceChanged);
    connect(this, &Calc::rightArgChanged, &Calc::differenceChanged);
    connect(this, &Calc::leftArgChanged, &Calc::productChanged);
    connect(this, &Calc::rightArgChanged, &Calc::productChanged);
    connect(this, &Calc::leftArgChanged, &Calc::quotientChanged);
    connect(this, &Calc::rightArgChanged, &Calc::quotientChanged);
}


qreal Calc::sum() const
{
    return m_leftArg + m_rightArg;
}


qreal Calc::difference() const
{
    return m_leftArg - m_rightArg;
}


qreal Calc::product() const
{
    return m_leftArg * m_rightArg;
}


qreal Calc::quotient() const
{
    return m_leftArg / m_rightArg;
}
