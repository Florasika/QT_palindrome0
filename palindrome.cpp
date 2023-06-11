#include <QWidget>
#include "palindrome.h"


Palindrome::Palindrome() : QWidget()
{

    setFixedSize(300,150);
    setWindowTitle("Palindrome");

    label1 = new QLabel;
    label1->setText("TEST DE PALINDROME");
//    label1->setGeometry(30,15,1,2);
    label1->setAlignment(Qt::AlignCenter);
    label1->setFont(QFont("Calisto MT",13));
    bouton = new QPushButton("Valider");
//    bouton->setGeometry(30,15,1,2);
    texte = new QLineEdit;
    texte->setFont(QFont("Calisto MT",11));
    palindrome = new QLineEdit;
    palindrome->setFont(QFont("Calisto MT",11));
    palindrome->setReadOnly(true);
    form = new QFormLayout;
    layout = new QVBoxLayout;



    form->addRow(label1);
    form->addRow("TEXTE",texte);
    form->addRow("PALINDROME",palindrome);
    layout->addLayout(form);
    layout->addWidget(bouton);
    setLayout(layout);

    connect(bouton, SIGNAL(clicked()), this, SLOT(testPalindrome()));
}

void Palindrome::testPalindrome()
{
    QString reponse;
    QString contenu =texte->text();
   // int t=contenu.length();
    int i=0,k;
   k=contenu.size();

   // for(i=0;i<contenu.length();i++)
    for(i=0;i<contenu.size();i++)
    {
        if(contenu[i]==contenu[k-i-1])
        {
            reponse ="Ok";
        }
        else
        {
            reponse ="Ko";
            break;
        }
    }

    if(reponse=="Ok")
    {
        palindrome->setText("OK");
    }
    else
    {
        if(reponse=="Ko")
        {
            palindrome->setText("KO");
        }
    }
}

