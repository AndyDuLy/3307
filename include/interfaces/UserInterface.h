#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include "include/models/VirtualLED.h"

class UserInterface : public QWidget {
    Q_OBJECT

public:
    UserInterface(QWidget *parent = nullptr);
    virtual ~UserInterface();

private slots:
    void onLedOnButtonClicked();
    void onLedOffButtonClicked();
    void onHelpButtonClicked(); // Slot for the Help button

private:
    VirtualLED *led;
    QPushButton *ledOnButton;
    QPushButton *ledOffButton;
    QPushButton *helpButton;
    QVBoxLayout *layout;
};

#endif // USERINTERFACE_H
