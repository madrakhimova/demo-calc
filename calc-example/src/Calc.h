#ifndef CALC_H
#define CALC_H

#include <QObject>

class Calc : public QObject
{
    Q_OBJECT
    Q_PROPERTY(qreal leftArg READ leftArg WRITE setLeftArg NOTIFY leftArgChanged)
    Q_PROPERTY(qreal rightArg READ rightArg WRITE setRightArg NOTIFY rightArgChanged)
    Q_PROPERTY(qreal sum READ sum NOTIFY sumChanged)
    Q_PROPERTY(qreal difference READ difference NOTIFY differenceChanged)
    Q_PROPERTY(qreal product READ product NOTIFY productChanged)
    Q_PROPERTY(qreal quotient READ quotient NOTIFY quotientChanged)
public:
    explicit Calc(QObject *parent = nullptr);
    qreal leftArg() const;
    qreal rightArg() const;
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

public slots:
    void setLeftArg(qreal leftArg);
    void setRightArg(qreal rightArg);

private:
    qreal _leftArg;
    qreal _rightArg;
};

#endif // CALC_H
