#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QFont>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QLabel *firstNameLabel = new QLabel("First name", this);
    firstNameLabel->setMinimumSize(70,30);
    firstNameLabel->move(10,10);

    QLineEdit *firstNameLineEdit = new QLineEdit(this);
    firstNameLineEdit->setPlaceholderText("Enter your first name");
    firstNameLineEdit->setMinimumSize(200,30);
    firstNameLineEdit->move(100,10);



     // Last name
    QLabel *lastNameLabel = new QLabel("First name", this);
    lastNameLabel->setMinimumSize(70,30);
    lastNameLabel->move(10,70);

    QLineEdit *lastNameEdit = new QLineEdit(this);
     lastNameEdit->setPlaceholderText("Enter your last name");
    lastNameEdit->setMinimumSize(200,30);
    lastNameEdit->move(100,70);



    // City name
   QLabel *cityLabel = new QLabel("City", this);
   cityLabel->setMinimumSize(70,30);
   cityLabel->move(10,120);

   QLineEdit *cityEdit = new QLineEdit(this);
    cityEdit->setPlaceholderText("Enter your city");
   cityEdit->setMinimumSize(200,30);
   cityEdit->move(100,120);


   QFont buttonFont("Times", 20, QFont::Bold);
   QPushButton * button = new QPushButton("Grab data",this);
   button->setFont(buttonFont);
   button->setMinimumSize(200,30);
   button->move(80,190);


   connect(button,&QPushButton::clicked,[=](){

       QString firstName = firstNameLineEdit->text();
       QString lastName = lastNameEdit->text();
       QString city = cityEdit->text();

       if( !firstName.isEmpty() && !lastName.isEmpty() && !city.isEmpty())
       {
           //If neither field is empty we fall here
           qDebug() << " First name is : " << firstName;
           qDebug() << " Last name is : " << lastName;
           qDebug() << " City is : " << city;
       }else
       {
           qDebug() << "One field is empty ";
       }

   });


   //Respond to signals from QLineEdits

   /*
   //cursorPositionChanged
   connect(firstNameLineEdit,&QLineEdit::cursorPositionChanged,[=](){
       qDebug() << "The current cursor position is : " << firstNameLineEdit->cursorPosition();
   });
*/

   /*
   //editingFinished : emitted when user clicks enter or when line edit looses focus
   connect(firstNameLineEdit,&QLineEdit::editingFinished,[=](){
       qDebug() << "Editing finished .";
   });
*/


   /*
   //returnPressed
   connect(firstNameLineEdit,&QLineEdit::returnPressed,[=](){
       qDebug() << "Return Pressed .";
   });
*/

   /*
   //selectionChanged
   connect(firstNameLineEdit,&QLineEdit::selectionChanged,[=](){
       qDebug() << "Selection Changed .";
   });
*/

   /*
   //textChanged
   connect(firstNameLineEdit,&QLineEdit::textChanged,[=](const QString &changedText){
       qDebug() << "Selection Changed to :"  <<  changedText;
   });
 */

   //textEdited

   /*  */
   connect(firstNameLineEdit,&QLineEdit::textEdited,[=](const QString &editedText){
       qDebug() << "Selection edited and changed to :"  <<  editedText;
   });


   //Change text in QLineEdit programmaticaly
   //lastNameLineEdit->setText("Say your last name");

   //Hint text
   firstNameLineEdit->setPlaceholderText("First name");
   lastNameEdit->setPlaceholderText("Last Name");
   cityEdit->setPlaceholderText("City");





}

MainWindow::~MainWindow()
{
    delete ui;
}

