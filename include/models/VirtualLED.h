#ifndef VIRTUALLED_H
#define VIRTUALLED_H

#include <QWidget>

class VirtualLED : public QWidget {
    Q_OBJECT

public:
    VirtualLED(QWidget *parent = nullptr);
    void turnOn();
    void turnOff();
    bool isOn() const;

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    bool state;
};

#endif // VIRTUALLED_H
