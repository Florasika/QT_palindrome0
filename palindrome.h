#ifndef PALINDROME_H
#define PALINDROME_H


#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QFormLayout>


class Palindrome : public QWidget
{
    Q_OBJECT
private:
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLineEdit *texte;
    QLineEdit *palindrome;
    QPushButton *bouton;
    QFormLayout *form;
    QVBoxLayout *layout;

public slots:
    void testPalindrome();

public:
    Palindrome();
};


#endif // PALINDROME_H
