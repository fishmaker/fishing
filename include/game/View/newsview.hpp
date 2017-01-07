#ifndef NEWSVIEW_H
#define NEWSVIEW_H

#include <QWidget>

namespace game {

class NewsView : public QWidget
{
    Q_OBJECT

public:
    void Setup();

public:
    explicit NewsView(QWidget *a_Parent =0);
    ~NewsView();
};

} // namespace game

#endif // NEWSVIEW_H

