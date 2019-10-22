#ifndef CALC_H
#define CALC_H

#include <QObject>

class Calc : public QObject
{
    Q_OBJECT
    Q_PROPERTY(qreal leftArg MEMBER m_leftArg NOTIFY leftArgChanged)
    Q_PROPERTY(qreal rightArg MEMBER m_rightArg NOTIFY rightArgChanged)
    Q_PROPERTY(qreal sum READ sum NOTIFY sumChanged)
    Q_PROPERTY(qreal difference READ difference NOTIFY differenceChanged)
    Q_PROPERTY(qreal product READ product NOTIFY productChanged)
    Q_PROPERTY(qreal quotient READ quotient NOTIFY quotientChanged)
public:
    explicit Calc(QObject *parent = nullptr);

    qreal sum() const;
    qreal difference() const;
    qreal product() const;
    qreal quotient() const;

signals:
    void leftArgChanged();
    void rightArgChanged();
    void sumChanged();
    void differenceChanged();
    void productChanged();
    void quotientChanged();

private:
    qreal m_leftArg = 0;
    qreal m_rightArg = 0;
};

#endif // CALC_H
