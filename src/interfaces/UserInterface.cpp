#include "include/interfaces/UserInterface.h"
#include <QDebug>
#include <QMessageBox>

UserInterface::UserInterface(QWidget *parent) : QWidget(parent) {
    led = new VirtualLED(this);

    // Create buttons and layout
    ledOnButton = new QPushButton("Turn LED On", this);
    ledOffButton = new QPushButton("Turn LED Off", this);
    helpButton = new QPushButton("Help", this);
    layout = new QVBoxLayout(this);
    layout->addWidget(led);
    layout->addWidget(ledOnButton);
    layout->addWidget(ledOffButton);
    layout->addWidget(helpButton);

    // Set up the connections
    connect(ledOnButton, &QPushButton::clicked, this, &UserInterface::onLedOnButtonClicked);
    connect(ledOffButton, &QPushButton::clicked, this, &UserInterface::onLedOffButtonClicked);
    connect(helpButton, &QPushButton::clicked, this, &UserInterface::onHelpButtonClicked);

    // Set the layout on the main window
    setLayout(layout);
    qDebug() << "Application started.";
}

void UserInterface::onLedOnButtonClicked() {
    led->turnOn();
    qDebug() << "LED turned on.";
}

void UserInterface::onLedOffButtonClicked() {
    led->turnOff();
    qDebug() << "LED turned off.";
}

void UserInterface::onHelpButtonClicked() {
    QMessageBox::information(this, "Help", "This application simulates an LED that can be turned on and off.\n"
                            "Use the 'Turn LED On' button to turn on the LED.\n"
                            "Use the 'Turn LED Off' button to turn off the LED.\n"
                            "Press 'Help' for information about how to use the application.");
    qDebug() << "Help button clicked.";
}

// Modify your destructor to include application exit feedback
UserInterface::~UserInterface() {
    qDebug() << "Application exited.";
}
