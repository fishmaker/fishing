#ifndef ERRORVIEW_H
#define ERRORVIEW_H

#include <QWidget>

namespace game {

class ErrorView : public QWidget
{
    Q_OBJECT

public:
    void Setup();

public:
    explicit ErrorView(QWidget *a_Parent =0);
    ~ErrorView();
};

} // namespace game

#endif // ERRORVIEW_H
