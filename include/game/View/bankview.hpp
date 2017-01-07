#ifndef BANKVIEW_H
#define BANKVIEW_H

#include <QWidget>

namespace game {

class BankView : public QWidget
{
    Q_OBJECT

public:
    void Setup();

public:
    explicit BankView(QWidget *a_Parent =0);
    ~BankView();
};

} // namespace game

#endif // BANKVIEW_H

