#include <QCoreApplication>
#include <QtTest>
#include "../calcgrade/calculategrade.h"

// add necessary includes here

class Test01 : public QObject
{
    Q_OBJECT

public:
    Test01(){};
    ~Test01(){};

private slots:
    // void initTestCase();
    // void cleanupTestCase();
    void test_case_on_5();
    void test_case_on_4();
    void test_case_on_3();
    void test_case_on_2();
    void test_case_on_Err1();
    void test_case_on_Err2();

};


// void test01::initTestCase() {}

// void test01::cleanupTestCase() {}

void Test01::test_case_on_5() {

    CalculateGrade calckgrade ;
    int totalQuestion=100;
    int tGrade=85;
    double tQuestion=static_cast<double>(totalQuestion);
    double totalGrade=static_cast<double>(tGrade);

    QString expectedGrade = "5";
    QString calculatedGrade= calckgrade.calculategrade(totalGrade,tQuestion);
    QCOMPARE(calculatedGrade, expectedGrade);
}
void Test01::test_case_on_4() {

    CalculateGrade calckgrade ;
    int totalQuestion=100;
    int tGrade=75;
    double tQuestion=static_cast<double>(totalQuestion);
    double totalGrade=static_cast<double>(tGrade);

    QString expectedGrade = "4";
    QString calculatedGrade= calckgrade.calculategrade(totalGrade,tQuestion);
    QCOMPARE(calculatedGrade, expectedGrade);
}
void Test01::test_case_on_3() {

    CalculateGrade calckgrade ;
    int totalQuestion=100;
    int tGrade=50;
    double tQuestion=static_cast<double>(totalQuestion);
    double totalGrade=static_cast<double>(tGrade);

    QString expectedGrade = "3";
    QString calculatedGrade= calckgrade.calculategrade(totalGrade,tQuestion);
    QCOMPARE(calculatedGrade, expectedGrade);
}
void Test01::test_case_on_2() {

    CalculateGrade calckgrade ;
    int totalQuestion=100;
    int tGrade=49;
    double tQuestion=static_cast<double>(totalQuestion);
    double totalGrade=static_cast<double>(tGrade);

    QString expectedGrade = "2";
    QString calculatedGrade= calckgrade.calculategrade(totalGrade,tQuestion);
    QCOMPARE(calculatedGrade, expectedGrade);
}
void Test01::test_case_on_Err1() {

    CalculateGrade calckgrade ;
    int totalQuestion=0;
    int tGrade=49;
    double tQuestion=static_cast<double>(totalQuestion);
    double totalGrade=static_cast<double>(tGrade);

    QString expectedGrade ="Ошибка";// /0
    QString calculatedGrade= calckgrade.calculategrade(totalGrade,tQuestion);
    QCOMPARE(calculatedGrade, expectedGrade);
}
void Test01::test_case_on_Err2() {

    CalculateGrade calckgrade ;
    int totalQuestion=75;
    int tGrade=100;
    double tQuestion=static_cast<double>(totalQuestion);
    double totalGrade=static_cast<double>(tGrade);

    QString expectedGrade = "Ошибка";
    QString calculatedGrade= calckgrade.calculategrade(totalGrade,tQuestion);
    QCOMPARE(calculatedGrade, expectedGrade);
}
QTEST_MAIN(Test01)

#include "tst_test01.moc"
