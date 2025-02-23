// #ifndef CALCULATEGRADE_H
// #define CALCULATEGRADE_H
#pragma once
#include <QString>
#include <QDebug>
class CalculateGrade {
public:
    CalculateGrade();
    QString calculategrade(double tGrade, double tQuestion) const;
};
//#endif // CALCULATEGRADE_H
