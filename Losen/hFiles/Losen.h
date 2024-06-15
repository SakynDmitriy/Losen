#pragma once

#include <random>
#include <QtWidgets/QMainWindow>
#include <QPushButton>
#include <QTextEdit>
#include <QDebug>
#include "ui_Losen.h"

struct point_x_y {
  float x;
  float y;
//
  point_x_y(float x, float y) : x(x), y(y) {};
};

struct stroka {

  QTextEdit* TextEdit1 = new QTextEdit();
  QTextEdit* TextEdit2 = new QTextEdit();
  QTextEdit* TextEdit3 = new QTextEdit();


  int randColora() {
    std::random_device rd;   
    std::mt19937 gen(rd());  
    std::uniform_int_distribution<int> dist(50, 255);
    return dist(gen);
  }

  QColor* draw_color = new QColor(randColora(), randColora(), randColora(), 255);

  ~stroka() {
    delete TextEdit1;
    delete TextEdit2;
    delete TextEdit3;
    delete draw_color;
  }
};

class Losen : public QMainWindow
{
    Q_OBJECT
public:
  Losen(QWidget* parent = nullptr);
    ~Losen();

private slots:
    void ClickBtnClr();
    void ClickBtnInsert();
    void ClickBtnGrphClr();
    void ClickBtnDrawGrph();
    void ClickBtnClrAnswer();

private:
    Ui::LosenClass ui;
    QVector<stroka> vect; 
    QGraphicsScene *myScene;
};






