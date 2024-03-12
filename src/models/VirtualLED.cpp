#include "include/models/VirtualLED.h"
#include <QPainter>

VirtualLED::VirtualLED(QWidget *parent) : QWidget(parent), state(false) {
    // Set a fixed size for the LED representation
    setFixedSize(100, 100);
}

void VirtualLED::turnOn() {
    state = true;
    update(); // Trigger a repaint
}

void VirtualLED::turnOff() {
    state = false;
    update(); // Trigger a repaint
}

bool VirtualLED::isOn() const {
    return state;
}

void VirtualLED::paintEvent(QPaintEvent *) {
    QPainter painter(this);
    if (state) {
        painter.setBrush(Qt::red); // LED on color
    } else {
        painter.setBrush(Qt::transparent); // LED off - transparent, no color
    }
    painter.drawEllipse(rect()); // Draw the LED as an ellipse
}

