#include "Losen.h"
#include <QGraphicsTextItem>
#include "ortools/linear_solver/linear_solver.h"

const int indentationX = 20;
const int indentationY = 20;
const int widthScene = 500; //width of GraphView

namespace operations_research{
    void insertAnsver(Ui::LosenClass &ui, QVector<stroka> &vect)
    {
        std::unique_ptr<MPSolver> solver(MPSolver::CreateSolver("GLOP"));
        const double infinity = solver->infinity();
        // Create the variables x and y.
        MPVariable* const x = solver->MakeNumVar(0.0, infinity, "x");
        MPVariable* const y = solver->MakeNumVar(0.0, infinity, "y");

        std::vector<MPConstraint*> ConstraintS = std::vector<MPConstraint*>(vect.size()-1);
        {
            auto it = vect.begin() + 1;
            for (int i = 0; i < vect.size() - 1; ++i, ++it)
            {
                float temp = (*it).TextEdit3->toPlainText().toFloat();

                if(temp < 0) ConstraintS[i] = solver->MakeRowConstraint(temp, infinity, "");

                else ConstraintS[i] = solver->MakeRowConstraint(-infinity, temp, "");

                ConstraintS[i]->SetCoefficient(x, (*it).TextEdit1->toPlainText().toFloat());
                ConstraintS[i]->SetCoefficient(y, (*it).TextEdit2->toPlainText().toFloat());
            }
        }

        MPObjective* const objective = solver->MutableObjective();
        objective->SetCoefficient(x, vect[0].TextEdit1->toPlainText().toFloat());
        objective->SetCoefficient(y, vect[0].TextEdit2->toPlainText().toFloat());
        objective->SetMaximization();

        solver->Solve();

        LOG(INFO) << "Solution:" << std::endl;
        LOG(INFO) << "Objective value = " << objective->Value();
        LOG(INFO) << "x = " << x->solution_value();
        LOG(INFO) << "y = " << y->solution_value() << "\n";

        ui.layOutAnsw->setSpacing(10);
        ui.layOutAnsw->addStretch(1);

        QFont labelFont = QFont();
        labelFont.setPointSizeF(10);

        QLabel* tempLbl1 = new QLabel(" solution value X= "
            + QString::number(x->solution_value()) + " \n solution value Y= "
            + QString::number(y->solution_value()));

        QLabel* tempLbl2 = new QLabel(" Objective value =  "
            + QString::number(qreal(objective->Value())));

        QVBoxLayout* tempLayout = new QVBoxLayout();
        tempLayout->addWidget(tempLbl1);
        tempLayout->addWidget(tempLbl2);

        QWidget* tempWidg = new QWidget();

        tempWidg->setLayout(tempLayout);
        tempLbl1->setFont(labelFont);
        tempLbl2->setFont(labelFont);

        tempWidg->setMinimumHeight(30);
        tempWidg->setMinimumWidth(200);
        tempWidg->setAutoFillBackground(true);
        tempWidg->setPalette(QColor(200, 200, 200, 255));

        ui.layOutAnsw->setContentsMargins(10, 2, 0, 0);
        ui.layOutAnsw->addWidget(tempWidg);

        ui.scrollAreaWidgetContents_2->setLayout(ui.layOutAnsw);
    }
}

//////////
std::pair<point_x_y, point_x_y> fun(stroka * it, int &maxLength, QString& debugText)
{
	float n, x, y; n = x = y = 0;
    debugText += " " + QString::number((*it).TextEdit3->toPlainText().toFloat()) + " ";
    n = ((*it).TextEdit3->toPlainText().toFloat() != 0) ? (*it).TextEdit3->toPlainText().toFloat() : 1;
    y = ((*it).TextEdit2->toPlainText().toFloat() != 0) ? (*it).TextEdit2->toPlainText().toFloat() : 1;
    x = ((*it).TextEdit1->toPlainText().toFloat() != 0) ? (*it).TextEdit1->toPlainText().toFloat() : 1;
	
	std::function<point_x_y(float)> takePoint = [&](float temp)
	{
		float key = 0, temp2 = 0;
		if (temp > 0) key = 1;
		while (1) {
			
			temp2 = n + temp * (-1) * y;
			if(temp2 != 0) temp2 = temp2 / x;
			if (temp2 >= 0 && key == 0) break;
			if (temp2 < 0 && key == 1) {
				--temp;
				temp = (n - y * temp) / y + temp;
				temp2 = 0;
				break;
			}
			if (temp == maxLength) { break; }
			++temp;
		}
		
		return point_x_y(temp2, temp);
	};

    point_x_y firstPoint = takePoint(0);
    point_x_y secondPoint = takePoint(firstPoint.y + 1);
	
    return std::make_pair(firstPoint, secondPoint);
}

/////////////////////////
void calcPos(std::vector<std::pair<point_x_y, point_x_y>> & vectorOfPoiters,
	 QVector<stroka> &vect, float &maxSize, QString & debugText)
{
	int maxLength = -1;

    for (auto it = vect.begin() + 1; it != vect.end(); ++it)
        maxLength = std::max((*it).TextEdit3->toPlainText().toInt(), maxLength);

    if (maxLength < 0) maxLength = 25;
	
	for (auto it = vect.begin() + 1; it != vect.end(); ++it)
	{
		vectorOfPoiters.push_back(fun(it, maxLength, debugText));
		//enumeration of point'
		maxSize = std::max(maxSize, vectorOfPoiters.back().first.y);
		maxSize = std::max(maxSize, vectorOfPoiters.back().first.x);
		maxSize = std::max(maxSize, vectorOfPoiters.back().second.x);
		maxSize = std::max(maxSize, vectorOfPoiters.back().second.y);		
	}
}

////////////////////////////////////
void drawFunc(float& maxSize, QString &debugText, std::vector<std::pair<point_x_y, point_x_y>> &vectorOfPoiters,
	QVector<stroka> &vect, QGraphicsScene *myScene)
{
	QPen* line = new QPen();
	line->setWidth(4);
	QPen* brick = new QPen(QColor(201, 240, 100, 100));

	QGraphicsTextItem* itemText = myScene->addText("");
	itemText->setPos(0, 0);
	QFont font;
	font.setPointSizeF(7);
	itemText->setFont(font);

	myScene->addText(QString::number(0), font)->setPos(5, maxSize - indentationY);
	{
		for (int i = 1; i <= maxSize/20; ++i) {
			if (i < 10) {
				myScene->addText(QString::number(i), font)->setPos(5, maxSize - indentationY - i * 20 - 10);
			}
			else myScene->addText(QString::number(i), font)->setPos(0, maxSize - indentationY - i * 20 - 10);
		}
		for (int i = 1; i <= maxSize/20; ++i) {
			myScene->addText(QString::number(i), font)->setPos(i * 20 + 14, maxSize - indentationY);
		}

		int temp = maxSize / 10;
		for (int j = 2; j < temp + 2; j++)
			for (int i = -2; i < temp-2; i++)
			{
				myScene->addRect(QRectF(10 * j, 10 * i, 10, 10), *brick);
			}
	}

	for (int i = 0; i < vectorOfPoiters.size(); ++i)
	{
		line->setColor(*(vect[i + 1].draw_color));
		myScene->addLine(
			20 + vectorOfPoiters[i].first.x * 20,
			maxSize - vectorOfPoiters[i].first.y * 20 - indentationY,
			20 + vectorOfPoiters[i].second.x * 20,
			maxSize - vectorOfPoiters[i].second.y * 20 - indentationY,
			*line);

		//debugging
		debugText += QString::number(vectorOfPoiters[i].first.x) + ' ' + QString::number(vectorOfPoiters[i].first.y) +
			' ' + QString::number(vectorOfPoiters[i].second.x) + ' ' + QString::number(vectorOfPoiters[i].second.y) + '\n';
	}
}

void Losen::ClickBtnDrawGrph() {
	//Disable Enable
	ui.BtnGrphClr->setEnabled(true);
	ui.BtnClrAnsw->setEnabled(true);
	ui.BtnDrawGrph->setDisabled(true);
	QString debugText = "";
	std::vector<std::pair<point_x_y, point_x_y>> vectorOfPoiters;
	vectorOfPoiters.reserve(ui.CntEquations->value());
	float maxSize = 0; 

    //for Draw line
	calcPos(vectorOfPoiters, vect, maxSize, debugText);

    //output  on layOutANswer
    operations_research::insertAnsver(ui, vect);


	//Size of scene
	if (maxSize * 20 < widthScene) {
		maxSize = widthScene;
	} else maxSize *= 20;
	myScene->setSceneRect(0, 0, maxSize + indentationX, maxSize);
	
	drawFunc(maxSize, debugText, vectorOfPoiters, vect, myScene);

	ui.label_2->setText(debugText);
}

void Losen::ClickBtnGrphClr() {
	//Disable Enable
	ui.BtnGrphClr->setDisabled(true);
	ui.BtnDrawGrph->setEnabled(true);

	myScene->clear();
	myScene->setSceneRect(0, 0, 0, 0);
}

