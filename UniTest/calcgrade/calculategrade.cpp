#include "calculategrade.h"
#include <cmath>
CalculateGrade::CalculateGrade() = default;

QString CalculateGrade::calculategrade(double tGrade, double tQuestion) const {

    QString sGrade;
    if (tQuestion == 0) {
       sGrade="Ошибка";//: Количество вопросов не может быть равно нулю.";
        return sGrade;
    }
    if (tGrade>tQuestion) {
        sGrade="Ошибка";//: Количество правильных ответов не может быть больше количества заданий.";
        return sGrade;
    }
    // Вычисление процента и округление до двух знаков
    double grade = std::round((tGrade / tQuestion * 100) * 100) / 100;

    if (grade >= 85) {
        sGrade = "5";
    } else if (grade >= 75) {
        sGrade = "4";
    } else if (grade >= 50) {
        sGrade = "3";
    } else {
        sGrade = "2";
    }

    return sGrade;
}
