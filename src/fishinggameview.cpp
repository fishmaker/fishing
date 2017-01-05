#include "game/View/fishinggameview.hpp"

game::FishingGameView::FishingGameView(QWidget *a_Parent)
    :QWidget(a_Parent)
{
    this->setGeometry(game::L1Dimensions);
}

game::FishingGameView::~FishingGameView()
{

}

void game::FishingGameView::keyPressEvent(QKeyEvent *a_Event)
{
    this->m_Keys[a_Event->key()] = true;
    QWidget::keyPressEvent(a_Event);
}

void game::FishingGameView::keyReleaseEvent(QKeyEvent *a_Event)
{
    i32 m_CurrentKey = a_Event->key();
    switch (m_CurrentKey) {
        case Qt::Key_H:
        case Qt::Key_G:
        this->m_Keys[a_Event->key()] = false;
        break;
    }

    // TODO: else -> signal() or call function

    QWidget::keyReleaseEvent(a_Event);
}

void game::FishingGameView::Setup()
{
    // Игровое окно
    this->m_GViews[0].setParent(this);
    this->m_GViews[0].setGeometry(20, 20, 800, 400);
    // TODO: this->m_GViews[0].setScene();

    // Эхолот
    this->m_GViews[1].setParent(this);
    this->m_GViews[1].setGeometry(850, 20, 128, 128);
    // TODO: this->m_GViews[1].setScene();

    // Время
    this->m_Labels[0].setParent(this);
    this->m_Labels[0].setGeometry(880, 160, 71, 21);
    this->m_Labels[0].setFont(QFont("Sans Serif", 18));
    this->m_Labels[0].setText("09:00");
    this->m_Labels[0].show();

    //
    this->m_Bars[0].setParent(this);
    this->m_Bars[0].setGeometry(250, 440, 401, 16);
    this->m_Bars[0].setValue(15);
    this->m_Bars[0].setTextVisible(false);
    this->m_Bars[0].show();

    //
    this->m_Bars[1].setParent(this);
    this->m_Bars[1].setGeometry(250, 460, 401, 16);
    this->m_Bars[1].setValue(15);
    this->m_Bars[1].setTextVisible(false);
    this->m_Bars[1].show();

    //
    this->m_Bars[2].setParent(this);
    this->m_Bars[2].setGeometry(20, 430, 20, 91);
    this->m_Bars[2].setValue(15);
    this->m_Bars[2].setTextVisible(false);
    this->m_Bars[2].setOrientation(Qt::Vertical);
    this->m_Bars[2].show();

    //
    this->m_Bars[3].setParent(this);
    this->m_Bars[3].setGeometry(40, 430, 20, 91);
    this->m_Bars[3].setValue(15);
    this->m_Bars[3].setTextVisible(false);
    this->m_Bars[3].setOrientation(Qt::Vertical);
    this->m_Bars[3].show();

    //
    this->m_Bars[4].setParent(this);
    this->m_Bars[4].setGeometry(60, 430, 20, 91);
    this->m_Bars[4].setValue(15);
    this->m_Bars[4].setTextVisible(false);
    this->m_Bars[4].setOrientation(Qt::Vertical);
    this->m_Bars[4].show();

    // Б.
    this->m_Labels[1].setParent(this);
    this->m_Labels[1].setGeometry(20, 520, 16, 16);
    this->m_Labels[1].setText(QString("Б."));
    this->m_Labels[1].show();

    // Е.
    this->m_Labels[2].setParent(this);
    this->m_Labels[2].setGeometry(40, 520, 16, 16);
    this->m_Labels[2].setText(QString("Е."));
    this->m_Labels[2].show();

    // А.
    this->m_Labels[3].setParent(this);
    this->m_Labels[3].setGeometry(60, 520, 16, 16);
    this->m_Labels[3].setText(QString("А."));
    this->m_Labels[3].show();

    // Предметы
    this->m_GViews[2].setParent(this);
    this->m_GViews[2].setGeometry(850, 240, 128, 192);
    // TODO: this->m_GViews[2].setScene();

    // 1
    this->m_Buttons[0].setGeometry(870, 440, 21, 23);
    this->m_Buttons[0].setParent(this);
    this->m_Buttons[0].setText("1");
    this->m_Buttons[0].setDefault(true);
    this->m_Buttons[0].show();

    // 2
    this->m_Buttons[1].setGeometry(900, 440, 21, 23);
    this->m_Buttons[1].setParent(this);
    this->m_Buttons[1].setText("2");
    this->m_Buttons[1].setDefault(false);
    this->m_Buttons[1].show();

    // 3
    this->m_Buttons[2].setGeometry(930, 440, 21, 23);
    this->m_Buttons[2].setParent(this);
    this->m_Buttons[2].setText("3");
    this->m_Buttons[2].setDefault(false);
    this->m_Buttons[2].show();

    // Катушка
    this->m_Labels[4].setParent(this);
    this->m_Labels[4].setGeometry(180, 440, 61, 20);
    this->m_Labels[4].setText(QString("Катушка"));
    this->m_Labels[4].show();

    // Удочка
    this->m_Labels[5].setParent(this);
    this->m_Labels[5].setGeometry(190, 460, 51, 16);
    this->m_Labels[5].setText(QString("Удочка"));
    this->m_Labels[5].show();

    // На базу
    this->m_Buttons[3].setGeometry(850, 190, 128, 31);
    this->m_Buttons[3].setParent(this);
    this->m_Buttons[3].setText(QString("На базу"));
    this->m_Buttons[3].setDefault(false);
    this->m_Buttons[3].show();

    // Садок
    this->m_Buttons[4].setGeometry(200, 490, 83, 41);
    this->m_Buttons[4].setParent(this);
    this->m_Buttons[4].setText(QString("Садок"));
    this->m_Buttons[4].setDefault(false);
    this->m_Buttons[4].show();

    // Рюкзак
    this->m_Buttons[5].setGeometry(290, 490, 83, 41);
    this->m_Buttons[5].setParent(this);
    this->m_Buttons[5].setText(QString("Рюкзак"));
    this->m_Buttons[5].setDefault(false);
    this->m_Buttons[5].show();

    // Планшет
    this->m_Buttons[6].setGeometry(380, 490, 83, 41);
    this->m_Buttons[6].setParent(this);
    this->m_Buttons[6].setText(QString("Планшет"));
    this->m_Buttons[6].setDefault(false);
    this->m_Buttons[6].show();

    // Еда
    this->m_Buttons[7].setGeometry(470, 490, 83, 41);
    this->m_Buttons[7].setParent(this);
    this->m_Buttons[7].setText(QString("Еда"));
    this->m_Buttons[7].setDefault(false);
    this->m_Buttons[7].show();

    // Прикорм
    this->m_Buttons[8].setGeometry(560, 490, 83, 41);
    this->m_Buttons[8].setParent(this);
    this->m_Buttons[8].setText(QString("Прикорм"));
    this->m_Buttons[8].setDefault(false);
    this->m_Buttons[8].show();

    // Глубина
    this->m_Slider[0].setParent(this);
    this->m_Slider[0].setGeometry(690, 430, 20, 101);
    this->m_Slider[0].setOrientation(Qt::Vertical);
    this->m_Slider[0].show();

    // Блокирование лески
    this->m_CheckBox[0].setGeometry(720, 440, 101, 16);
    this->m_CheckBox[0].setParent(this);
    this->m_CheckBox[0].setText(QString("Блок. лески"));
    this->m_CheckBox[0].show();

    // Глубина
    this->m_Labels[6].setParent(this);
    this->m_Labels[6].setGeometry(720, 490, 64, 15);
    this->m_Labels[6].setText(QString("Глубина"));
    this->m_Labels[6].show();

    // 210 см.
    this->m_Labels[7].setParent(this);
    this->m_Labels[7].setGeometry(730, 510, 64, 15);
    this->m_Labels[7].setText(QString("210 см."));
    this->m_Labels[7].show();
}
